
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tensor_param_t ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ ccv_nnc_stateful_exec_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ ccv_nnc_cmd_t ;
typedef int ccv_cnnp_model_t ;


 int FUNC_0 (int * const,int * const,int const) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_cmd_t VAR_0, const ccv_nnc_tensor_param_t* const VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* const VAR_4, const int VAR_5)
{
 ccv_nnc_stateful_exec_t* const VAR_6 = (ccv_nnc_stateful_exec_t*)VAR_0.data;
 ccv_cnnp_model_t* const VAR_7 = (ccv_cnnp_model_t*)VAR_6->data;
 FUNC_0(VAR_7, VAR_4, VAR_5);
}
