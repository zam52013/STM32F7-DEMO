/**
  ******************************************************************************
  * @file    FPU_DEMONSTRATION\Src\main.c
  * @author  zam
  * @version V1.0.0
  * @date    2018-03-31
  * @brief   Main program body
  ******************************************************************************/
	#include "main.h"
	int main()
	{
		SystemInit();
		SysTick_Config(SystemCoreClock / 1000);			//Ê±»ù1ms
		//SystemClock_Config();
		while(1);
		return 0;
	}
	
	
	


	