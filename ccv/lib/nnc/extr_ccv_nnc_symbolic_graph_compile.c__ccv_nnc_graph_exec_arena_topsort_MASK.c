
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* exec_info; } ;
typedef TYPE_4__ ccv_nnc_graph_t ;
struct TYPE_14__ {int d; TYPE_4__* const graph; } ;
typedef TYPE_5__ ccv_nnc_graph_exec_t ;
struct TYPE_12__ {int d; } ;
struct TYPE_11__ {int d; } ;
struct TYPE_15__ {int graph_exec_size; TYPE_5__* graph_execs; TYPE_3__ destination; TYPE_2__ source; } ;
typedef TYPE_6__ ccv_nnc_graph_exec_arena_t ;
struct TYPE_10__ {int rnum; } ;


 int FUNC_0 (int* const) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__* const,int* const,int) ;

__attribute__((used)) static void FUNC_3(ccv_nnc_graph_t* const VAR_0, ccv_nnc_graph_exec_arena_t* const VAR_1)
{
 int VAR_2;
 int* const VAR_3 = (int*)FUNC_1(sizeof(int) * VAR_0->exec_info->rnum);
 FUNC_2(VAR_0, VAR_3, VAR_0->exec_info->rnum);
 VAR_1->source.d = VAR_3[VAR_1->source.d];
 VAR_1->destination.d = VAR_3[VAR_1->destination.d];
 ccv_nnc_graph_exec_t* const VAR_4 = VAR_1->graph_execs;
 for (VAR_2 = 0; VAR_2 < VAR_1->graph_exec_size; VAR_2++)
  if (VAR_4[VAR_2].graph == VAR_0)
   VAR_4[VAR_2].d = VAR_3[VAR_4[VAR_2].d];
 FUNC_0(VAR_3);
}
