
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_t ;
typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {int input_offset; int input_size; int flags; int output_params; int hint; int cmd; TYPE_1__ tuple; } ;
typedef TYPE_2__ ccv_cnnp_cmd_exec_context_t ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int * const,int ,int const,int ,int ,TYPE_2__* const,int ) ;
 int FUNC_4 (int ,int const* const,int) ;

int FUNC_5(ccv_cnnp_dataframe_t* const VAR_3, const int VAR_4, const ccv_nnc_cmd_t VAR_5, const ccv_nnc_hint_t VAR_6, const int VAR_7, const int VAR_8, const int VAR_9, const ccv_nnc_tensor_param_t* const VAR_10, const int VAR_11, const int VAR_12)
{
 FUNC_1(VAR_9 > 0);
 FUNC_1(VAR_11 > 0);
 ccv_cnnp_cmd_exec_context_t* const VAR_13 = (ccv_cnnp_cmd_exec_context_t*)FUNC_2(sizeof(ccv_cnnp_cmd_exec_context_t) + sizeof(ccv_nnc_tensor_param_t) * (VAR_11 - 1));
 VAR_13->tuple.size = VAR_11;
 VAR_13->input_offset = VAR_8;
 VAR_13->input_size = VAR_9;
 VAR_13->cmd = VAR_5;
 VAR_13->hint = VAR_6;
 VAR_13->flags = VAR_7;
 FUNC_4(VAR_13->output_params, VAR_10, sizeof(ccv_nnc_tensor_param_t) * VAR_11);
 return FUNC_3(VAR_3, VAR_0, VAR_12, VAR_1, FUNC_0(VAR_4), VAR_13, (ccv_cnnp_column_data_context_deinit_f)VAR_2);
 return 0;
}
