
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CR; } ;
typedef scalar_t__ FLASH_Status ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

FLASH_Status FUNC_1(void)
{
  FLASH_Status VAR_5 = VAR_1;


  VAR_5 = FUNC_0(VAR_4);

  if(VAR_5 == VAR_1)
  {

     VAR_0->CR |= VAR_2;
     VAR_0->CR |= VAR_3;


    VAR_5 = FUNC_0(VAR_4);


    VAR_0->CR &= ~VAR_2;
  }


  return VAR_5;
}
