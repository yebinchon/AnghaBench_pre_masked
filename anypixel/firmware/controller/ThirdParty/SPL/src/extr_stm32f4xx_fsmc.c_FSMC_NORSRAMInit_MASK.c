
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int* BTCR; } ;
struct TYPE_10__ {int* BWTR; } ;
struct TYPE_9__ {size_t FSMC_Bank; int FSMC_MemoryType; int FSMC_MemoryDataWidth; int FSMC_BurstAccessMode; int FSMC_AsynchronousWait; int FSMC_WaitSignalPolarity; int FSMC_WrapMode; int FSMC_WaitSignalActive; int FSMC_WriteOperation; int FSMC_WaitSignal; int FSMC_ExtendedMode; int FSMC_WriteBurst; TYPE_2__* FSMC_WriteTimingStruct; TYPE_1__* FSMC_ReadWriteTimingStruct; scalar_t__ FSMC_DataAddressMux; } ;
struct TYPE_8__ {int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_CLKDivision; int FSMC_DataLatency; int FSMC_AccessMode; scalar_t__ FSMC_AddressSetupTime; } ;
struct TYPE_7__ {int FSMC_AddressHoldTime; int FSMC_DataSetupTime; int FSMC_BusTurnAroundDuration; int FSMC_CLKDivision; int FSMC_DataLatency; int FSMC_AccessMode; scalar_t__ FSMC_AddressSetupTime; } ;
typedef TYPE_3__ FSMC_NORSRAMInitTypeDef ;


 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (size_t) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;

void FUNC_21(FSMC_NORSRAMInitTypeDef* VAR_5)
{

  FUNC_20(FUNC_12(VAR_5->FSMC_Bank));
  FUNC_20(FUNC_11(VAR_5->FSMC_DataAddressMux));
  FUNC_20(FUNC_9(VAR_5->FSMC_MemoryType));
  FUNC_20(FUNC_10(VAR_5->FSMC_MemoryDataWidth));
  FUNC_20(FUNC_4(VAR_5->FSMC_BurstAccessMode));
  FUNC_20(FUNC_3(VAR_5->FSMC_AsynchronousWait));
  FUNC_20(FUNC_15(VAR_5->FSMC_WaitSignalPolarity));
  FUNC_20(FUNC_17(VAR_5->FSMC_WrapMode));
  FUNC_20(FUNC_16(VAR_5->FSMC_WaitSignalActive));
  FUNC_20(FUNC_19(VAR_5->FSMC_WriteOperation));
  FUNC_20(FUNC_14(VAR_5->FSMC_WaitSignal));
  FUNC_20(FUNC_8(VAR_5->FSMC_ExtendedMode));
  FUNC_20(FUNC_18(VAR_5->FSMC_WriteBurst));
  FUNC_20(FUNC_2(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AddressSetupTime));
  FUNC_20(FUNC_1(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AddressHoldTime));
  FUNC_20(FUNC_6(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_DataSetupTime));
  FUNC_20(FUNC_13(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_BusTurnAroundDuration));
  FUNC_20(FUNC_5(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_CLKDivision));
  FUNC_20(FUNC_7(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_DataLatency));
  FUNC_20(FUNC_0(VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AccessMode));


  VAR_1->BTCR[VAR_5->FSMC_Bank] =
            (uint32_t)VAR_5->FSMC_DataAddressMux |
            VAR_5->FSMC_MemoryType |
            VAR_5->FSMC_MemoryDataWidth |
            VAR_5->FSMC_BurstAccessMode |
            VAR_5->FSMC_AsynchronousWait |
            VAR_5->FSMC_WaitSignalPolarity |
            VAR_5->FSMC_WrapMode |
            VAR_5->FSMC_WaitSignalActive |
            VAR_5->FSMC_WriteOperation |
            VAR_5->FSMC_WaitSignal |
            VAR_5->FSMC_ExtendedMode |
            VAR_5->FSMC_WriteBurst;
  if(VAR_5->FSMC_MemoryType == VAR_4)
  {
    VAR_1->BTCR[VAR_5->FSMC_Bank] |= (uint32_t)VAR_0;
  }

  VAR_1->BTCR[VAR_5->FSMC_Bank+1] =
            (uint32_t)VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AddressSetupTime |
            (VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AddressHoldTime << 4) |
            (VAR_5->FSMC_ReadWriteTimingStruct->FSMC_DataSetupTime << 8) |
            (VAR_5->FSMC_ReadWriteTimingStruct->FSMC_BusTurnAroundDuration << 16) |
            (VAR_5->FSMC_ReadWriteTimingStruct->FSMC_CLKDivision << 20) |
            (VAR_5->FSMC_ReadWriteTimingStruct->FSMC_DataLatency << 24) |
             VAR_5->FSMC_ReadWriteTimingStruct->FSMC_AccessMode;



  if(VAR_5->FSMC_ExtendedMode == VAR_3)
  {
    FUNC_20(FUNC_2(VAR_5->FSMC_WriteTimingStruct->FSMC_AddressSetupTime));
    FUNC_20(FUNC_1(VAR_5->FSMC_WriteTimingStruct->FSMC_AddressHoldTime));
    FUNC_20(FUNC_6(VAR_5->FSMC_WriteTimingStruct->FSMC_DataSetupTime));
    FUNC_20(FUNC_5(VAR_5->FSMC_WriteTimingStruct->FSMC_CLKDivision));
    FUNC_20(FUNC_7(VAR_5->FSMC_WriteTimingStruct->FSMC_DataLatency));
    FUNC_20(FUNC_0(VAR_5->FSMC_WriteTimingStruct->FSMC_AccessMode));
    VAR_2->BWTR[VAR_5->FSMC_Bank] =
              (uint32_t)VAR_5->FSMC_WriteTimingStruct->FSMC_AddressSetupTime |
              (VAR_5->FSMC_WriteTimingStruct->FSMC_AddressHoldTime << 4 )|
              (VAR_5->FSMC_WriteTimingStruct->FSMC_DataSetupTime << 8) |
              (VAR_5->FSMC_WriteTimingStruct->FSMC_CLKDivision << 20) |
              (VAR_5->FSMC_WriteTimingStruct->FSMC_DataLatency << 24) |
               VAR_5->FSMC_WriteTimingStruct->FSMC_AccessMode;
  }
  else
  {
    VAR_2->BWTR[VAR_5->FSMC_Bank] = 0x0FFFFFFF;
  }
}
