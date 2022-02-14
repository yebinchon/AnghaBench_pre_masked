
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int DMA_PeripheralBaseAddr; int DMA_MemoryBaseAddr; int DMA_DIR; int DMA_M2M; int DMA_Priority; int DMA_Mode; int DMA_MemoryDataSize; int DMA_PeripheralDataSize; int DMA_MemoryInc; int DMA_PeripheralInc; int DMA_BufferSize; } ;
typedef TYPE_1__ DMA_InitTypeDef ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static bool FUNC_5(uint8_t* VAR_19, uint8_t* VAR_20, uint16_t VAR_21) {
    DMA_InitTypeDef VAR_22;

    if( !FUNC_4(VAR_15) || VAR_17 || VAR_18)
        return 0;


    FUNC_2(VAR_15, VAR_0);
    FUNC_0(VAR_16, VAR_0);
    FUNC_0(VAR_14, VAR_0);


    VAR_22.DMA_PeripheralBaseAddr = (int)VAR_13;
    VAR_22.DMA_MemoryBaseAddr = (int)VAR_19;
    VAR_22.DMA_DIR = VAR_1;
    VAR_22.DMA_BufferSize = VAR_21;
    VAR_22.DMA_PeripheralInc = VAR_8;
    VAR_22.DMA_MemoryInc = VAR_5;
    VAR_22.DMA_PeripheralDataSize = VAR_7;
    VAR_22.DMA_MemoryDataSize = VAR_4;
    VAR_22.DMA_Mode = VAR_6;
    VAR_22.DMA_Priority = VAR_9;
    VAR_22.DMA_M2M = VAR_3;
    FUNC_1(VAR_16, &VAR_22);


    VAR_22.DMA_MemoryBaseAddr = (int)VAR_20;
    VAR_22.DMA_DIR = VAR_2;
    FUNC_1(VAR_14, &VAR_22);

    FUNC_0(VAR_16, VAR_10);
    FUNC_0(VAR_14, VAR_10);

    FUNC_3(VAR_15,VAR_12 | VAR_11, VAR_10);

    FUNC_2(VAR_15, VAR_10);

    VAR_17 = 1;
    VAR_18 = 1;

    return 1;
}
