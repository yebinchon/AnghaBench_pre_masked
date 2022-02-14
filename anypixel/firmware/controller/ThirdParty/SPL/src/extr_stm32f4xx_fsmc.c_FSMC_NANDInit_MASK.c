
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
struct TYPE_11__ {int PCR2; int PMEM2; int PATT2; } ;
struct TYPE_10__ {int PCR3; int PMEM3; int PATT3; } ;
struct TYPE_9__ {scalar_t__ FSMC_Bank; int FSMC_MemoryDataWidth; int FSMC_ECC; int FSMC_ECCPageSize; int FSMC_TCLRSetupTime; int FSMC_TARSetupTime; TYPE_2__* FSMC_AttributeSpaceTimingStruct; TYPE_1__* FSMC_CommonSpaceTimingStruct; scalar_t__ FSMC_Waitfeature; } ;
struct TYPE_8__ {int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; scalar_t__ FSMC_SetupTime; } ;
struct TYPE_7__ {int FSMC_WaitSetupTime; int FSMC_HoldSetupTime; int FSMC_HiZSetupTime; scalar_t__ FSMC_SetupTime; } ;
typedef TYPE_3__ FSMC_NANDInitTypeDef ;


 TYPE_6__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;

void FUNC_12(FSMC_NANDInitTypeDef* VAR_4)
{
  uint32_t VAR_5 = 0x00000000, VAR_6 = 0x00000000, VAR_7 = 0x00000000;


  FUNC_11( FUNC_5(VAR_4->FSMC_Bank));
  FUNC_11( FUNC_9(VAR_4->FSMC_Waitfeature));
  FUNC_11( FUNC_4(VAR_4->FSMC_MemoryDataWidth));
  FUNC_11( FUNC_1(VAR_4->FSMC_ECC));
  FUNC_11( FUNC_0(VAR_4->FSMC_ECCPageSize));
  FUNC_11( FUNC_8(VAR_4->FSMC_TCLRSetupTime));
  FUNC_11( FUNC_7(VAR_4->FSMC_TARSetupTime));
  FUNC_11(FUNC_6(VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime));
  FUNC_11(FUNC_10(VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime));
  FUNC_11(FUNC_3(VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime));
  FUNC_11(FUNC_2(VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime));
  FUNC_11(FUNC_6(VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime));
  FUNC_11(FUNC_10(VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime));
  FUNC_11(FUNC_3(VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime));
  FUNC_11(FUNC_2(VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime));


  VAR_5 = (uint32_t)VAR_4->FSMC_Waitfeature |
            VAR_3 |
            VAR_4->FSMC_MemoryDataWidth |
            VAR_4->FSMC_ECC |
            VAR_4->FSMC_ECCPageSize |
            (VAR_4->FSMC_TCLRSetupTime << 9 )|
            (VAR_4->FSMC_TARSetupTime << 13);


  VAR_6 = (uint32_t)VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_SetupTime |
            (VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_WaitSetupTime << 8) |
            (VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_HoldSetupTime << 16)|
            (VAR_4->FSMC_CommonSpaceTimingStruct->FSMC_HiZSetupTime << 24);


  VAR_7 = (uint32_t)VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_SetupTime |
            (VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_WaitSetupTime << 8) |
            (VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_HoldSetupTime << 16)|
            (VAR_4->FSMC_AttributeSpaceTimingStruct->FSMC_HiZSetupTime << 24);

  if(VAR_4->FSMC_Bank == VAR_1)
  {

    VAR_0->PCR2 = VAR_5;
    VAR_0->PMEM2 = VAR_6;
    VAR_0->PATT2 = VAR_7;
  }
  else
  {

    VAR_2->PCR3 = VAR_5;
    VAR_2->PMEM3 = VAR_6;
    VAR_2->PATT3 = VAR_7;
  }
}
