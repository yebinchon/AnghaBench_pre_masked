
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long debugctlmsr; } ;
struct task_struct {TYPE_3__ thread; } ;
struct TYPE_5__ {TYPE_1__* context; } ;
struct bts_tracer {TYPE_2__ ds; scalar_t__ flags; } ;
struct TYPE_4__ {int cpu; struct task_struct* task; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct task_struct*,unsigned long) ;

int FUNC_6(struct bts_tracer *VAR_2)
{
 struct task_struct *VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!VAR_2)
  return 0;

 VAR_2->flags = 0;

 VAR_3 = VAR_2->ds.context->task;
 VAR_6 = VAR_2->ds.context->cpu;

 FUNC_2(VAR_5);

 VAR_7 = -VAR_1;
 if (!VAR_3 && (VAR_6 != FUNC_3()))
  goto out;

 VAR_4 = (VAR_3 ?
         VAR_3->thread.debugctlmsr :
         FUNC_0());
 VAR_4 &= ~VAR_0;

 if (VAR_3)
  FUNC_5(VAR_3, VAR_4);
 else
  FUNC_4(VAR_4);

 VAR_7 = 0;
 out:
 FUNC_1(VAR_5);
 return VAR_7;
}
