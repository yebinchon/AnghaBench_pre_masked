
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; } ;
struct task_struct {int dummy; } ;
struct sparc_stackf {unsigned long callers_pc; scalar_t__ fp; } ;
struct pt_regs {int tstate; unsigned long tpc; unsigned long* u_regs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct task_struct* VAR_3 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct thread_info*,struct pt_regs*) ;
 int FUNC_3 (struct thread_info*,unsigned long) ;
 int FUNC_4 (char*,...) ;
 struct thread_info* FUNC_5 (struct task_struct*) ;

void FUNC_6(struct task_struct *VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 struct thread_info *VAR_9;
 int VAR_10 = 0;

 VAR_8 = (unsigned long) VAR_5;
 if (!VAR_4)
  VAR_4 = VAR_3;
 VAR_9 = FUNC_5(VAR_4);
 if (VAR_8 == 0UL) {
  if (VAR_4 == VAR_3)
   asm("mov %%fp, %0" : "=r" (VAR_8));
  else
   VAR_8 = VAR_9->ksp;
 }
 if (VAR_9 == FUNC_0())
  FUNC_1();

 VAR_6 = VAR_8 + VAR_0;
 VAR_7 = (unsigned long) VAR_9;

 FUNC_4("Call Trace:\n");
 do {
  struct sparc_stackf *VAR_11;
  struct pt_regs *VAR_12;
  unsigned long VAR_13;

  if (!FUNC_3(VAR_9, VAR_6))
   break;
  VAR_11 = (struct sparc_stackf *) VAR_6;
  VAR_12 = (struct pt_regs *) (VAR_11 + 1);

  if (FUNC_2(VAR_9, VAR_12)) {
   if (!(VAR_12->tstate & VAR_1))
    break;
   VAR_13 = VAR_12->tpc;
   VAR_6 = VAR_12->u_regs[VAR_2] + VAR_0;
  } else {
   VAR_13 = VAR_11->callers_pc;
   VAR_6 = (unsigned long)VAR_11->fp + VAR_0;
  }

  FUNC_4(" [%016lx] %pS\n", VAR_13, (void *) VAR_13);
 } while (++VAR_10 < 16);
}
