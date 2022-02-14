
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ TIM_Channel; int TIM_ICPrescaler; int TIM_ICFilter; int TIM_ICSelection; int TIM_ICPolarity; } ;
typedef int TIM_TypeDef ;
typedef TYPE_1__ TIM_ICInitTypeDef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(TIM_TypeDef* VAR_3, TIM_ICInitTypeDef* VAR_4)
{

  FUNC_15(FUNC_4(VAR_3));
  FUNC_15(FUNC_1(VAR_4->TIM_ICPolarity));
  FUNC_15(FUNC_3(VAR_4->TIM_ICSelection));
  FUNC_15(FUNC_2(VAR_4->TIM_ICPrescaler));
  FUNC_15(FUNC_0(VAR_4->TIM_ICFilter));

  if (VAR_4->TIM_Channel == VAR_0)
  {

    FUNC_7(VAR_3, VAR_4->TIM_ICPolarity,
               VAR_4->TIM_ICSelection,
               VAR_4->TIM_ICFilter);

    FUNC_11(VAR_3, VAR_4->TIM_ICPrescaler);
  }
  else if (VAR_4->TIM_Channel == VAR_1)
  {

    FUNC_15(FUNC_5(VAR_3));
    FUNC_8(VAR_3, VAR_4->TIM_ICPolarity,
               VAR_4->TIM_ICSelection,
               VAR_4->TIM_ICFilter);

    FUNC_12(VAR_3, VAR_4->TIM_ICPrescaler);
  }
  else if (VAR_4->TIM_Channel == VAR_2)
  {

    FUNC_15(FUNC_6(VAR_3));
    FUNC_9(VAR_3, VAR_4->TIM_ICPolarity,
               VAR_4->TIM_ICSelection,
               VAR_4->TIM_ICFilter);

    FUNC_13(VAR_3, VAR_4->TIM_ICPrescaler);
  }
  else
  {

    FUNC_15(FUNC_6(VAR_3));
    FUNC_10(VAR_3, VAR_4->TIM_ICPolarity,
               VAR_4->TIM_ICSelection,
               VAR_4->TIM_ICFilter);

    FUNC_14(VAR_3, VAR_4->TIM_ICPrescaler);
  }
}
