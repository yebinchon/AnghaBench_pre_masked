
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR; int CFGR2; } ;


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

void FUNC_0 (void)
{
  uint32_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;


  VAR_10 = VAR_3->CFGR & VAR_8;

  switch (VAR_10)
  {
    case 0x00:
      VAR_9 = VAR_2;
      break;
    case 0x04:
      VAR_9 = VAR_1;
      break;
    case 0x08:

      VAR_11 = VAR_3->CFGR & VAR_6;
      VAR_12 = VAR_3->CFGR & VAR_7;
      VAR_11 = ( VAR_11 >> 18) + 2;

      if (VAR_12 == 0x00)
      {

        VAR_9 = (VAR_2 >> 1) * VAR_11;
      }
      else
      {
        VAR_13 = (VAR_3->CFGR2 & VAR_4) + 1;

        VAR_9 = (VAR_1 / VAR_13) * VAR_11;
      }
      break;
    default:
      VAR_9 = VAR_2;
      break;
  }


  VAR_10 = VAR_0[((VAR_3->CFGR & VAR_5) >> 4)];

  VAR_9 >>= VAR_10;
}
