
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ irp; int orig_r10; int r13; int r12; int r11; int r10; int r9; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; int r0; int mof; int dccr; int srp; } ;
struct TYPE_2__ {int pid; int comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char,unsigned char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int *,unsigned long*) ;
 int FUNC_4 (struct pt_regs*) ;

void
FUNC_5(struct pt_regs *VAR_3)
{






 unsigned long VAR_4 = FUNC_2();

 FUNC_1("IRP: %08lx SRP: %08lx DCCR: %08lx USP: %08lx MOF: %08lx\n",
        VAR_3->irp, VAR_3->srp, VAR_3->dccr, VAR_4, VAR_3->mof);

 FUNC_1(" r0: %08lx  r1: %08lx   r2: %08lx  r3: %08lx\n",
        VAR_3->r0, VAR_3->r1, VAR_3->r2, VAR_3->r3);

 FUNC_1(" r4: %08lx  r5: %08lx   r6: %08lx  r7: %08lx\n",
        VAR_3->r4, VAR_3->r5, VAR_3->r6, VAR_3->r7);

 FUNC_1(" r8: %08lx  r9: %08lx  r10: %08lx r11: %08lx\n",
        VAR_3->r8, VAR_3->r9, VAR_3->r10, VAR_3->r11);

 FUNC_1("r12: %08lx r13: %08lx oR10: %08lx  sp: %08lx\n",
        VAR_3->r12, VAR_3->r13, VAR_3->orig_r10, (long unsigned)VAR_3);

 FUNC_1("R_MMU_CAUSE: %08lx\n", (unsigned long)*VAR_1);

 FUNC_1("Process %s (pid: %d, stackpage=%08lx)\n",
        VAR_2->comm, VAR_2->pid, (unsigned long)VAR_2);





 if (!FUNC_4(VAR_3)) {
  int VAR_5;

  FUNC_3(((void*)0), (unsigned long *)VAR_4);





  if (VAR_4 != 0)
   FUNC_3(((void*)0), ((void*)0));

  FUNC_1("\nCode: ");

  if (VAR_3->irp < VAR_0)
   goto bad_value;
  for (VAR_5 = -12; VAR_5 < 12; VAR_5++) {
   unsigned char VAR_6;

   if (FUNC_0(VAR_6, &((unsigned char *)VAR_3->irp)[VAR_5])) {
bad_value:
    FUNC_1(" Bad IP value.");
    break;
   }

   if (VAR_5 == 0)
    FUNC_1("(%02x) ", VAR_6);
   else
    FUNC_1("%02x ", VAR_6);
  }
  FUNC_1("\n");
 }
}
