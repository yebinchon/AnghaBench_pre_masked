
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_trace {int dummy; } ;


 int FUNC_0 (struct stack_trace*,int ,struct task_struct*,int ) ;

void FUNC_1(struct task_struct *VAR_0, struct stack_trace *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->thread.ksp, VAR_0, 0);
}
