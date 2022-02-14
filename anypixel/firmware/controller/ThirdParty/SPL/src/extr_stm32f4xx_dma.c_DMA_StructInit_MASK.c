
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DMA_PeripheralBurst; int DMA_MemoryBurst; int DMA_FIFOThreshold; int DMA_FIFOMode; int DMA_Priority; int DMA_Mode; int DMA_MemoryDataSize; int DMA_PeripheralDataSize; int DMA_MemoryInc; int DMA_PeripheralInc; scalar_t__ DMA_BufferSize; int DMA_DIR; scalar_t__ DMA_Memory0BaseAddr; scalar_t__ DMA_PeripheralBaseAddr; scalar_t__ DMA_Channel; } ;
typedef TYPE_1__ DMA_InitTypeDef ;


 int VAR_0 ;
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

void FUNC_0(DMA_InitTypeDef* VAR_11)
{


  VAR_11->DMA_Channel = 0;


  VAR_11->DMA_PeripheralBaseAddr = 0;


  VAR_11->DMA_Memory0BaseAddr = 0;


  VAR_11->DMA_DIR = VAR_0;


  VAR_11->DMA_BufferSize = 0;


  VAR_11->DMA_PeripheralInc = VAR_9;


  VAR_11->DMA_MemoryInc = VAR_5;


  VAR_11->DMA_PeripheralDataSize = VAR_8;


  VAR_11->DMA_MemoryDataSize = VAR_4;


  VAR_11->DMA_Mode = VAR_6;


  VAR_11->DMA_Priority = VAR_10;


  VAR_11->DMA_FIFOMode = VAR_1;


  VAR_11->DMA_FIFOThreshold = VAR_2;


  VAR_11->DMA_MemoryBurst = VAR_3;


  VAR_11->DMA_PeripheralBurst = VAR_7;
}
