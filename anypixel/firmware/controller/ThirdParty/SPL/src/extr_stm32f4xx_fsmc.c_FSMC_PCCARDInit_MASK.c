
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int PCR4; int PMEM4; int PATT4; int PIO4; } ;
struct TYPE_10__ {int FSMC_TCLRSetupTime; int FSMC_TARSetupTime; TYPE_3__* FSMC_IOSpaceTimingStruct; TYPE_2__* FSMC_AttributeSpaceTimingStruct; TYPE_1__* FSMC_CommonSpaceTimingStruct; scalar_t__ FSMC_Waitfeature; } ;
struct TYPE_9__ {int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; scalar_t__ FSMC_SetupTime; } ;
struct TYPE_8__ {int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; scalar_t__ FSMC_SetupTime; } ;
struct TYPE_7__ {int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; scalar_t__ FSMC_SetupTime; } ;
typedef TYPE_4__ FSMC_PCCARDInitTypeDef ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

void FUNC_8(FSMC_PCCARDInitTypeDef* VAR_2)
{

  FUNC_7(FUNC_5(VAR_2->FSMC_Waitfeature));
  FUNC_7(FUNC_4(VAR_2->FSMC_TCLRSetupTime));
  FUNC_7(FUNC_3(VAR_2->FSMC_TARSetupTime));

  FUNC_7(FUNC_2(VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime));
  FUNC_7(FUNC_6(VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime));
  FUNC_7(FUNC_1(VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime));
  FUNC_7(FUNC_0(VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime));

  FUNC_7(FUNC_2(VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime));
  FUNC_7(FUNC_6(VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime));
  FUNC_7(FUNC_1(VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime));
  FUNC_7(FUNC_0(VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime));
  FUNC_7(FUNC_2(VAR_2->FSMC_IOSpaceTimingStruct->FSMC_SetupTime));
  FUNC_7(FUNC_6(VAR_2->FSMC_IOSpaceTimingStruct->FSMC_WaitSetupTime));
  FUNC_7(FUNC_1(VAR_2->FSMC_IOSpaceTimingStruct->FSMC_HoldSetupTime));
  FUNC_7(FUNC_0(VAR_2->FSMC_IOSpaceTimingStruct->FSMC_HiZSetupTime));


  VAR_0->PCR4 = (uint32_t)VAR_2->FSMC_Waitfeature |
                     VAR_1 |
                     (VAR_2->FSMC_TCLRSetupTime << 9) |
                     (VAR_2->FSMC_TARSetupTime << 13);


  VAR_0->PMEM4 = (uint32_t)VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime |
                      (VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime << 8) |
                      (VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime << 16)|
                      (VAR_2->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime << 24);


  VAR_0->PATT4 = (uint32_t)VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime |
                      (VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime << 8) |
                      (VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime << 16)|
                      (VAR_2->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime << 24);


  VAR_0->PIO4 = (uint32_t)VAR_2->FSMC_IOSpaceTimingStruct->FSMC_SetupTime |
                     (VAR_2->FSMC_IOSpaceTimingStruct->FSMC_WaitSetupTime << 8) |
                     (VAR_2->FSMC_IOSpaceTimingStruct->FSMC_HoldSetupTime << 16)|
                     (VAR_2->FSMC_IOSpaceTimingStruct->FSMC_HiZSetupTime << 24);
}
