
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* context; } ;
struct pebs_tracer {TYPE_2__ ds; } ;
struct TYPE_3__ {scalar_t__ cpu; struct task_struct* task; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (struct pebs_tracer*) ;
 int FUNC_1 (struct pebs_tracer*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(struct pebs_tracer *VAR_2)
{
 struct task_struct *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->ds.context->task;

 FUNC_3(VAR_4);

 VAR_5 = -VAR_0;
 if (!VAR_3 &&
     (VAR_2->ds.context->cpu != FUNC_4()))
  goto out;

 VAR_5 = -VAR_0;
 if (VAR_3 && (VAR_3 != VAR_1))
  goto out;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 VAR_5 = 0;
 out:
 FUNC_2(VAR_4);
 return VAR_5;
}
