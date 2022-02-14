
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MAIN_CNT; int TIM2_COMP; int TIM2_CONF; int TIM1_COMP; int TIM1_CONF; int TIM0_COMP; int TIM0_CONF; int GEN_CONF; } ;
typedef TYPE_1__ hpetReg_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_0(void)
{
 hpetReg_t *VAR_2 = (hpetReg_t *) VAR_0;
 hpetReg_t *VAR_3 = &VAR_1;

 VAR_3->GEN_CONF = VAR_2->GEN_CONF;
 VAR_3->TIM0_CONF = VAR_2->TIM0_CONF;
 VAR_3->TIM0_COMP = VAR_2->TIM0_COMP;
 VAR_3->TIM1_CONF = VAR_2->TIM1_CONF;
 VAR_3->TIM1_COMP = VAR_2->TIM1_COMP;
 VAR_3->TIM2_CONF = VAR_2->TIM2_CONF;
 VAR_3->TIM2_COMP = VAR_2->TIM2_COMP;
 VAR_3->MAIN_CNT = VAR_2->MAIN_CNT;
}
