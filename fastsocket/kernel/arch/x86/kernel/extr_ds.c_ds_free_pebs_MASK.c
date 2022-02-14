
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {TYPE_2__* context; } ;
struct pebs_tracer {TYPE_1__ ds; } ;
struct TYPE_4__ {struct pebs_tracer* pebs_master; struct task_struct* task; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pebs_tracer*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct pebs_tracer *VAR_0)
{
 struct task_struct *VAR_1;

 VAR_1 = VAR_0->ds.context->task;

 FUNC_0(VAR_0->ds.context->pebs_master != VAR_0);
 VAR_0->ds.context->pebs_master = ((void*)0);

 FUNC_1(VAR_0->ds.context);
 FUNC_3(VAR_1);

 FUNC_2(VAR_0);
}
