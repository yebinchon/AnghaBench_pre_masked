
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* affinity_space_t ;
struct TYPE_9__ {int aspc_lock; int aspc_task_count; } ;
struct TYPE_8__ {TYPE_2__* affinity_space; } ;


 int FUNC_0 (char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(task_t VAR_0, task_t VAR_1)
{
 affinity_space_t VAR_2 = VAR_0->affinity_space;

 FUNC_0("task_affinity_create(%p,%p)\n", VAR_0, VAR_1);

 FUNC_1(VAR_2);





 FUNC_2(&VAR_2->aspc_lock);
 VAR_2->aspc_task_count++;
 VAR_1->affinity_space = VAR_2;
 FUNC_3(&VAR_2->aspc_lock);
}
