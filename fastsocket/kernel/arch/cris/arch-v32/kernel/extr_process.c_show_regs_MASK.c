
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int orig_r10; int r13; int r12; int r11; int r10; int r9; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; int r0; int mof; int ccs; int srp; int erp; } ;


 int FUNC_0 (char*,int ,int ,int ,...) ;
 unsigned long FUNC_1 () ;

void FUNC_2(struct pt_regs * VAR_0)
{
 unsigned long VAR_1 = FUNC_1();
        FUNC_0("ERP: %08lx SRP: %08lx  CCS: %08lx USP: %08lx MOF: %08lx\n",
  VAR_0->erp, VAR_0->srp, VAR_0->ccs, VAR_1, VAR_0->mof);

 FUNC_0(" r0: %08lx  r1: %08lx   r2: %08lx  r3: %08lx\n",
  VAR_0->r0, VAR_0->r1, VAR_0->r2, VAR_0->r3);

 FUNC_0(" r4: %08lx  r5: %08lx   r6: %08lx  r7: %08lx\n",
  VAR_0->r4, VAR_0->r5, VAR_0->r6, VAR_0->r7);

 FUNC_0(" r8: %08lx  r9: %08lx  r10: %08lx r11: %08lx\n",
  VAR_0->r8, VAR_0->r9, VAR_0->r10, VAR_0->r11);

 FUNC_0("r12: %08lx r13: %08lx oR10: %08lx\n",
  VAR_0->r12, VAR_0->r13, VAR_0->orig_r10);
}
