
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct affinity_set {int dummy; } ;
typedef TYPE_1__* affinity_set_t ;
struct TYPE_4__ {int * aset_space; int aset_pset; scalar_t__ aset_num; int aset_threads; int aset_affinities; scalar_t__ aset_thread_count; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static affinity_set_t
FUNC_3(void)
{
 affinity_set_t VAR_1;

 VAR_1 = (affinity_set_t) FUNC_1(sizeof(struct affinity_set));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_1->aset_thread_count = 0;
 FUNC_2(&VAR_1->aset_affinities);
 FUNC_2(&VAR_1->aset_threads);
 VAR_1->aset_num = 0;
 VAR_1->aset_pset = VAR_0;
 VAR_1->aset_space = ((void*)0);

 FUNC_0("affinity_set_create() returns %p\n", VAR_1);
 return VAR_1;
}
