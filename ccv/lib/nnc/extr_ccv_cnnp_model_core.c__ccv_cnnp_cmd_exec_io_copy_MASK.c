
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_nnc_tensor_t ;
typedef int ccv_nnc_tensor_symbol_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int *,int const) ;


 int FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_tensor_symbol_t VAR_1, const ccv_cnnp_state_initializer_f VAR_2, void* const VAR_3, void* const VAR_4)
{
 VAR_2(VAR_3, FUNC_0(), VAR_0, 0, (ccv_nnc_tensor_t*)VAR_4, VAR_1);
}
