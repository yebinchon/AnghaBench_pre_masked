
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_5__ {int graph; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_t ;
typedef int const ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_arena_t ;
typedef int ccv_nnc_cmd_t ;


 int FUNC_0 (TYPE_1__ const) ;
 TYPE_1__ FUNC_1 (int const* const,int const) ;
 int FUNC_2 (int ,TYPE_1__ const,int const) ;
 int const FUNC_3 (int * const,int const,int) ;

__attribute__((used)) static void FUNC_4(const ccv_nnc_graph_exec_arena_t* const VAR_0, const int VAR_1, const ccv_nnc_graph_exec_symbol_t VAR_2, const ccv_nnc_cmd_t VAR_3, ccv_nnc_symbolic_graph_t* const VAR_4)
{
 ccv_nnc_graph_exec_t const VAR_5 = FUNC_1(VAR_0, VAR_2);
 if (!FUNC_0(VAR_5))
  FUNC_2(VAR_5.graph, VAR_5, VAR_3);
 int VAR_6;
 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++)
 {
  ccv_nnc_graph_exec_symbol_t VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_6);
  const ccv_nnc_graph_exec_t VAR_8 = FUNC_1(VAR_0, VAR_7);
  if (!FUNC_0(VAR_8))
   FUNC_2(VAR_8.graph, VAR_8, VAR_3);
 }
}
