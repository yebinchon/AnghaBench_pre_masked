
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_16__ {int tensor; } ;
typedef TYPE_1__ ccv_nnc_tensor_bind_t ;
typedef int ccv_nnc_tensor_arena_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_17__ {int * graph; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_prep_t ;
typedef int ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_arena_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int * FUNC_2 (int const* const,int const* const,int const,int const* const,int const,TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int const* const,TYPE_1__ const* const,int const,int const* const,int const,int const* const,int const,int const* const,int const,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*,int *) ;
 int * FUNC_10 (TYPE_2__*,int ,TYPE_1__ const* const,int const) ;
 int FUNC_11 (int) ;

void FUNC_12(const ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_bind_t* const VAR_1, const int VAR_2, const ccv_nnc_tensor_symbol_t* const VAR_3, const int VAR_4, const ccv_nnc_graph_exec_symbol_t* const VAR_5, const int VAR_6, const ccv_nnc_graph_exec_symbol_t* const VAR_7, const int VAR_8, ccv_nnc_graph_t** const VAR_9, ccv_nnc_tensor_arena_t** const VAR_10, ccv_nnc_graph_exec_arena_t** const VAR_11)
{
 FUNC_11(VAR_9);
 FUNC_11(VAR_10);
 FUNC_11(VAR_11);
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
 {
  FUNC_11(VAR_1[VAR_12].tensor);
  FUNC_11(!FUNC_0(VAR_1[VAR_12].tensor));
 }
 ccv_nnc_symbolic_graph_prep_t* VAR_13 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0, 0, 0, 0);
 FUNC_8(VAR_13);
 ccv_nnc_tensor_arena_t* VAR_14 = FUNC_10(VAR_13, 0, VAR_1, VAR_2);
 FUNC_9(VAR_14, VAR_13, VAR_14);
 *VAR_10 = VAR_14;

 FUNC_4(VAR_13, VAR_13);

 FUNC_5(VAR_13);
 *VAR_9 = VAR_13->graph;
 ccv_nnc_graph_exec_arena_t* VAR_15 = FUNC_2(VAR_0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_13, VAR_14);
 FUNC_3(VAR_13->graph, VAR_15);
 FUNC_1(VAR_15, VAR_13, VAR_15);
 *VAR_11 = VAR_15;
 FUNC_6(VAR_13);
}
