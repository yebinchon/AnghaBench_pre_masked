
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xstate; } ;
struct task_struct {TYPE_1__ thread; } ;
struct fpu {int dummy; } ;


 int FUNC_0 (struct fpu*) ;
 scalar_t__ FUNC_1 (struct fpu*) ;
 int FUNC_2 (struct fpu*,struct fpu*) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct task_struct *VAR_0, struct task_struct *VAR_1)
{
 int VAR_2;

 *VAR_0 = *VAR_1;
 if (FUNC_1((struct fpu *)&VAR_1->thread.xstate)) {
  FUNC_3(&VAR_0->thread.xstate, 0, sizeof(VAR_0->thread.xstate));
  VAR_2 = FUNC_0((struct fpu *)&VAR_0->thread.xstate);
  if (VAR_2)
   return VAR_2;
  FUNC_2((struct fpu *)&VAR_0->thread.xstate, (struct fpu *)&VAR_1->thread.xstate);
 }
 return 0;
}
