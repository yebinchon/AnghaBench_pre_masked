
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_6__ {int* dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_cnnp_model_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__ const) ;
 int FUNC_3 (TYPE_1__ const) ;
 int FUNC_4 (int * const,int const,int ,int*,TYPE_1__,int ) ;
 TYPE_1__ FUNC_5 (int * const,int const) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static void FUNC_7(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 FUNC_1(VAR_3 == 1);
 FUNC_1(VAR_5 == 1);
 const ccv_nnc_tensor_param_t VAR_6 = FUNC_5(VAR_1, VAR_2[0]);
 ccv_nnc_tensor_param_t VAR_7 = VAR_6;
 FUNC_6(VAR_7.dim, 0, sizeof(VAR_7.dim));
 VAR_7.dim[0] = FUNC_3(VAR_6);
 FUNC_1(VAR_7.dim[0] > 0);
 VAR_7.dim[1] = FUNC_2(VAR_6) / VAR_7.dim[0];
 VAR_4[0] = FUNC_4(VAR_1, VAR_2[0], FUNC_0(), VAR_7.dim, VAR_7, 0);
}
