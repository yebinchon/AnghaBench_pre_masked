
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_sparse_matrix_t ;
struct TYPE_8__ {int s_ref; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_info_t ;
typedef int ccv_nnc_tensor_block_t ;
struct TYPE_9__ {int const d; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_t ;
struct TYPE_10__ {int output_size; int* outputs; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int * const,int const,int ) ;
 scalar_t__ FUNC_2 (int ,int const) ;

__attribute__((used)) static void FUNC_3(ccv_sparse_matrix_t* const VAR_0, ccv_nnc_tensor_block_t* const VAR_1, const ccv_nnc_graph_exec_symbol_info_t* const VAR_2, const int VAR_3, const ccv_nnc_graph_exec_symbol_t* const VAR_4, const int VAR_5, const int VAR_6, const ccv_nnc_tensor_symbol_info_t* const VAR_7, const int VAR_8, const ccv_nnc_tensor_symbol_info_t* const VAR_9, const int* const VAR_10, const int* const VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 for (VAR_12 = 0; VAR_12 < VAR_2->output_size; VAR_12++)
 {
  const int VAR_15 = VAR_2->outputs[VAR_12];
  const int VAR_16 = *(int*)FUNC_2(VAR_7[VAR_15].s_ref, VAR_6) - 1;
  if (!FUNC_0(VAR_1[VAR_16]))
   continue;
  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
   FUNC_1(VAR_0, VAR_4[VAR_14].d, VAR_1[VAR_16]);

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
   for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
   {
    const int VAR_17 = VAR_10[VAR_4[VAR_14].d * VAR_3 + VAR_13];
    const int VAR_18 = VAR_11[VAR_16 * VAR_3 + VAR_13];
    if (VAR_17 >= 0 && VAR_18 >= 0)
     FUNC_1(VAR_0, VAR_17, VAR_1[VAR_18]);
   }
 }
}
