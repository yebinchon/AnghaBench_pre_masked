
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ccv_nnc_tensor_variable_s {int dummy; } ;
typedef TYPE_1__* ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_dynamic_graph_t ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int * const,TYPE_1__*,int const) ;
 TYPE_1__* FUNC_1 (int) ;

ccv_nnc_tensor_variable_t FUNC_2(ccv_nnc_dynamic_graph_t* const VAR_1, const ccv_nnc_tensor_param_t VAR_2)
{
 ccv_nnc_tensor_variable_t VAR_3 = FUNC_1(sizeof(struct ccv_nnc_tensor_variable_s));
 VAR_3->type = VAR_0;
 FUNC_0(VAR_1, VAR_3, VAR_2);
 return VAR_3;
}
