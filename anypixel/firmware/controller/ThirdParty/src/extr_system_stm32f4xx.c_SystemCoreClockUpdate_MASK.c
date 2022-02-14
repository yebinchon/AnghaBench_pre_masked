
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR; int PLLCFGR; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_0(void)
{
  uint32_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 2, VAR_14 = 0, VAR_15 = 2;


  VAR_11 = VAR_3->CFGR & VAR_5;

  switch (VAR_11)
  {
    case 0x00:
      VAR_10 = VAR_2;
      break;
    case 0x04:
      VAR_10 = VAR_1;
      break;
    case 0x08:




      VAR_14 = (VAR_3->PLLCFGR & VAR_9) >> 22;
      VAR_15 = VAR_3->PLLCFGR & VAR_6;

      if (VAR_14 != 0)
      {

        VAR_12 = (VAR_1 / VAR_15) * ((VAR_3->PLLCFGR & VAR_7) >> 6);
      }
      else
      {

        VAR_12 = (VAR_2 / VAR_15) * ((VAR_3->PLLCFGR & VAR_7) >> 6);
      }

      VAR_13 = (((VAR_3->PLLCFGR & VAR_8) >>16) + 1 ) *2;
      VAR_10 = VAR_12/VAR_13;
      break;
    default:
      VAR_10 = VAR_2;
      break;
  }


  VAR_11 = VAR_0[((VAR_3->CFGR & VAR_4) >> 4)];

  VAR_10 >>= VAR_11;
}
