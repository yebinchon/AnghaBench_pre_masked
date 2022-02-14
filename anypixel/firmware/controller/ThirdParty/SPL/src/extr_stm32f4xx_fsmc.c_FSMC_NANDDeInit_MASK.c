
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int PCR2; int SR2; int PMEM2; int PATT2; } ;
struct TYPE_3__ {int PCR3; int SR3; int PMEM3; int PATT3; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint32_t VAR_3)
{

  FUNC_1(FUNC_0(VAR_3));

  if(VAR_3 == VAR_1)
  {

    VAR_0->PCR2 = 0x00000018;
    VAR_0->SR2 = 0x00000040;
    VAR_0->PMEM2 = 0xFCFCFCFC;
    VAR_0->PATT2 = 0xFCFCFCFC;
  }

  else
  {

    VAR_2->PCR3 = 0x00000018;
    VAR_2->SR3 = 0x00000040;
    VAR_2->PMEM3 = 0xFCFCFCFC;
    VAR_2->PATT3 = 0xFCFCFCFC;
  }
}
