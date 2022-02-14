
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xstate; } ;
struct task_struct {TYPE_1__ thread; } ;
struct fpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (struct fpu*) ;
 int FUNC_1 (struct fpu*) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

int FUNC_5(struct task_struct *VAR_2)
{
 int VAR_3;

 if (FUNC_3(VAR_2)) {
  if (VAR_0 && VAR_2 == VAR_1)
   FUNC_4(VAR_2);
  return 0;
 }




 VAR_3 = FUNC_0((struct fpu *)&VAR_2->thread.xstate);
 if (VAR_3)
  return VAR_3;

 FUNC_1((struct fpu *)&VAR_2->thread.xstate);

 FUNC_2(VAR_2);
 return 0;
}
