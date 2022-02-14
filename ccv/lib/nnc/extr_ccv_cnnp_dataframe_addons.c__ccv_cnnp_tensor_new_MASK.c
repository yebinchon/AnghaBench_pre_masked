
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_stream_context_t ;


 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const int VAR_0, const int* const VAR_1, const int VAR_2, void** const VAR_3, void* const VAR_4, ccv_nnc_stream_context_t* const VAR_5)
{
 ccv_nnc_tensor_param_t VAR_6 = *(ccv_nnc_tensor_param_t*)VAR_4;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  if (!VAR_3[VAR_7])
   VAR_3[VAR_7] = FUNC_0(0, VAR_6, 0);
}
