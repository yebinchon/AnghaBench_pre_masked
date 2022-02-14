
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xstate; } ;
struct task_struct {TYPE_1__ thread; } ;
struct fpu {int dummy; } ;


 int FUNC_0 (struct fpu*) ;

void FUNC_1(struct task_struct *VAR_0)
{
 FUNC_0((struct fpu *)&VAR_0->thread.xstate);
}
