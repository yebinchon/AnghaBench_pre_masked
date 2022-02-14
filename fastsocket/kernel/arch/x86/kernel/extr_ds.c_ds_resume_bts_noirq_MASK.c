
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {unsigned long debugctlmsr; } ;
struct task_struct {TYPE_5__ thread; } ;
struct TYPE_9__ {TYPE_3__* context; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ ds; } ;
struct bts_tracer {TYPE_4__ ds; TYPE_2__ trace; int flags; } ;
struct TYPE_8__ {int cpu; struct task_struct* task; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct bts_tracer*) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct task_struct*,unsigned long) ;

int FUNC_7(struct bts_tracer *VAR_1)
{
 struct task_struct *VAR_2;
 unsigned long VAR_3, VAR_4;
 int VAR_5, VAR_6 = 0;

 if (!VAR_1)
  return 0;

 VAR_1->flags = VAR_1->trace.ds.flags;

 VAR_2 = VAR_1->ds.context->task;
 VAR_5 = VAR_1->ds.context->cpu;

 FUNC_3(VAR_4);

 VAR_6 = -VAR_0;
 if (!VAR_2 && (VAR_5 != FUNC_4()))
  goto out;

 VAR_3 = (VAR_2 ?
         VAR_2->thread.debugctlmsr :
         FUNC_1());
 VAR_3 |= FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_6(VAR_2, VAR_3);
 else
  FUNC_5(VAR_3);

 VAR_6 = 0;
 out:
 FUNC_2(VAR_4);
 return VAR_6;
}
