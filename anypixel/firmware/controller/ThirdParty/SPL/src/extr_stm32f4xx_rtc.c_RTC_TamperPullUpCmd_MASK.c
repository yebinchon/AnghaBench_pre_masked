
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int TAFCR; } ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2(FunctionalState VAR_3)
{

  FUNC_1(FUNC_0(VAR_3));

 if (VAR_3 != VAR_0)
  {

    VAR_1->TAFCR &= (uint32_t)~VAR_2;
  }
  else
  {

    VAR_1->TAFCR |= (uint32_t)VAR_2;
  }
}
