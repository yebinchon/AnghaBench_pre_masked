
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SWTRIGR; } ;
typedef scalar_t__ FunctionalState ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(FunctionalState VAR_4)
{

  FUNC_1(FUNC_0(VAR_4));

  if (VAR_4 != VAR_1)
  {

    VAR_0->SWTRIGR |= VAR_3;
  }
  else
  {

    VAR_0->SWTRIGR &= VAR_2;
  }
}
