
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DMA_M2M; int DMA_Priority; int DMA_Mode; int DMA_MemoryDataSize; int DMA_PeripheralDataSize; int DMA_MemoryInc; int DMA_PeripheralInc; scalar_t__ DMA_BufferSize; int DMA_DIR; scalar_t__ DMA_MemoryBaseAddr; scalar_t__ DMA_PeripheralBaseAddr; } ;
typedef TYPE_1__ DMA_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(DMA_InitTypeDef* VAR_8)
{


  VAR_8->DMA_PeripheralBaseAddr = 0;

  VAR_8->DMA_MemoryBaseAddr = 0;

  VAR_8->DMA_DIR = VAR_0;

  VAR_8->DMA_BufferSize = 0;

  VAR_8->DMA_PeripheralInc = VAR_6;

  VAR_8->DMA_MemoryInc = VAR_3;

  VAR_8->DMA_PeripheralDataSize = VAR_5;

  VAR_8->DMA_MemoryDataSize = VAR_2;

  VAR_8->DMA_Mode = VAR_4;

  VAR_8->DMA_Priority = VAR_7;

  VAR_8->DMA_M2M = VAR_1;
}
