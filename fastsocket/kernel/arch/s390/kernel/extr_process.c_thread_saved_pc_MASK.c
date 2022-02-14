
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_frame {int back_chain; unsigned long* gprs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 struct stack_frame* FUNC_1 (struct task_struct*) ;

unsigned long FUNC_2(struct task_struct *VAR_1)
{
 struct stack_frame *VAR_2, *VAR_3, *VAR_4;

 if (!VAR_1 || !FUNC_1(VAR_1))
  return 0;
 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = (struct stack_frame *) FUNC_0(VAR_1);
 VAR_2 = (struct stack_frame *) (VAR_1->thread.ksp & VAR_0);
 if (VAR_2 <= VAR_3 || VAR_2 > VAR_4)
  return 0;
 VAR_2 = (struct stack_frame *) (VAR_2->back_chain & VAR_0);
 if (VAR_2 <= VAR_3 || VAR_2 > VAR_4)
  return 0;
 return VAR_2->gprs[8];
}
