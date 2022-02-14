
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int SWTRIGR; } ;
typedef scalar_t__ FunctionalState ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_3, FunctionalState VAR_4)
{

  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));

  if (VAR_4 != VAR_2)
  {

    VAR_0->SWTRIGR |= (uint32_t)VAR_1 << (VAR_3 >> 4);
  }
  else
  {

    VAR_0->SWTRIGR &= ~((uint32_t)VAR_1 << (VAR_3 >> 4));
  }
}
