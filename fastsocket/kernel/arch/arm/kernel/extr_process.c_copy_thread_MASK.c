
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long pc; } ;
struct thread_info {int tp_value; TYPE_1__ cpu_context; } ;
struct task_struct {int dummy; } ;
struct pt_regs {unsigned long ARM_sp; int ARM_r3; scalar_t__ ARM_r0; } ;
struct cpu_context_save {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_1 ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;
 struct thread_info* FUNC_2 (struct task_struct*) ;

int
FUNC_3(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, struct task_struct *VAR_5, struct pt_regs *VAR_6)
{
 struct thread_info *VAR_7 = FUNC_2(VAR_5);
 struct pt_regs *VAR_8 = FUNC_1(VAR_5);

 *VAR_8 = *VAR_6;
 VAR_8->ARM_r0 = 0;
 VAR_8->ARM_sp = VAR_3;

 FUNC_0(&VAR_7->cpu_context, 0, sizeof(struct cpu_context_save));
 VAR_7->cpu_context.sp = (unsigned long)VAR_8;
 VAR_7->cpu_context.pc = (unsigned long)VAR_1;

 if (VAR_2 & VAR_0)
  VAR_7->tp_value = VAR_6->ARM_r3;

 return 0;
}
