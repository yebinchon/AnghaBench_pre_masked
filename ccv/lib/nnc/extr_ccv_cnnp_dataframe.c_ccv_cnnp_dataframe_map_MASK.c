
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const stream_type; int const column_idx_size; int* column_idxs; void* const context; int context_deinit; int data_deinit; int map; } ;
typedef TYPE_1__ ccv_cnnp_derived_column_data_t ;
struct TYPE_8__ {int column_size; TYPE_4__* derived_column_data; } ;
typedef TYPE_2__ ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_map_f ;
typedef int ccv_cnnp_column_data_deinit_f ;
typedef int ccv_cnnp_column_data_context_deinit_f ;
struct TYPE_9__ {int rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_4 (int*,int const* const,int) ;

int FUNC_5(ccv_cnnp_dataframe_t* const VAR_0, ccv_cnnp_column_data_map_f VAR_1, const int VAR_2, ccv_cnnp_column_data_deinit_f VAR_3, const int* const VAR_4, const int VAR_5, void* const VAR_6, ccv_cnnp_column_data_context_deinit_f VAR_7)
{
 FUNC_0(VAR_5 > 0);
 if (!VAR_0->derived_column_data)
  VAR_0->derived_column_data = FUNC_2(sizeof(ccv_cnnp_derived_column_data_t), 1, 0);
 const int VAR_8 = VAR_0->column_size + VAR_0->derived_column_data->rnum;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  { FUNC_0(VAR_4[VAR_9] < VAR_8); }
 ccv_cnnp_derived_column_data_t VAR_10 = {
  .stream_type = VAR_2,
  .column_idx_size = VAR_5,
  .column_idxs = (int*)FUNC_1(sizeof(int) * VAR_5),
  .map = VAR_1,
  .data_deinit = VAR_3,
  .context = VAR_6,
  .context_deinit = VAR_7,
 };
 FUNC_4(VAR_10.column_idxs, VAR_4, sizeof(int) * VAR_5);
 FUNC_3(VAR_0->derived_column_data, &VAR_10);
 return VAR_0->column_size + VAR_0->derived_column_data->rnum - 1;
}
