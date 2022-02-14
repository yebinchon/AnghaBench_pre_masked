
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int IER; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(CAN_TypeDef* VAR_1, uint32_t VAR_2, FunctionalState VAR_3)
{

  FUNC_3(FUNC_0(VAR_1));
  FUNC_3(FUNC_1(VAR_2));
  FUNC_3(FUNC_2(VAR_3));

  if (VAR_3 != VAR_0)
  {

    VAR_1->IER |= VAR_2;
  }
  else
  {

    VAR_1->IER &= ~VAR_2;
  }
}
