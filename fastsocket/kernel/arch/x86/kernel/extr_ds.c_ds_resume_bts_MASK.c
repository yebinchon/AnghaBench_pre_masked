
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long debugctlmsr; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_10__ {TYPE_4__* context; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ ds; } ;
struct bts_tracer {TYPE_5__ ds; TYPE_3__ trace; int flags; } ;
struct TYPE_9__ {int cpu; struct task_struct* task; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (struct bts_tracer*) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (struct task_struct*,unsigned long) ;

void FUNC_6(struct bts_tracer *VAR_0)
{
 struct task_struct *VAR_1;
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_0)
  return;

 VAR_0->flags = VAR_0->trace.ds.flags;

 VAR_1 = VAR_0->ds.context->task;
 VAR_3 = VAR_0->ds.context->cpu;

 FUNC_0(!VAR_1 && FUNC_3());

 VAR_2 = (VAR_1 ?
         VAR_1->thread.debugctlmsr :
         FUNC_2(VAR_3));
 VAR_2 |= FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_5(VAR_1, VAR_2);
 else
  FUNC_4(VAR_3, VAR_2);
}
