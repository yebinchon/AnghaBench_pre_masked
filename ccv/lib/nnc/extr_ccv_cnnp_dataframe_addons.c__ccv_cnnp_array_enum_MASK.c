
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_nnc_stream_context_t ;
typedef int ccv_array_t ;


 void* FUNC_0 (int * const,int const) ;

__attribute__((used)) static void FUNC_1(const int VAR_0, const int* const VAR_1, const int VAR_2, void** const VAR_3, void* const VAR_4, ccv_nnc_stream_context_t* const VAR_5)
{
 int VAR_6;
 ccv_array_t* const VAR_7 = (ccv_array_t*)VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3[VAR_6] = FUNC_0(VAR_7, VAR_1[VAR_6]);
}
