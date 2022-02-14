
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* affinity_space_t ;
typedef TYPE_3__* affinity_set_t ;
struct TYPE_11__ {TYPE_2__* aset_space; } ;
struct TYPE_10__ {int aspc_lock; } ;
struct TYPE_9__ {TYPE_3__* affinity_set; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(thread_t VAR_0)
{
 affinity_set_t VAR_1 = VAR_0->affinity_set;
 affinity_space_t VAR_2;

 FUNC_0("thread_affinity_terminate(%p)\n", VAR_0);

 VAR_2 = VAR_1->aset_space;
 FUNC_3(&VAR_2->aspc_lock);
 if (FUNC_2(VAR_1, VAR_0)) {
  FUNC_1(VAR_1);
 }
 FUNC_4(&VAR_2->aspc_lock);
}
