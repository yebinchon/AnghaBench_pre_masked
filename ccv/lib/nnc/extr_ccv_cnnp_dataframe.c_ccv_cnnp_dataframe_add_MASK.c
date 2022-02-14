
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const stream_type; void* const context; int context_deinit; int data_deinit; int data_enum; } ;
typedef TYPE_1__ ccv_cnnp_derived_column_data_t ;
struct TYPE_8__ {int column_size; TYPE_4__* derived_column_data; } ;
typedef TYPE_2__ ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_enum_f ;
typedef int ccv_cnnp_column_data_deinit_f ;
typedef int ccv_cnnp_column_data_context_deinit_f ;
struct TYPE_9__ {int rnum; } ;


 TYPE_4__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*) ;

int FUNC_2(ccv_cnnp_dataframe_t* const VAR_0, ccv_cnnp_column_data_enum_f VAR_1, const int VAR_2, ccv_cnnp_column_data_deinit_f VAR_3, void* const VAR_4, ccv_cnnp_column_data_context_deinit_f VAR_5)
{
 if (!VAR_0->derived_column_data)
  VAR_0->derived_column_data = FUNC_0(sizeof(ccv_cnnp_derived_column_data_t), 1, 0);
 ccv_cnnp_derived_column_data_t VAR_6 = {
  .stream_type = VAR_2,
  .data_enum = VAR_1,
  .data_deinit = VAR_3,
  .context = VAR_4,
  .context_deinit = VAR_5,
 };
 FUNC_1(VAR_0->derived_column_data, &VAR_6);
 return VAR_0->column_size + VAR_0->derived_column_data->rnum - 1;
}
