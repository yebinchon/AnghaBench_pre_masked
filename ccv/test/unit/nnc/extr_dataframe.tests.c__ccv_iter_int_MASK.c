
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_nnc_stream_context_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const int VAR_1, const int* VAR_2, const int VAR_3, void** const VAR_4, void* const VAR_5, ccv_nnc_stream_context_t* const VAR_6)
{
 int* const VAR_7 = (int*)VAR_5;
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_4[VAR_8] = (void*)(intptr_t)VAR_7[VAR_2[VAR_8]];
 ++VAR_0;
}
