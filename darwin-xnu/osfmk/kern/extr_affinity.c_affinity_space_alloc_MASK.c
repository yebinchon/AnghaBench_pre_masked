
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct affinity_space {int dummy; } ;
typedef TYPE_1__* affinity_space_t ;
struct TYPE_4__ {int aspc_task_count; int aspc_affinities; int aspc_lock; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static affinity_space_t
FUNC_4(void)
{
 affinity_space_t VAR_2;

 VAR_2 = (affinity_space_t) FUNC_1(sizeof(struct affinity_space));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_2(&VAR_2->aspc_lock, &VAR_1, &VAR_0);
 FUNC_3(&VAR_2->aspc_affinities);
 VAR_2->aspc_task_count = 1;

 FUNC_0("affinity_space_create() returns %p\n", VAR_2);
 return VAR_2;
}
