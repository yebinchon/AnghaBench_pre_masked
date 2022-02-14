
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; scalar_t__ skip; unsigned long* entries; } ;
struct sparc_stackf {unsigned long callers_pc; scalar_t__ fp; } ;
struct pt_regs {int tstate; unsigned long tpc; unsigned long* u_regs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct thread_info*,struct pt_regs*) ;
 int FUNC_3 (struct thread_info*,unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct thread_info *VAR_3,
          struct stack_trace *VAR_4,
          bool VAR_5)
{
 unsigned long VAR_6, VAR_7;

 if (VAR_3 == FUNC_0()) {
  FUNC_4();
  __asm__ __volatile__("mov %%fp, %0" : "=r" (VAR_6));
 } else {
  VAR_6 = VAR_3->ksp;
 }

 VAR_7 = VAR_6 + VAR_0;
 do {
  struct sparc_stackf *VAR_8;
  struct pt_regs *VAR_9;
  unsigned long VAR_10;

  if (!FUNC_3(VAR_3, VAR_7))
   break;

  VAR_8 = (struct sparc_stackf *) VAR_7;
  VAR_9 = (struct pt_regs *) (VAR_8 + 1);

  if (FUNC_2(VAR_3, VAR_9)) {
   if (!(VAR_9->tstate & VAR_1))
    break;
   VAR_10 = VAR_9->tpc;
   VAR_7 = VAR_9->u_regs[VAR_2] + VAR_0;
  } else {
   VAR_10 = VAR_8->callers_pc;
   VAR_7 = (unsigned long)VAR_8->fp + VAR_0;
  }

  if (VAR_4->skip > 0)
   VAR_4->skip--;
  else if (!VAR_5 || !FUNC_1(VAR_10))
   VAR_4->entries[VAR_4->nr_entries++] = VAR_10;
 } while (VAR_4->nr_entries < VAR_4->max_entries);
}
