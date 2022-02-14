
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int * const,int ,int,int ,TYPE_1__* const,int ) ;

int FUNC_5(ccv_cnnp_dataframe_t* const VAR_5, const ccv_nnc_tensor_param_t VAR_6)
{
 int VAR_7 = FUNC_2(VAR_6.type) == VAR_1 ? 0 : VAR_0;
 if (VAR_7 == VAR_0)
  FUNC_0(VAR_7, FUNC_1(VAR_6.type));
 ccv_nnc_tensor_param_t* const VAR_8 = (ccv_nnc_tensor_param_t*)FUNC_3(sizeof(ccv_nnc_tensor_param_t));
 VAR_8[0] = VAR_6;
 return FUNC_4(VAR_5, VAR_3, VAR_7, VAR_2, VAR_8, (ccv_cnnp_column_data_context_deinit_f)VAR_4);
}
