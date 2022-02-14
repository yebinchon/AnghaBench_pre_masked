
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int CCR; int CMAR; int CPAR; int CNDTR; } ;
struct TYPE_6__ {int DMA_DIR; int DMA_PeripheralInc; int DMA_MemoryInc; int DMA_PeripheralDataSize; int DMA_MemoryDataSize; int DMA_Mode; int DMA_Priority; int DMA_M2M; int DMA_MemoryBaseAddr; int DMA_PeripheralBaseAddr; int DMA_BufferSize; } ;
typedef TYPE_1__ DMA_InitTypeDef ;
typedef TYPE_2__ DMA_Channel_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;

void FUNC_11(DMA_Channel_TypeDef* VAR_1, DMA_InitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_10(FUNC_0(VAR_1));
  FUNC_10(FUNC_2(VAR_2->DMA_DIR));
  FUNC_10(FUNC_1(VAR_2->DMA_BufferSize));
  FUNC_10(FUNC_8(VAR_2->DMA_PeripheralInc));
  FUNC_10(FUNC_5(VAR_2->DMA_MemoryInc));
  FUNC_10(FUNC_7(VAR_2->DMA_PeripheralDataSize));
  FUNC_10(FUNC_4(VAR_2->DMA_MemoryDataSize));
  FUNC_10(FUNC_6(VAR_2->DMA_Mode));
  FUNC_10(FUNC_9(VAR_2->DMA_Priority));
  FUNC_10(FUNC_3(VAR_2->DMA_M2M));



  VAR_3 = VAR_1->CCR;


  VAR_3 &= VAR_0;
  VAR_3 |= VAR_2->DMA_DIR | VAR_2->DMA_Mode |
            VAR_2->DMA_PeripheralInc | VAR_2->DMA_MemoryInc |
            VAR_2->DMA_PeripheralDataSize | VAR_2->DMA_MemoryDataSize |
            VAR_2->DMA_Priority | VAR_2->DMA_M2M;


  VAR_1->CCR = VAR_3;



  VAR_1->CNDTR = VAR_2->DMA_BufferSize;



  VAR_1->CPAR = VAR_2->DMA_PeripheralBaseAddr;



  VAR_1->CMAR = VAR_2->DMA_MemoryBaseAddr;
}
