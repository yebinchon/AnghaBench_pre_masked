
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

FLASH_Status FUNC_0(void)
{
  FLASH_Status VAR_8 = VAR_2;

  if((VAR_0->SR & VAR_5) == VAR_5)
  {
    VAR_8 = VAR_1;
  }
  else
  {
    if((VAR_0->SR & (uint32_t)VAR_6)!= (uint32_t)0x00)
    {
      VAR_8 = VAR_4;
    }
    else
    {
      if((VAR_0->SR & (uint32_t)(VAR_7)) != (uint32_t)0x00)
      {
        VAR_8 = VAR_3;
      }
      else
      {
        VAR_8 = VAR_2;
      }
    }
  }

  return VAR_8;
}
