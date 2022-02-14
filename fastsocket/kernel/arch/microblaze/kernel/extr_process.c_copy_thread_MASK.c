
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_context {unsigned long r1; unsigned long msr; unsigned long r15; } ;
struct thread_info {struct cpu_context cpu_context; } ;
struct task_struct {int dummy; } ;
struct pt_regs {unsigned long r1; int msr; unsigned long CURRENT_TASK; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct cpu_context*,int ,int) ;
 scalar_t__ VAR_10 ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 struct thread_info* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

int FUNC_5(unsigned long VAR_11, unsigned long VAR_12,
  unsigned long VAR_13,
  struct task_struct *VAR_14, struct pt_regs *VAR_15)
{
 struct pt_regs *VAR_16 = FUNC_2(VAR_14);
 struct thread_info *VAR_17 = FUNC_3(VAR_14);

 *VAR_16 = *VAR_15;
 if (FUNC_4(VAR_15))
  VAR_16->r1 = VAR_12;
 else
  VAR_16->r1 = ((unsigned long) VAR_17) + VAR_9;


 FUNC_1(&VAR_17->cpu_context, 0, sizeof(struct cpu_context));
 VAR_17->cpu_context.r1 = (unsigned long)VAR_16;
 VAR_17->cpu_context.msr = (unsigned long)VAR_16->msr;
 VAR_17->cpu_context.r15 = (unsigned long)VAR_10 - 8;

 if (VAR_11 & VAR_0)
  ;

 return 0;
}
