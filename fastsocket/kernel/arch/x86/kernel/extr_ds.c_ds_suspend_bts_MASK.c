
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long debugctlmsr; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_6__ {TYPE_2__* context; } ;
struct bts_tracer {TYPE_3__ ds; scalar_t__ flags; } ;
struct TYPE_5__ {int cpu; struct task_struct* task; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (struct task_struct*,unsigned long) ;

void FUNC_5(struct bts_tracer *VAR_1)
{
 struct task_struct *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 if (!VAR_1)
  return;

 VAR_1->flags = 0;

 VAR_2 = VAR_1->ds.context->task;
 VAR_4 = VAR_1->ds.context->cpu;

 FUNC_0(!VAR_2 && FUNC_2());

 VAR_3 = (VAR_2 ?
         VAR_2->thread.debugctlmsr :
         FUNC_1(VAR_4));
 VAR_3 &= ~VAR_0;

 if (VAR_2)
  FUNC_4(VAR_2, VAR_3);
 else
  FUNC_3(VAR_4, VAR_3);
}
