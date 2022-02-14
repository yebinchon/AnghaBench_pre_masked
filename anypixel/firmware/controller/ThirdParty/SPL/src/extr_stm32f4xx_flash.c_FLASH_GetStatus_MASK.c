
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int SR; } ;
typedef int FLASH_Status ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

FLASH_Status FUNC_0(void)
{
  FLASH_Status VAR_9 = VAR_2;

  if((VAR_0->SR & VAR_6) == VAR_6)
  {
    VAR_9 = VAR_1;
  }
  else
  {
    if((VAR_0->SR & VAR_8) != (uint32_t)0x00)
    {
      VAR_9 = VAR_5;
    }
    else
    {
      if((VAR_0->SR & (uint32_t)0xEF) != (uint32_t)0x00)
      {
        VAR_9 = VAR_4;
      }
      else
      {
        if((VAR_0->SR & VAR_7) != (uint32_t)0x00)
        {
          VAR_9 = VAR_3;
        }
        else
        {
          VAR_9 = VAR_2;
        }
      }
    }
  }

  return VAR_9;
}
