
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef TYPE_3__* affinity_space_t ;
typedef TYPE_4__* affinity_set_t ;
struct TYPE_17__ {TYPE_3__* aset_space; } ;
struct TYPE_16__ {int aspc_lock; } ;
struct TYPE_15__ {TYPE_1__* task; TYPE_4__* affinity_set; } ;
struct TYPE_14__ {TYPE_3__* affinity_space; } ;


 int FUNC_0 (char*,TYPE_2__*,TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(thread_t VAR_0, thread_t VAR_1)
{
 affinity_set_t VAR_2;
 affinity_space_t VAR_3;

 FUNC_5(VAR_0);
 VAR_2 = VAR_0->affinity_set;
 FUNC_0("thread_affinity_dup(%p,%p) aset %p\n", VAR_0, VAR_1, VAR_2);
 if (VAR_2 == ((void*)0)) {
  FUNC_6(VAR_0);
  return;
 }

 VAR_3 = VAR_2->aset_space;
 FUNC_2(VAR_3 == VAR_0->task->affinity_space);
 FUNC_2(VAR_3 == VAR_1->task->affinity_space);

 FUNC_3(&VAR_3->aspc_lock);
 FUNC_1(VAR_2, VAR_1);
 FUNC_4(&VAR_3->aspc_lock);

 FUNC_6(VAR_0);
}
