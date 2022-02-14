
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fpu_state; } ;
struct task_struct {TYPE_1__ thread; } ;
struct fpucontext {int dummy; } ;
struct fpu_state_struct {int dummy; } ;


 int FUNC_0 (int *,struct fpucontext*,int ) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct task_struct*) ;

int FUNC_3(struct fpucontext *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;
 int VAR_3;


 VAR_3 = FUNC_0(&VAR_2->thread.fpu_state,
        VAR_1,
        FUNC_1(sizeof(struct fpu_state_struct),
     sizeof(struct fpucontext)));
 if (!VAR_3)
  FUNC_2(VAR_2);

 return VAR_3;
}
