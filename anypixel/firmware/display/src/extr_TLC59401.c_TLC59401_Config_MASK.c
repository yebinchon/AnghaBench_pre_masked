
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int CR1; } ;
struct TYPE_12__ {int SPI_NSS; int SPI_CPHA; int SPI_CPOL; int SPI_Mode; int SPI_FirstBit; int SPI_Direction; int SPI_BaudRatePrescaler; int SPI_DataSize; } ;
struct TYPE_11__ {void* TIM_OCNIdleState; void* TIM_OCIdleState; int TIM_OCNPolarity; int TIM_OCPolarity; scalar_t__ TIM_Pulse; int TIM_OutputNState; int TIM_OutputState; int TIM_OCMode; } ;
struct TYPE_10__ {int TIM_Period; scalar_t__ TIM_RepetitionCounter; int TIM_ClockDivision; int TIM_CounterMode; scalar_t__ TIM_Prescaler; } ;
typedef TYPE_1__ TIM_TimeBaseInitTypeDef ;
typedef TYPE_2__ TIM_OCInitTypeDef ;
typedef TYPE_3__ SPI_InitTypeDef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_4__* VAR_25 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int** VAR_28 ;
 int VAR_29 ;

void FUNC_15(void) {
    int VAR_30, VAR_31;

    TIM_TimeBaseInitTypeDef VAR_32;
 TIM_OCInitTypeDef VAR_33;
 SPI_InitTypeDef VAR_34;

    for(VAR_30 = 0; VAR_30 < VAR_20; VAR_30++) {
        for(VAR_31=0; VAR_31 < VAR_18; VAR_31++) {
            VAR_28[VAR_31][VAR_30] = (4000*VAR_30)/64;
        }
    }


    FUNC_2(VAR_22, VAR_0);
    FUNC_3(VAR_23, VAR_0);
 FUNC_4(VAR_24, VAR_0);




 VAR_32.TIM_Prescaler = 0;
    VAR_32.TIM_CounterMode = VAR_11;
    VAR_32.TIM_Period = 1;
    VAR_32.TIM_ClockDivision = VAR_10;
    VAR_32.TIM_RepetitionCounter = 0;
    FUNC_9(VAR_26, &VAR_32);


    VAR_33.TIM_OCMode = VAR_13;
    VAR_33.TIM_OutputState = VAR_17;
    VAR_33.TIM_OutputNState = VAR_16;
    VAR_33.TIM_Pulse = 0;
    VAR_33.TIM_OCPolarity = VAR_15;
    VAR_33.TIM_OCNPolarity = VAR_14;
    VAR_33.TIM_OCIdleState = VAR_12;
    VAR_33.TIM_OCNIdleState = VAR_12;
    FUNC_10(VAR_26, &VAR_33);

    VAR_19 = (VAR_32.TIM_Period + 1)/2;

    FUNC_0(VAR_29, VAR_21);


 VAR_34.SPI_DataSize = VAR_5;
    VAR_34.SPI_BaudRatePrescaler = VAR_1;
 VAR_34.SPI_Direction = VAR_6;
 VAR_34.SPI_FirstBit = VAR_7;
 VAR_34.SPI_Mode = VAR_8;
 VAR_34.SPI_CPOL = VAR_3;
 VAR_34.SPI_CPHA = VAR_2;
 VAR_34.SPI_NSS = VAR_9;

    FUNC_5(VAR_25);

 VAR_25->CR1 &= ~VAR_4;


 FUNC_6(VAR_25, &VAR_34);


 VAR_25->CR1 |= VAR_4;

    for(VAR_30 = 0; VAR_30 < 5; VAR_30++) {

  FUNC_13(VAR_30*3+1, 31);
  FUNC_13(VAR_30*3+2, 63);
  FUNC_13(VAR_30*3+3, 31);
        FUNC_13(VAR_30*3+17, 31);
  FUNC_13(VAR_30*3+18, 63);
  FUNC_13(VAR_30*3+19, 31);
 }


    FUNC_12();


    for(VAR_30 = 0; VAR_30 < VAR_18; VAR_30++)
        FUNC_14(VAR_30,0);
    FUNC_11();
    FUNC_1(10);


    FUNC_7(VAR_26, VAR_0);
    FUNC_8(VAR_26, VAR_0);

    VAR_27 = 1;
}
