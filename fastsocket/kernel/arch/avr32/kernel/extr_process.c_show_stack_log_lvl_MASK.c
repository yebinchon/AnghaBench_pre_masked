
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_3__ {unsigned long ksp; } ;
struct TYPE_4__ {TYPE_1__ cpu_context; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (char*,char const*,unsigned long,scalar_t__) ;
 int FUNC_1 (struct task_struct*,unsigned long*,struct pt_regs*,char const*) ;
 struct thread_info* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct thread_info*,unsigned long) ;

void FUNC_4(struct task_struct *VAR_2, unsigned long VAR_3,
   struct pt_regs *VAR_4, const char *VAR_5)
{
 struct thread_info *VAR_6;

 if (VAR_3 == 0) {
  if (VAR_2)
   VAR_3 = VAR_2->thread.cpu_context.ksp;
  else
   VAR_3 = (unsigned long)&VAR_6;
 }
 if (!VAR_2)
  VAR_2 = VAR_1;

 VAR_6 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_6, VAR_3)) {
  FUNC_0("Stack: ", VAR_5, VAR_3,
    VAR_0 + (unsigned long)VAR_6);
  FUNC_1(VAR_2, (unsigned long *)VAR_3, VAR_4, VAR_5);
 }
}
