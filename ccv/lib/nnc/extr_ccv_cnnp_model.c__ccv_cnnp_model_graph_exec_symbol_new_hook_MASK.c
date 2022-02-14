
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_cmd_t ;
struct TYPE_3__ {int const graph_exec; int type; } ;
typedef TYPE_1__ ccv_cnnp_rewind_symbol_t ;
typedef int ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (int * const,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_1(void* VAR_1, const ccv_nnc_graph_exec_symbol_t VAR_2, const ccv_nnc_cmd_t VAR_3, const ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5, const ccv_nnc_tensor_symbol_t* const VAR_6, const int VAR_7, const char* const VAR_8)
{
 const ccv_cnnp_rewind_symbol_t VAR_9 = {
  .type = VAR_0,
  .graph_exec = VAR_2
 };
 ccv_array_t* const VAR_10 = (ccv_array_t*)VAR_1;
 FUNC_0(VAR_10, &VAR_9);
}
