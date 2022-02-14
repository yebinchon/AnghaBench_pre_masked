
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ctrl_regs_memmap_p; scalar_t__ ISCRregaddr; scalar_t__ IMRregaddr; scalar_t__ ISRregaddr; scalar_t__ PSMPHRregaddr; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct lpfc_hba *VAR_4)
{
 VAR_4->sli4_hba.PSMPHRregaddr = VAR_4->sli4_hba.ctrl_regs_memmap_p +
  VAR_3;
 VAR_4->sli4_hba.ISRregaddr = VAR_4->sli4_hba.ctrl_regs_memmap_p +
  VAR_2;
 VAR_4->sli4_hba.IMRregaddr = VAR_4->sli4_hba.ctrl_regs_memmap_p +
  VAR_0;
 VAR_4->sli4_hba.ISCRregaddr = VAR_4->sli4_hba.ctrl_regs_memmap_p +
  VAR_1;
}
