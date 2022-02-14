
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int ADC_ScanDirection; int ADC_DataAlign; int ADC_ExternalTrigConvEdge; int ADC_ContinuousConvMode; int ADC_Resolution; } ;
struct TYPE_6__ {int DMA_BufferSize; int DMA_M2M; int DMA_Priority; int DMA_Mode; int DMA_MemoryDataSize; int DMA_PeripheralDataSize; int DMA_MemoryInc; int DMA_PeripheralInc; int DMA_DIR; void* DMA_MemoryBaseAddr; void* DMA_PeripheralBaseAddr; } ;
typedef TYPE_1__ DMA_InitTypeDef ;
typedef TYPE_2__ ADC_InitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_23 ;
 int FUNC_10 (int ,int ) ;
 int VAR_24 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;

void FUNC_16(void) {
    ADC_InitTypeDef VAR_35;
    DMA_InitTypeDef VAR_36;


    FUNC_13(VAR_17, VAR_32);
    FUNC_14(VAR_18, VAR_32);
 FUNC_15(VAR_19, VAR_32);


    FUNC_9(VAR_34, VAR_16);


    FUNC_8(&VAR_35);
    VAR_35.ADC_Resolution = VAR_20;
    VAR_35.ADC_ContinuousConvMode = VAR_32;
    VAR_35.ADC_ExternalTrigConvEdge = VAR_14;
    VAR_35.ADC_DataAlign = VAR_13;
    VAR_35.ADC_ScanDirection = VAR_22;
    FUNC_6(VAR_0, &VAR_35);


    FUNC_0(VAR_0, VAR_1, VAR_21);
    FUNC_0(VAR_0, VAR_2, VAR_21);
    FUNC_0(VAR_0, VAR_3, VAR_21);
    FUNC_0(VAR_0, VAR_4, VAR_21);
    FUNC_0(VAR_0, VAR_5, VAR_21);
    FUNC_0(VAR_0, VAR_6, VAR_21);
    FUNC_0(VAR_0, VAR_7, VAR_21);
    FUNC_0(VAR_0, VAR_8, VAR_21);
    FUNC_0(VAR_0, VAR_9, VAR_21);
    FUNC_0(VAR_0, VAR_10, VAR_21);


    FUNC_4(VAR_0);


    FUNC_3(VAR_0, VAR_11);

    FUNC_2(VAR_0, VAR_32);

    FUNC_1(VAR_0, VAR_32);


    while( !FUNC_5(VAR_0, VAR_15));

    FUNC_7(VAR_0);

    FUNC_11(VAR_23);
    VAR_36.DMA_PeripheralBaseAddr = (uint32_t)VAR_12;
    VAR_36.DMA_MemoryBaseAddr = (uint32_t)VAR_33;
    VAR_36.DMA_DIR = VAR_24;
    VAR_36.DMA_BufferSize = 10;
    VAR_36.DMA_PeripheralInc = VAR_30;
    VAR_36.DMA_MemoryInc = VAR_27;
    VAR_36.DMA_PeripheralDataSize = VAR_29;
    VAR_36.DMA_MemoryDataSize = VAR_26;
    VAR_36.DMA_Mode = VAR_28;
    VAR_36.DMA_Priority = VAR_31;
    VAR_36.DMA_M2M = VAR_25;
    FUNC_12(VAR_23, &VAR_36);
    FUNC_10(VAR_23, VAR_32);
}
