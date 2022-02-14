
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ erp; int acr; int orig_r10; int r13; int r12; int r11; int r10; int r9; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; int r0; int mof; int ccs; int srp; } ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned char,unsigned char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int *,unsigned long*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;

void
FUNC_8(struct pt_regs *VAR_5)
{






 unsigned long VAR_6 = FUNC_4();
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_3("CPU: %d\n", FUNC_6());

 FUNC_3("ERP: %08lx SRP: %08lx  CCS: %08lx USP: %08lx MOF: %08lx\n",
        VAR_5->erp, VAR_5->srp, VAR_5->ccs, VAR_6, VAR_5->mof);

 FUNC_3(" r0: %08lx  r1: %08lx   r2: %08lx  r3: %08lx\n",
        VAR_5->r0, VAR_5->r1, VAR_5->r2, VAR_5->r3);

 FUNC_3(" r4: %08lx  r5: %08lx   r6: %08lx  r7: %08lx\n",
        VAR_5->r4, VAR_5->r5, VAR_5->r6, VAR_5->r7);

 FUNC_3(" r8: %08lx  r9: %08lx  r10: %08lx r11: %08lx\n",
        VAR_5->r8, VAR_5->r9, VAR_5->r10, VAR_5->r11);

 FUNC_3("r12: %08lx r13: %08lx oR10: %08lx acr: %08lx\n",
        VAR_5->r12, VAR_5->r13, VAR_5->orig_r10, VAR_5->acr);

 FUNC_3(" sp: %08lx\n", (unsigned long)VAR_5);

 FUNC_0(VAR_1);
 FUNC_1(VAR_3, VAR_8);

 FUNC_0(VAR_0);
 FUNC_1(VAR_3, VAR_7);

 FUNC_3("       Data MMU Cause: %08lx\n", VAR_7);
 FUNC_3("Instruction MMU Cause: %08lx\n", VAR_8);

 FUNC_3("Process %s (pid: %d, stackpage=%08lx)\n",
        VAR_4->comm, VAR_4->pid, (unsigned long)VAR_4);





 if (!FUNC_7(VAR_5)) {
  int VAR_9;

  FUNC_5(((void*)0), (unsigned long *)VAR_6);





  if (VAR_6 != 0)
   FUNC_5(((void*)0), ((void*)0));

  FUNC_3("\nCode: ");

  if (VAR_5->erp < VAR_2)
   goto bad_value;
  for (VAR_9 = -12; VAR_9 < 12; VAR_9++) {
   unsigned char VAR_10;

   if (FUNC_2(VAR_10, &((unsigned char *)VAR_5->erp)[VAR_9])) {
bad_value:
    FUNC_3(" Bad IP value.");
    break;
   }

   if (VAR_9 == 0)
    FUNC_3("(%02x) ", VAR_10);
   else
    FUNC_3("%02x ", VAR_10);
  }
  FUNC_3("\n");
 }
}
