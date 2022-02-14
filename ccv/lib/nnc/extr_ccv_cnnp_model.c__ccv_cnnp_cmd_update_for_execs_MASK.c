
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_7__ {int parallel_count; int * graph; int * graph_exec_arena; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_update_t ;
struct TYPE_8__ {int graph; } ;
typedef TYPE_2__ const ccv_nnc_graph_exec_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_arena_t ;
typedef int ccv_nnc_cmd_t ;


 int FUNC_0 (TYPE_2__ const) ;
 TYPE_2__ const FUNC_1 (int * const,int const) ;
 int FUNC_2 (int ,TYPE_2__ const,int const) ;
 int FUNC_3 (int ,TYPE_2__ const,int const) ;
 int const FUNC_4 (int const* const,int const,int) ;

__attribute__((used)) static void FUNC_5(void* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1, const ccv_nnc_cmd_t VAR_2, const ccv_nnc_hint_t VAR_3)
{
 ccv_nnc_graph_exec_update_t* const VAR_4 = (ccv_nnc_graph_exec_update_t*)VAR_0;
 ccv_nnc_graph_exec_arena_t* const VAR_5 = VAR_4->graph_exec_arena;
 ccv_nnc_graph_exec_t VAR_6 = FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_6.graph, VAR_6, VAR_2);
 FUNC_3(VAR_6.graph, VAR_6, VAR_3);
 const ccv_nnc_symbolic_graph_t* const VAR_7 = VAR_4->graph;
 const int VAR_8 = VAR_4->parallel_count;
 int VAR_9;
 for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++)
 {
  const ccv_nnc_graph_exec_t VAR_10 = FUNC_1(VAR_5, FUNC_4(VAR_7, VAR_1, VAR_9));
  if (!FUNC_0(VAR_10))
  {
   FUNC_2(VAR_10.graph, VAR_10, VAR_2);
   FUNC_3(VAR_10.graph, VAR_10, VAR_3);
  }
 }
}
