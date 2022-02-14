
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CFGR; int PLLCFGR; } ;
struct TYPE_4__ {int SYSCLK_Frequency; int HCLK_Frequency; int PCLK1_Frequency; int PCLK2_Frequency; } ;
typedef TYPE_1__ RCC_ClocksTypeDef ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_0(RCC_ClocksTypeDef* VAR_12)
{
  uint32_t VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 2, VAR_17 = 0, VAR_18 = 2;


  VAR_13 = VAR_3->CFGR & VAR_7;

  switch (VAR_13)
  {
    case 0x00:
      VAR_12->SYSCLK_Frequency = VAR_2;
      break;
    case 0x04:
      VAR_12->SYSCLK_Frequency = VAR_1;
      break;
    case 0x08:




      VAR_17 = (VAR_3->PLLCFGR & VAR_11) >> 22;
      VAR_18 = VAR_3->PLLCFGR & VAR_8;

      if (VAR_17 != 0)
      {

        VAR_15 = (VAR_1 / VAR_18) * ((VAR_3->PLLCFGR & VAR_9) >> 6);
      }
      else
      {

        VAR_15 = (VAR_2 / VAR_18) * ((VAR_3->PLLCFGR & VAR_9) >> 6);
      }

      VAR_16 = (((VAR_3->PLLCFGR & VAR_10) >>16) + 1 ) *2;
      VAR_12->SYSCLK_Frequency = VAR_15/VAR_16;
      break;
    default:
      VAR_12->SYSCLK_Frequency = VAR_2;
      break;
  }



  VAR_13 = VAR_3->CFGR & VAR_4;
  VAR_13 = VAR_13 >> 4;
  VAR_14 = VAR_0[VAR_13];

  VAR_12->HCLK_Frequency = VAR_12->SYSCLK_Frequency >> VAR_14;


  VAR_13 = VAR_3->CFGR & VAR_5;
  VAR_13 = VAR_13 >> 10;
  VAR_14 = VAR_0[VAR_13];

  VAR_12->PCLK1_Frequency = VAR_12->HCLK_Frequency >> VAR_14;


  VAR_13 = VAR_3->CFGR & VAR_6;
  VAR_13 = VAR_13 >> 13;
  VAR_14 = VAR_0[VAR_13];

  VAR_12->PCLK2_Frequency = VAR_12->HCLK_Frequency >> VAR_14;
}
