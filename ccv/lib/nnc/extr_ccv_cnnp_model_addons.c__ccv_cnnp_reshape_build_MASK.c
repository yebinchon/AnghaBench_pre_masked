
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_5__ {int dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_cnnp_model_t ;
struct TYPE_6__ {int inc; int ofs; int dim; } ;
typedef TYPE_2__ ccv_cnnp_model_reshape_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int * const,int const,int ,int ,TYPE_1__,int ) ;
 TYPE_1__ FUNC_2 (int * const,int const) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_3 == 1);
 FUNC_0(VAR_5 == 1);
 ccv_cnnp_model_reshape_t* const VAR_6 = (ccv_cnnp_model_reshape_t*)VAR_0;
 ccv_nnc_tensor_param_t VAR_7 = FUNC_2(VAR_1, VAR_2[0]);
 FUNC_3(VAR_7.dim, VAR_6->dim, sizeof(VAR_7.dim));
 VAR_4[0] = FUNC_1(VAR_1, VAR_2[0], VAR_6->ofs, VAR_6->inc, VAR_7, 0);
}
