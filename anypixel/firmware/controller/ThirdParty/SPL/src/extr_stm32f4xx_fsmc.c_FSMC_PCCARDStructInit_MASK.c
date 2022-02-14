
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int FSMC_TCLRSetupTime; int FSMC_TARSetupTime; TYPE_3__* FSMC_IOSpaceTimingStruct; TYPE_2__* FSMC_AttributeSpaceTimingStruct; TYPE_1__* FSMC_CommonSpaceTimingStruct; int FSMC_Waitfeature; } ;
struct TYPE_8__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
struct TYPE_7__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
struct TYPE_6__ {int FSMC_SetupTime; int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; } ;
typedef TYPE_4__ FSMC_PCCARDInitTypeDef ;


 int VAR_0 ;

void FUNC_0(FSMC_PCCARDInitTypeDef* VAR_1)
{

  VAR_1->FSMC_Waitfeature = VAR_0;
  VAR_1->FSMC_TCLRSetupTime = 0x0;
  VAR_1->FSMC_TARSetupTime = 0x0;
  VAR_1->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  VAR_1->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  VAR_1->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  VAR_1->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
  VAR_1->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  VAR_1->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  VAR_1->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  VAR_1->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
  VAR_1->FSMC_IOSpaceTimingStruct->FSMC_SetupTime = 0xFC;
  VAR_1->FSMC_IOSpaceTimingStruct->FSMC_WaitSetupTime = 0xFC;
  VAR_1->FSMC_IOSpaceTimingStruct->FSMC_HoldSetupTime = 0xFC;
  VAR_1->FSMC_IOSpaceTimingStruct->FSMC_HiZSetupTime = 0xFC;
}
