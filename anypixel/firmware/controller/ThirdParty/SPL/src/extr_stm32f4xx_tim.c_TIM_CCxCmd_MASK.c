
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int CCER; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(TIM_TypeDef* VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
  uint16_t VAR_4 = 0;


  FUNC_3(FUNC_2(VAR_1));
  FUNC_3(FUNC_1(VAR_2));
  FUNC_3(FUNC_0(VAR_3));

  VAR_4 = VAR_0 << VAR_2;


  VAR_1->CCER &= (uint16_t)~ VAR_4;


  VAR_1->CCER |= (uint16_t)(VAR_3 << VAR_2);
}
