
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* affinity_space_t ;
struct TYPE_8__ {scalar_t__ aspc_task_count; int aspc_lock; int aspc_affinities; } ;
struct TYPE_7__ {TYPE_2__* affinity_space; } ;


 int FUNC_0 (char*,TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(task_t VAR_0)
{
 affinity_space_t VAR_1 = VAR_0->affinity_space;

 FUNC_0("task_affinity_deallocate(%p) aspc %p task_count %d\n",
  VAR_0, VAR_1, VAR_1->aspc_task_count);

 FUNC_3(&VAR_1->aspc_lock);
 if (--(VAR_1->aspc_task_count) == 0) {
  FUNC_2(FUNC_5(&VAR_1->aspc_affinities));
  FUNC_4(&VAR_1->aspc_lock);
  FUNC_1(VAR_1);
 } else {
  FUNC_4(&VAR_1->aspc_lock);
 }
}
