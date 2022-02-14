
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int NVIC_IRQChannelCmd; scalar_t__ NVIC_IRQChannelPriority; int NVIC_IRQChannel; } ;
struct TYPE_12__ {int TIM_ICFilter; int TIM_ICPrescaler; int TIM_ICSelection; int TIM_ICPolarity; int TIM_Channel; } ;
struct TYPE_11__ {int TIM_Pulse; int TIM_OCNIdleState; int TIM_OCIdleState; int TIM_OCNPolarity; int TIM_OCPolarity; int TIM_OutputNState; int TIM_OutputState; int TIM_OCMode; } ;
struct TYPE_10__ {int TIM_Prescaler; int TIM_Period; scalar_t__ TIM_RepetitionCounter; void* TIM_CounterMode; int TIM_ClockDivision; } ;
typedef TYPE_1__ TIM_TimeBaseInitTypeDef ;
typedef TYPE_2__ TIM_OCInitTypeDef ;
typedef TYPE_3__ TIM_ICInitTypeDef ;
typedef TYPE_4__ NVIC_InitTypeDef ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 void* VAR_11 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_23 ;

void FUNC_12() {
    TIM_TimeBaseInitTypeDef VAR_24;
    TIM_OCInitTypeDef VAR_25;
    NVIC_InitTypeDef VAR_26;
    TIM_ICInitTypeDef VAR_27;


    FUNC_2(VAR_1, VAR_0);
    FUNC_3(VAR_2, VAR_0);
 FUNC_4(VAR_3, VAR_0);

    FUNC_0(VAR_23, VAR_4);


    VAR_24.TIM_Prescaler = 0;
    VAR_24.TIM_ClockDivision = VAR_8;
    VAR_24.TIM_CounterMode = VAR_11;
    VAR_24.TIM_Period = 1920;
    VAR_24.TIM_RepetitionCounter = 0;
    FUNC_10(VAR_5, &VAR_24);

    VAR_25.TIM_OCMode = VAR_17;
    VAR_25.TIM_OutputState = VAR_22;
    VAR_25.TIM_OutputNState = VAR_21;
    VAR_25.TIM_Pulse = 1000;
    VAR_25.TIM_OCPolarity = VAR_20;
    VAR_25.TIM_OCNPolarity = VAR_19;
    VAR_25.TIM_OCIdleState = VAR_16;
    VAR_25.TIM_OCNIdleState = VAR_18;
    FUNC_9(VAR_5, &VAR_25);

    FUNC_5(VAR_5, VAR_0);
    FUNC_6(VAR_5, VAR_0);


    VAR_27.TIM_Channel = VAR_10;
    VAR_27.TIM_ICPolarity = VAR_13;
    VAR_27.TIM_ICSelection = VAR_14;
    VAR_27.TIM_ICPrescaler = VAR_12;
    VAR_27.TIM_ICFilter = 0x0;

    FUNC_11(&VAR_24);
    VAR_24.TIM_Prescaler = 199;
    VAR_24.TIM_ClockDivision = VAR_9;
    VAR_24.TIM_CounterMode = VAR_11;
    VAR_24.TIM_RepetitionCounter = 0;
    FUNC_10(VAR_6, &VAR_24);

    FUNC_7(VAR_6, &VAR_27);
    FUNC_5(VAR_6, VAR_0);
    FUNC_8(VAR_6, VAR_15, VAR_0);

    VAR_26.NVIC_IRQChannel = VAR_7;
    VAR_26.NVIC_IRQChannelPriority = 0;
    VAR_26.NVIC_IRQChannelCmd = VAR_0;
    FUNC_1(&VAR_26);
}
