
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int TIM_OSSIState; int TIM_LOCKLevel; int TIM_Break; int TIM_BreakPolarity; int TIM_AutomaticOutput; int TIM_DeadTime; scalar_t__ TIM_OSSRState; } ;
struct TYPE_6__ {int BDTR; } ;
typedef TYPE_1__ TIM_TypeDef ;
typedef TYPE_2__ TIM_BDTRInitTypeDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

void FUNC_8(TIM_TypeDef* VAR_0, TIM_BDTRInitTypeDef *VAR_1)
{

  FUNC_7(FUNC_3(VAR_0));
  FUNC_7(FUNC_6(VAR_1->TIM_OSSRState));
  FUNC_7(FUNC_5(VAR_1->TIM_OSSIState));
  FUNC_7(FUNC_4(VAR_1->TIM_LOCKLevel));
  FUNC_7(FUNC_2(VAR_1->TIM_Break));
  FUNC_7(FUNC_1(VAR_1->TIM_BreakPolarity));
  FUNC_7(FUNC_0(VAR_1->TIM_AutomaticOutput));


  VAR_0->BDTR = (uint32_t)VAR_1->TIM_OSSRState | VAR_1->TIM_OSSIState |
             VAR_1->TIM_LOCKLevel | VAR_1->TIM_DeadTime |
             VAR_1->TIM_Break | VAR_1->TIM_BreakPolarity |
             VAR_1->TIM_AutomaticOutput;
}
