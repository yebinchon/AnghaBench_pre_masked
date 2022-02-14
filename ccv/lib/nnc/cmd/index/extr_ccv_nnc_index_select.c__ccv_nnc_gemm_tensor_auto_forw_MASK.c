
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_param_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_cmd_param_t VAR_0, const ccv_nnc_tensor_param_t* const VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_2 >= 2);
 FUNC_0(VAR_5 == 1);
 VAR_4[0] = VAR_1[0];
 VAR_4[0].dim[0] = VAR_1[1].dim[0];
}
