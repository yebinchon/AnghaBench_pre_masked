
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_2__ {int sequence_size; int ** sequence; } ;
typedef TYPE_1__ ccv_cnnp_sequential_model_t ;
typedef int ccv_cnnp_model_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int * const,int * const,int *,int,int *,int) ;

__attribute__((used)) static void FUNC_2(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 ccv_cnnp_sequential_model_t* const VAR_6 = (ccv_cnnp_sequential_model_t*)VAR_0;
 int VAR_7;
 ccv_nnc_tensor_symbol_t VAR_8 = VAR_2[0];
 FUNC_0(VAR_3 == 1);
 for (VAR_7 = 0; VAR_7 < VAR_6->sequence_size; VAR_7++)
 {
  ccv_nnc_tensor_symbol_t VAR_9;
  ccv_cnnp_model_t* const VAR_10 = VAR_6->sequence[VAR_7];

  FUNC_1(VAR_10, VAR_1, &VAR_8, 1, &VAR_9, 1);
  VAR_8 = VAR_9;
 }
 VAR_4[0] = VAR_8;
}
