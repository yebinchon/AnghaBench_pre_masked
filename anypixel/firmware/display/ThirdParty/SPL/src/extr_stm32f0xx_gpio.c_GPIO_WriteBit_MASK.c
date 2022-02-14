
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_4__ {void* BRR; void* BSRR; } ;
typedef TYPE_1__ GPIO_TypeDef ;
typedef scalar_t__ BitAction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(GPIO_TypeDef* VAR_1, uint16_t VAR_2, BitAction VAR_3)
{

  FUNC_3(FUNC_1(VAR_1));
  FUNC_3(FUNC_0(VAR_2));
  FUNC_3(FUNC_2(VAR_3));

  if (VAR_3 != VAR_0)
  {
    VAR_1->BSRR = VAR_2;
  }
  else
  {
    VAR_1->BRR = VAR_2 ;
  }
}
