
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* pset_node_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_7__ {scalar_t__ pset_cluster_id; struct TYPE_7__* pset_list; } ;
struct TYPE_6__ {TYPE_2__* psets; struct TYPE_6__* node_list; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

processor_set_t
FUNC_2(
 uint32_t VAR_2,
 processor_set_t VAR_3)
{
 FUNC_0(&VAR_1);
 pset_node_t VAR_4 = &VAR_0;
 processor_set_t VAR_5 = ((void*)0);

 do {
  VAR_5 = VAR_4->psets;
  while (VAR_5 != ((void*)0)) {
   if (VAR_5->pset_cluster_id == VAR_2)
    break;
   VAR_5 = VAR_5->pset_list;
  }
 } while ((VAR_4 = VAR_4->node_list) != ((void*)0));
 FUNC_1(&VAR_1);
 if (VAR_5 == ((void*)0))
  return VAR_3;
 return (VAR_5);
}
