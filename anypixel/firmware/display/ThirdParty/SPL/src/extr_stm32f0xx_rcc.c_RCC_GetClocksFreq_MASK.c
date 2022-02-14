
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CFGR; int CFGR2; int CFGR3; } ;
struct TYPE_4__ {int SYSCLK_Frequency; int HCLK_Frequency; int PCLK_Frequency; int ADCCLK_Frequency; int CECCLK_Frequency; int I2C1CLK_Frequency; int USART1CLK_Frequency; int USART2CLK_Frequency; int USBCLK_Frequency; } ;
typedef TYPE_1__ RCC_ClocksTypeDef ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

void FUNC_0(RCC_ClocksTypeDef* VAR_24)
{
  uint32_t VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;


  VAR_25 = VAR_6->CFGR & VAR_23;

  switch (VAR_25)
  {
    case 0x00:
      VAR_24->SYSCLK_Frequency = VAR_4;
      break;
    case 0x04:
      VAR_24->SYSCLK_Frequency = VAR_1;
      break;
    case 0x08:

      VAR_26 = VAR_6->CFGR & VAR_20;
      VAR_27 = VAR_6->CFGR & VAR_21;
      VAR_26 = ( VAR_26 >> 18) + 2;

      if (VAR_27 == 0x00)
      {

        VAR_30 = (VAR_4 >> 1) * VAR_26;
      }
      else
      {
        VAR_28 = (VAR_6->CFGR2 & VAR_7) + 1;

        VAR_30 = (VAR_1 / VAR_28) * VAR_26;
      }
      VAR_24->SYSCLK_Frequency = VAR_30;
      break;
    case 0x0C:
      VAR_24->SYSCLK_Frequency = VAR_3;
      break;
    default:
      VAR_24->SYSCLK_Frequency = VAR_4;
      break;
  }


  VAR_25 = VAR_6->CFGR & VAR_19;
  VAR_25 = VAR_25 >> 4;
  VAR_29 = VAR_0[VAR_25];

  VAR_24->HCLK_Frequency = VAR_24->SYSCLK_Frequency >> VAR_29;


  VAR_25 = VAR_6->CFGR & VAR_22;
  VAR_25 = VAR_25 >> 8;
  VAR_29 = VAR_0[VAR_25];

  VAR_24->PCLK_Frequency = VAR_24->HCLK_Frequency >> VAR_29;


  if((VAR_6->CFGR3 & VAR_8) != VAR_8)
  {

    VAR_24->ADCCLK_Frequency = VAR_2;
  }
  else
  {
    if((VAR_6->CFGR & VAR_18) != VAR_18)
    {

      VAR_24->ADCCLK_Frequency = VAR_24->PCLK_Frequency >> 1;
    }
    else
    {

      VAR_24->ADCCLK_Frequency = VAR_24->PCLK_Frequency >> 2;
    }

  }


  if((VAR_6->CFGR3 & VAR_9) != VAR_9)
  {

    VAR_24->CECCLK_Frequency = VAR_4 / 244;
  }
  else
  {

    VAR_24->CECCLK_Frequency = VAR_5;
  }


  if((VAR_6->CFGR3 & VAR_10) != VAR_10)
  {

    VAR_24->I2C1CLK_Frequency = VAR_4;
  }
  else
  {

    VAR_24->I2C1CLK_Frequency = VAR_24->SYSCLK_Frequency;
  }


  if((VAR_6->CFGR3 & VAR_11) == 0x0)
  {

    VAR_24->USART1CLK_Frequency = VAR_24->PCLK_Frequency;
  }
  else if((VAR_6->CFGR3 & VAR_11) == VAR_12)
  {

    VAR_24->USART1CLK_Frequency = VAR_24->SYSCLK_Frequency;
  }
  else if((VAR_6->CFGR3 & VAR_11) == VAR_13)
  {

    VAR_24->USART1CLK_Frequency = VAR_5;
  }
  else if((VAR_6->CFGR3 & VAR_11) == VAR_11)
  {

    VAR_24->USART1CLK_Frequency = VAR_4;
  }


  if((VAR_6->CFGR3 & VAR_14) == 0x0)
  {

    VAR_24->USART2CLK_Frequency = VAR_24->PCLK_Frequency;
  }
  else if((VAR_6->CFGR3 & VAR_14) == VAR_15)
  {

    VAR_24->USART2CLK_Frequency = VAR_24->SYSCLK_Frequency;
  }
  else if((VAR_6->CFGR3 & VAR_14) == VAR_16)
  {

    VAR_24->USART2CLK_Frequency = VAR_5;
  }
  else if((VAR_6->CFGR3 & VAR_14) == VAR_14)
  {

    VAR_24->USART2CLK_Frequency = VAR_4;
  }


  if((VAR_6->CFGR3 & VAR_17) != VAR_17)
  {

    VAR_24->USBCLK_Frequency = VAR_3;
  }
  else
  {

    VAR_24->USBCLK_Frequency = VAR_30;
  }
}
