
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int CR; } ;
struct TYPE_3__ {int USER; } ;
typedef scalar_t__ FLASH_Status ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ) ;

FLASH_Status FUNC_3(uint8_t VAR_6)
{
  FLASH_Status VAR_7 = VAR_1;


  FUNC_2(FUNC_1(VAR_6));


  VAR_7 = FUNC_0(VAR_3);

  if(VAR_7 == VAR_1)
  {

    VAR_0->CR |= VAR_2;

    VAR_5->USER = VAR_6 | 0xF7;


    VAR_7 = FUNC_0(VAR_3);

    if(VAR_7 != VAR_4)
    {

      VAR_0->CR &= ~VAR_2;
    }
  }

  return VAR_7;
}
