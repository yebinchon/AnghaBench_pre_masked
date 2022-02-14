
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stacktrace_ops {scalar_t__ (* stack ) (void*,char*) ;unsigned long (* walk_stack ) (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,unsigned long*,int*) ;} ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long*,unsigned long*,unsigned long*) ;
 unsigned int FUNC_1 () ;
 unsigned long* FUNC_2 (unsigned int const,unsigned long,unsigned int*,char**) ;
 scalar_t__ FUNC_3 (unsigned long*,unsigned long*,unsigned long*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,unsigned int const) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (struct task_struct*,struct pt_regs*) ;
 scalar_t__ FUNC_7 (void*,char*) ;
 unsigned long FUNC_8 (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,unsigned long*,int*) ;
 scalar_t__ FUNC_9 (void*,char*) ;
 scalar_t__ FUNC_10 (void*,char*) ;
 unsigned long FUNC_11 (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,unsigned long*,int*) ;
 scalar_t__ FUNC_12 (void*,char*) ;
 unsigned long FUNC_13 (struct thread_info*,unsigned long*,unsigned long,struct stacktrace_ops const*,void*,unsigned long*,int*) ;
 struct thread_info* FUNC_14 (struct task_struct*) ;

void FUNC_15(struct task_struct *VAR_3, struct pt_regs *VAR_4,
  unsigned long *VAR_5,
  const struct stacktrace_ops *VAR_6, void *VAR_7)
{
 const unsigned VAR_8 = FUNC_1();
 unsigned long *VAR_9 =
  (unsigned long *)FUNC_4(VAR_2, VAR_8);
 unsigned VAR_10 = 0;
 struct thread_info *VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;

 if (!VAR_3)
  VAR_3 = VAR_1;

 if (!VAR_5) {
  unsigned long VAR_14;
  VAR_5 = &VAR_14;
  if (VAR_3 && VAR_3 != VAR_1)
   VAR_5 = (unsigned long *)VAR_3->thread.sp;
 }

 VAR_13 = FUNC_6(VAR_3, VAR_4);





 VAR_11 = FUNC_14(VAR_3);
 for (;;) {
  char *VAR_15;
  unsigned long *VAR_16;
  VAR_16 = FUNC_2(VAR_8, (unsigned long)VAR_5,
      &VAR_10, &VAR_15);

  if (VAR_16) {
   if (VAR_6->stack(VAR_7, VAR_15) < 0)
    break;

   VAR_13 = VAR_6->walk_stack(VAR_11, VAR_5, VAR_13, VAR_6,
          VAR_7, VAR_16, &VAR_12);
   VAR_6->stack(VAR_7, "<EOE>");





   VAR_5 = (unsigned long *) VAR_16[-2];
   continue;
  }
  if (VAR_9) {
   unsigned long *VAR_17;
   VAR_17 = VAR_9 -
    (VAR_0 - 64) / sizeof(*VAR_17);

   if (FUNC_3(VAR_5, VAR_17, VAR_9)) {
    if (VAR_6->stack(VAR_7, "IRQ") < 0)
     break;
    VAR_13 = VAR_6->walk_stack(VAR_11, VAR_5, VAR_13,
     VAR_6, VAR_7, VAR_9, &VAR_12);





    VAR_5 = (unsigned long *) (VAR_9[-1]);
    VAR_13 = FUNC_0(VAR_13, VAR_5, VAR_17,
             VAR_9);
    VAR_9 = ((void*)0);
    VAR_6->stack(VAR_7, "EOI");
    continue;
   }
  }
  break;
 }




 VAR_13 = VAR_6->walk_stack(VAR_11, VAR_5, VAR_13, VAR_6, VAR_7, ((void*)0), &VAR_12);
 FUNC_5();
}
