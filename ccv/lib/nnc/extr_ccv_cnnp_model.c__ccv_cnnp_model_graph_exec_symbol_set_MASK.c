
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int * graph_exec_arena; } ;
struct TYPE_17__ {TYPE_1__ apply_gradients; int * graph_exec_arena; int parallel_count; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_t ;
struct TYPE_18__ {scalar_t__ graph; } ;
typedef TYPE_3__ const ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_arena_t ;
typedef int ccv_nnc_cmd_t ;
struct TYPE_19__ {TYPE_2__* graph; TYPE_2__* compiled_data; } ;
typedef TYPE_4__ ccv_cnnp_model_t ;
typedef TYPE_2__ ccv_cnnp_compiled_data_t ;


 int FUNC_0 (int * const,int const,TYPE_3__ const,int const,TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (int ,int) ;
 TYPE_3__ const FUNC_3 (TYPE_2__* const,TYPE_3__ const,int) ;
 int FUNC_4 (TYPE_2__* const,TYPE_3__ const,int const) ;

__attribute__((used)) static void FUNC_5(ccv_cnnp_model_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1, const ccv_nnc_cmd_t VAR_2)
{
 ccv_cnnp_compiled_data_t* const VAR_3 = VAR_0->compiled_data;
 FUNC_1(VAR_3);
 const int VAR_4 = FUNC_2(VAR_3->parallel_count, 1);
 ccv_nnc_symbolic_graph_t* const VAR_5 = VAR_0->graph;
 FUNC_1(VAR_5);
 FUNC_4(VAR_5, VAR_1, VAR_2);
 int VAR_6;
 for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++)
 {
  ccv_nnc_graph_exec_symbol_t VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_6);
  if (VAR_7.graph)
   FUNC_4(VAR_5, VAR_7, VAR_2);
 }
 ccv_nnc_graph_exec_arena_t* const VAR_8 = VAR_3->graph_exec_arena;
 if (VAR_8)
  FUNC_0(VAR_8, VAR_4, VAR_1, VAR_2, VAR_5);

 ccv_nnc_graph_exec_arena_t* const VAR_9 = VAR_3->apply_gradients.graph_exec_arena;
 if (VAR_9)
  FUNC_0(VAR_9, VAR_4, VAR_1, VAR_2, VAR_5);
}
