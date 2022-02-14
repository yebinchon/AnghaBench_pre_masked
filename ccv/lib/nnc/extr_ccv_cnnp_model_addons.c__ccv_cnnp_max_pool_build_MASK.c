
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_10__ {scalar_t__* dim; } ;
typedef TYPE_2__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_cmd_t ;
typedef int ccv_cnnp_model_t ;
struct TYPE_9__ {int hint; } ;
struct TYPE_11__ {scalar_t__* kdim; TYPE_1__ params; } ;
typedef TYPE_3__ ccv_cnnp_model_pool_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int * const,int ,int ,int ,int ) ;
 int FUNC_4 (int * const,int const,int ) ;
 int FUNC_5 (int ,TYPE_2__ const*,int,int ,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__ const,int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int * const,TYPE_2__,int ) ;
 TYPE_2__ FUNC_9 (int * const,int const) ;

__attribute__((used)) static void FUNC_10(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 FUNC_2(VAR_3 == 1);
 FUNC_2(VAR_5 == 1);
 ccv_cnnp_model_pool_t* const VAR_6 = (ccv_cnnp_model_pool_t*)VAR_0;
 const ccv_nnc_tensor_param_t VAR_7 = FUNC_9(VAR_1, VAR_2[0]);
 const int VAR_8 = FUNC_6(VAR_7, FUNC_7(VAR_7.dim));
 ccv_nnc_cmd_t VAR_9;
 if (VAR_8 >= 0 && VAR_6->kdim[0] == 0 && VAR_6->kdim[1] == 0)
  VAR_9 = FUNC_0(VAR_7.dim[VAR_8], VAR_7.dim[VAR_8 + 1]);
 else
  VAR_9 = FUNC_0(VAR_6->kdim[0], VAR_6->kdim[1]);
 ccv_nnc_tensor_param_t VAR_10;
 FUNC_5(VAR_9, &VAR_7, 1, VAR_6->params.hint, &VAR_10, 1);
 const ccv_nnc_tensor_symbol_t VAR_11 = FUNC_8(VAR_1, VAR_10, 0);
 const ccv_nnc_graph_exec_symbol_t VAR_12 = FUNC_3(VAR_1, VAR_9, FUNC_1(VAR_2[0]), FUNC_1(VAR_11), 0);
 FUNC_4(VAR_1, VAR_12, VAR_6->params.hint);
 VAR_4[0] = VAR_11;
}
