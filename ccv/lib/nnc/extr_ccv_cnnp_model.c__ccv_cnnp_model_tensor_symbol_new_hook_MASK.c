
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_tensor_param_t ;
struct TYPE_3__ {int const tensor; int type; } ;
typedef TYPE_1__ ccv_cnnp_rewind_symbol_t ;
typedef int ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (int * const,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_1(void* VAR_1, const ccv_nnc_tensor_symbol_t VAR_2, const ccv_nnc_tensor_param_t VAR_3, const char* const VAR_4)
{
 const ccv_cnnp_rewind_symbol_t VAR_5 = {
  .type = VAR_0,
  .tensor = VAR_2
 };
 ccv_array_t* const VAR_6 = (ccv_array_t*)VAR_1;
 FUNC_0(VAR_6, &VAR_5);
}
