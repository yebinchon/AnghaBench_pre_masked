
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int AHB1LPENR; } ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_2, FunctionalState VAR_3)
{

  FUNC_2(FUNC_1(VAR_2));
  FUNC_2(FUNC_0(VAR_3));
  if (VAR_3 != VAR_0)
  {
    VAR_1->AHB1LPENR |= VAR_2;
  }
  else
  {
    VAR_1->AHB1LPENR &= ~VAR_2;
  }
}
