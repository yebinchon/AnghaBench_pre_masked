
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int SMCR; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

void FUNC_5(TIM_TypeDef* VAR_1, uint16_t VAR_2, uint16_t VAR_3,
                   uint16_t VAR_4)
{
  uint16_t VAR_5 = 0;


  FUNC_4(FUNC_3(VAR_1));
  FUNC_4(FUNC_2(VAR_2));
  FUNC_4(FUNC_1(VAR_3));
  FUNC_4(FUNC_0(VAR_4));

  VAR_5 = VAR_1->SMCR;

  VAR_5 &= VAR_0;

  VAR_5 |= (uint16_t)(VAR_2 | (uint16_t)(VAR_3 | (uint16_t)(VAR_4 << (uint16_t)8)));

  VAR_1->SMCR = VAR_5;
}
