
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int configured; int tx_buf_size; int TX_active; char* tx_buf; int DMA_stream; int USARTx; int DR_ADDR; int DMA_channel; int DMA_IntFlags; } ;
struct TYPE_5__ {int DMA_BufferSize; int DMA_PeripheralBurst; int DMA_MemoryBurst; int DMA_FIFOThreshold; int DMA_FIFOMode; int DMA_Priority; int DMA_Mode; int DMA_MemoryDataSize; int DMA_PeripheralDataSize; int DMA_MemoryInc; int DMA_PeripheralInc; int DMA_DIR; scalar_t__ DMA_Memory0BaseAddr; int DMA_PeripheralBaseAddr; int DMA_Channel; } ;
typedef TYPE_1__ DMA_InitTypeDef ;
typedef TYPE_2__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_10 (int) ;

bool FUNC_11(CONFIG_USART_ConfigState *VAR_15, const char *VAR_16, uint16_t VAR_17) {
 DMA_InitTypeDef VAR_18;
 int VAR_19;

 FUNC_10(VAR_15->configured == 1);
 FUNC_10(VAR_16 != ((void*)0));
 FUNC_10(VAR_17 <= VAR_15->tx_buf_size);

    FUNC_1(2);

 if(VAR_15->TX_active) {
        FUNC_0(2);
        FUNC_2(9);
  return 0;
 }

 for(VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
  VAR_15->tx_buf[VAR_19] = VAR_16[VAR_19];



 FUNC_7(VAR_15->USARTx, VAR_13);
 FUNC_9(VAR_15->USARTx, VAR_14, VAR_11);
 FUNC_3(VAR_15->DMA_stream, VAR_15->DMA_IntFlags);


    FUNC_5(VAR_15->DMA_stream);
 VAR_18.DMA_Channel = VAR_15->DMA_channel;
 VAR_18.DMA_PeripheralBaseAddr = VAR_15->DR_ADDR;
 VAR_18.DMA_Memory0BaseAddr = (uint32_t)VAR_15->tx_buf;
 VAR_18.DMA_DIR = VAR_0;
 VAR_18.DMA_BufferSize = VAR_17;
    VAR_18.DMA_PeripheralInc = VAR_9;
    VAR_18.DMA_MemoryInc = VAR_5;
    VAR_18.DMA_PeripheralDataSize = VAR_8;
    VAR_18.DMA_MemoryDataSize = VAR_4;
    VAR_18.DMA_Mode = VAR_6;
    VAR_18.DMA_Priority = VAR_10;
    VAR_18.DMA_FIFOMode = VAR_1;
    VAR_18.DMA_FIFOThreshold = VAR_2;
    VAR_18.DMA_MemoryBurst = VAR_3;
    VAR_18.DMA_PeripheralBurst = VAR_7;
 FUNC_6(VAR_15->DMA_stream, &VAR_18);


 FUNC_8(VAR_15->USARTx, VAR_12, VAR_11);
 FUNC_4(VAR_15->DMA_stream, VAR_11);

    VAR_15->TX_active = 1;

    FUNC_0(2);
 return 1;
}
