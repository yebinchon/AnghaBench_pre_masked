
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* FSMC_WriteTimingStruct; TYPE_1__* FSMC_ReadWriteTimingStruct; int FSMC_WriteBurst; int FSMC_ExtendedMode; int FSMC_WaitSignal; int FSMC_WriteOperation; int FSMC_WaitSignalActive; int FSMC_WrapMode; int FSMC_WaitSignalPolarity; int FSMC_AsynchronousWait; int FSMC_BurstAccessMode; int FSMC_MemoryDataWidth; int FSMC_MemoryType; int FSMC_DataAddressMux; int FSMC_Bank; } ;
struct TYPE_6__ {int FSMC_AddressSetupTime; int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_BusTurnAroundDuration; int FSMC_CLKDivision; int FSMC_DataLatency; void* FSMC_AccessMode; } ;
struct TYPE_5__ {int FSMC_AddressSetupTime; int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_BusTurnAroundDuration; int FSMC_CLKDivision; int FSMC_DataLatency; void* FSMC_AccessMode; } ;
typedef TYPE_3__ FSMC_NORSRAMInitTypeDef ;


 void* VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_0(FSMC_NORSRAMInitTypeDef* VAR_14)
{

  VAR_14->FSMC_Bank = VAR_2;
  VAR_14->FSMC_DataAddressMux = VAR_4;
  VAR_14->FSMC_MemoryType = VAR_7;
  VAR_14->FSMC_MemoryDataWidth = VAR_6;
  VAR_14->FSMC_BurstAccessMode = VAR_3;
  VAR_14->FSMC_AsynchronousWait = VAR_1;
  VAR_14->FSMC_WaitSignalPolarity = VAR_9;
  VAR_14->FSMC_WrapMode = VAR_11;
  VAR_14->FSMC_WaitSignalActive = VAR_8;
  VAR_14->FSMC_WriteOperation = VAR_13;
  VAR_14->FSMC_WaitSignal = VAR_10;
  VAR_14->FSMC_ExtendedMode = VAR_5;
  VAR_14->FSMC_WriteBurst = VAR_12;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_AddressSetupTime = 0xF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_AddressHoldTime = 0xF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_DataSetupTime = 0xFF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_BusTurnAroundDuration = 0xF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_CLKDivision = 0xF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_DataLatency = 0xF;
  VAR_14->FSMC_ReadWriteTimingStruct->FSMC_AccessMode = VAR_0;
  VAR_14->FSMC_WriteTimingStruct->FSMC_AddressSetupTime = 0xF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_AddressHoldTime = 0xF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_DataSetupTime = 0xFF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_BusTurnAroundDuration = 0xF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_CLKDivision = 0xF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_DataLatency = 0xF;
  VAR_14->FSMC_WriteTimingStruct->FSMC_AccessMode = VAR_0;
}
