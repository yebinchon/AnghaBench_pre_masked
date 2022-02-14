
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MCR; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_2, FunctionalState VAR_3)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  if (VAR_3 != VAR_0)
  {

    VAR_2->MCR |= VAR_1;
  }
  else
  {

    VAR_2->MCR &= ~VAR_1;
  }
}
