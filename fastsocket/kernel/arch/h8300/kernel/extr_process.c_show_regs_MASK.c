
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int er6; int er5; int er4; int er3; int er2; int er1; int er0; int orig_er0; int ccr; int pc; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

void FUNC_3(struct pt_regs * VAR_0)
{
 FUNC_0("\nPC: %08lx  Status: %02x",
        VAR_0->pc, VAR_0->ccr);
 FUNC_0("\nORIG_ER0: %08lx ER0: %08lx ER1: %08lx",
        VAR_0->orig_er0, VAR_0->er0, VAR_0->er1);
 FUNC_0("\nER2: %08lx ER3: %08lx ER4: %08lx ER5: %08lx",
        VAR_0->er2, VAR_0->er3, VAR_0->er4, VAR_0->er5);
 FUNC_0("\nER6' %08lx ",VAR_0->er6);
 if (FUNC_2(VAR_0))
  FUNC_0("USP: %08lx\n", FUNC_1());
 else
  FUNC_0("\n");
}
