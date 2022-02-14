
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sched_lr; int lr; int frame; int sp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0("CONTEXT: stack=0x%lx frame=0x%p LR=0x%lx RET=0x%lx\n",
        VAR_0->thread.sp, VAR_0->thread.frame, VAR_0->thread.lr, VAR_0->thread.sched_lr);
}
