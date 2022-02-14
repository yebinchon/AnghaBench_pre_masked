
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_dataframe_t ;
struct TYPE_4__ {int column_idx; int batch_size; void* context; int context_deinit; int data_deinit; scalar_t__ iter; int * dataframe; int reduce; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_reducer_t ;
struct TYPE_5__ {int context_deinit; TYPE_1__* const context; int data_deinit; int data_enum; } ;
typedef TYPE_2__ ccv_cnnp_column_data_t ;
typedef int ccv_cnnp_column_data_reduce_f ;
typedef int ccv_cnnp_column_data_deinit_f ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (TYPE_2__*,int,int const) ;
 int const FUNC_3 (int * const) ;

ccv_cnnp_dataframe_t* FUNC_4(ccv_cnnp_dataframe_t* const VAR_3, ccv_cnnp_column_data_reduce_f VAR_4, ccv_cnnp_column_data_deinit_f VAR_5, const int VAR_6, const int VAR_7, void* const VAR_8, ccv_cnnp_column_data_context_deinit_f VAR_9)
{
 FUNC_0(VAR_7 > 0);
 ccv_cnnp_dataframe_reducer_t* const VAR_10 = (ccv_cnnp_dataframe_reducer_t*)FUNC_1(sizeof(ccv_cnnp_dataframe_reducer_t) + sizeof(void*) * (VAR_7 - 1));
 VAR_10->column_idx = VAR_6;
 VAR_10->batch_size = VAR_7;
 VAR_10->reduce = VAR_4;
 VAR_10->dataframe = VAR_3;
 VAR_10->iter = 0;
 VAR_10->data_deinit = VAR_5;
 VAR_10->context = VAR_8;
 VAR_10->context_deinit = VAR_9;
 ccv_cnnp_column_data_t VAR_11 = {
  .data_enum = VAR_2,
  .data_deinit = VAR_5 ? VAR_0 : 0,
  .context = VAR_10,
  .context_deinit = VAR_1,
 };
 return FUNC_2(&VAR_11, 1, (FUNC_3(VAR_3) + VAR_7 - 1) / VAR_7);
}
