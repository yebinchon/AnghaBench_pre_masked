
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {TYPE_2__* context; } ;
struct bts_tracer {TYPE_1__ ds; } ;
struct TYPE_4__ {struct bts_tracer* bts_master; struct task_struct* task; } ;


 int FUNC_0 (int) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct bts_tracer*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct bts_tracer *VAR_1)
{
 struct task_struct *VAR_2;

 VAR_2 = VAR_1->ds.context->task;

 FUNC_0(VAR_1->ds.context->bts_master != VAR_1);
 VAR_1->ds.context->bts_master = ((void*)0);


 if (VAR_2 && (VAR_2 != VAR_0))
  FUNC_4(VAR_2);

 FUNC_1(VAR_1->ds.context);
 FUNC_3(VAR_2);

 FUNC_2(VAR_1);
}
