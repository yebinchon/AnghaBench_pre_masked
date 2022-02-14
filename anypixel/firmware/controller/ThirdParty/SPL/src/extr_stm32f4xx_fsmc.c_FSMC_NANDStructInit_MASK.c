
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int FSMC_TCLRSetupTime; int FSMC_TARSetupTime; TYPE_2__* FSMC_AttributeSpaceTimingStruct; TYPE_1__* FSMC_CommonSpaceTimingStruct; int FSMC_ECCPageSize; int FSMC_ECC; int FSMC_MemoryDataWidth; int FSMC_Waitfeature; int FSMC_Bank; } ;
struct TYPE_6__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
struct TYPE_5__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
typedef TYPE_3__ FSMC_NANDInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(FSMC_NANDInitTypeDef* VAR_5)
{

  VAR_5->FSMC_Bank = VAR_0;
  VAR_5->FSMC_Waitfeature = VAR_4;
  VAR_5->FSMC_MemoryDataWidth = VAR_3;
  VAR_5->FSMC_ECC = VAR_2;
  VAR_5->FSMC_ECCPageSize = VAR_1;
  VAR_5->FSMC_TCLRSetupTime = 0x0;
  VAR_5->FSMC_TARSetupTime = 0x0;
  VAR_5->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  VAR_5->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  VAR_5->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  VAR_5->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
  VAR_5->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  VAR_5->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  VAR_5->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  VAR_5->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
}
