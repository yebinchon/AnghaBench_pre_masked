
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CR; int AR; } ;
typedef scalar_t__ FLASH_Status ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

FLASH_Status FUNC_3(uint32_t VAR_5)
{
  FLASH_Status VAR_6 = VAR_1;


  FUNC_2(FUNC_1(VAR_5));


  VAR_6 = FUNC_0(VAR_4);

  if(VAR_6 == VAR_1)
  {

    VAR_0->CR |= VAR_2;
    VAR_0->AR = VAR_5;
    VAR_0->CR |= VAR_3;


    VAR_6 = FUNC_0(VAR_4);


    VAR_0->CR &= ~VAR_2;
  }


  return VAR_6;
}
