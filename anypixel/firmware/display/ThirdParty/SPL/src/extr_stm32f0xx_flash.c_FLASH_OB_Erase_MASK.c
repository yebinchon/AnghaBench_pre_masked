
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int CR; } ;
struct TYPE_3__ {int RDP; } ;
typedef scalar_t__ FLASH_Status ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

FLASH_Status FUNC_2(void)
{
  uint16_t VAR_10 = VAR_8;

  FLASH_Status VAR_11 = VAR_1;


  if(FUNC_0() != VAR_9)
  {
    VAR_10 = 0x00;
  }


  VAR_11 = FUNC_1(VAR_5);

  if(VAR_11 == VAR_1)
  {

    VAR_0->CR |= VAR_2;
    VAR_0->CR |= VAR_4;


    VAR_11 = FUNC_1(VAR_5);

    if(VAR_11 == VAR_1)
    {

      VAR_0->CR &= ~VAR_2;


      VAR_0->CR |= VAR_3;


      VAR_7->RDP = (uint16_t)VAR_10;


      VAR_11 = FUNC_1(VAR_5);

      if(VAR_11 != VAR_6)
      {

        VAR_0->CR &= ~VAR_3;
      }
    }
    else
    {
      if (VAR_11 != VAR_6)
      {

        VAR_0->CR &= ~VAR_3;
      }
    }
  }

  return VAR_11;
}
