
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int lwp_queue ;
struct TYPE_5__ {size_t min_id; int max_id; int inactives_cnt; size_t node_size; size_t max_nodes; int inactives; int * obj_blocks; TYPE_2__** local_table; } ;
typedef TYPE_1__ lwp_objinfo ;
struct TYPE_6__ {size_t id; int node; int * information; } ;
typedef TYPE_2__ lwp_obj ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (void**) ;
 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_6(lwp_objinfo *VAR_2,u32 VAR_3,u32 VAR_4)
{
 u32 VAR_5,VAR_6,VAR_7;
 lwp_obj *VAR_8;
 lwp_queue VAR_9;
 void **VAR_10;

 VAR_2->min_id = 0;
 VAR_2->max_id = 0;
 VAR_2->inactives_cnt = 0;
 VAR_2->node_size = VAR_4;
 VAR_2->max_nodes = VAR_3;
 VAR_2->obj_blocks = ((void*)0);
 VAR_2->local_table = &VAR_1;

 FUNC_2(&VAR_2->inactives);

 VAR_7 = ((VAR_2->max_nodes*sizeof(lwp_obj*))+(VAR_2->max_nodes*VAR_2->node_size));
 VAR_10 = (void**)FUNC_4(VAR_2->max_nodes*sizeof(lwp_obj*));
 if(!VAR_10) return;

 VAR_2->local_table = (lwp_obj**)VAR_10;
 for(VAR_6=0;VAR_6<VAR_2->max_nodes;VAR_6++) {
  VAR_10[VAR_6] = ((void*)0);
 }

 VAR_2->obj_blocks = FUNC_4(VAR_2->max_nodes*VAR_2->node_size);
 if(!VAR_2->obj_blocks) {
  FUNC_5(VAR_10);
  return;
 }

 FUNC_3(&VAR_9,VAR_2->obj_blocks,VAR_2->max_nodes,VAR_2->node_size);

 VAR_5 = VAR_2->min_id;
 while((VAR_8=(lwp_obj*)FUNC_1(&VAR_9))!=((void*)0)) {
  VAR_8->id = VAR_5;
  VAR_8->information = ((void*)0);
  FUNC_0(&VAR_2->inactives,&VAR_8->node);
  VAR_5++;
 }

 VAR_2->max_id += VAR_2->max_nodes;
 VAR_2->inactives_cnt += VAR_2->max_nodes;
 VAR_0 += VAR_7;
}
