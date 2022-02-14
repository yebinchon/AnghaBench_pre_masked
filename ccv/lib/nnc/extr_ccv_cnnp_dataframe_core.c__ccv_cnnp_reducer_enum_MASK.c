
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_nnc_stream_context_t ;
struct TYPE_2__ {int iter_idx; int const batch_size; int context; scalar_t__ batch_data; int (* reduce ) (scalar_t__,int,void** const,int ,int * const) ;int * iter; int column_idx; int dataframe; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_reducer_t ;
typedef int ccv_cnnp_dataframe_iter_t ;


 int * FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int * const,scalar_t__,int,int * const) ;
 int FUNC_2 (int * const,int const,int * const) ;
 int FUNC_3 (int * const,int const) ;
 int FUNC_4 (scalar_t__,int,void** const,int ,int * const) ;

__attribute__((used)) static void FUNC_5(const int VAR_0, const int* const VAR_1, const int VAR_2, void** const VAR_3, void* const VAR_4, ccv_nnc_stream_context_t* const VAR_5)
{
 ccv_cnnp_dataframe_reducer_t* const VAR_6 = (ccv_cnnp_dataframe_reducer_t*)VAR_4;
 if (!VAR_6->iter)
 {
  VAR_6->iter = FUNC_0(VAR_6->dataframe, &VAR_6->column_idx, 1);
  VAR_6->iter_idx = -1;
 }
 ccv_cnnp_dataframe_iter_t* const VAR_7 = VAR_6->iter;
 int VAR_8, VAR_9;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {
  if (VAR_6->iter_idx + 1 != VAR_1[VAR_8])
   FUNC_3(VAR_7, VAR_1[VAR_8] * VAR_6->batch_size);
  VAR_6->iter_idx = VAR_1[VAR_8];
  FUNC_2(VAR_7, VAR_6->batch_size, VAR_5);
  for (VAR_9 = 0; VAR_9 < VAR_6->batch_size; VAR_9++)
   if (0 != FUNC_1(VAR_7, VAR_6->batch_data + VAR_9, 1, VAR_5))
    break;
  VAR_6->reduce(VAR_6->batch_data, VAR_9, VAR_3 + VAR_8, VAR_6->context, VAR_5);
 }
}
