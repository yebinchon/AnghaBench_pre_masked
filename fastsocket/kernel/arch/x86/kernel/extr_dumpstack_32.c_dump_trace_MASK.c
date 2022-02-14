
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__ previous_esp; } ;
struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stacktrace_ops {unsigned long (* walk_stack ) (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,int *,int*) ;scalar_t__ (* stack ) (void*,char*) ;} ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 unsigned long FUNC_0 (struct task_struct*,struct pt_regs*) ;
 unsigned long FUNC_1 (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,int *,int*) ;
 scalar_t__ FUNC_2 (void*,char*) ;
 int FUNC_3 () ;

void FUNC_4(struct task_struct *VAR_2,
  struct pt_regs *VAR_3, unsigned long *VAR_4,
  const struct stacktrace_ops *VAR_5, void *VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;

 if (!VAR_2)
  VAR_2 = VAR_1;

 if (!VAR_4) {
  unsigned long VAR_9;

  VAR_4 = &VAR_9;
  if (VAR_2 && VAR_2 != VAR_1)
   VAR_4 = (unsigned long *)VAR_2->thread.sp;
 }

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 for (;;) {
  struct thread_info *VAR_10;

  VAR_10 = (struct thread_info *)
   ((unsigned long)VAR_4 & (~(VAR_0 - 1)));
  VAR_8 = VAR_5->walk_stack(VAR_10, VAR_4, VAR_8, VAR_5, VAR_6, ((void*)0), &VAR_7);

  VAR_4 = (unsigned long *)VAR_10->previous_esp;
  if (!VAR_4)
   break;
  if (VAR_5->stack(VAR_6, "IRQ") < 0)
   break;
  FUNC_3();
 }
}
