
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int* inc; } ;
typedef TYPE_3__ ccv_nnc_tensor_view_t ;
struct TYPE_16__ {int* dim; } ;
struct TYPE_17__ {scalar_t__ u8; } ;
struct TYPE_19__ {int type; TYPE_1__ info; TYPE_2__ data; } ;
typedef TYPE_4__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_tensor_multiview_t ;
struct TYPE_20__ {int name; uintptr_t tensor_ref; uintptr_t start_ptr; size_t end_ptr; int index; int zone; } ;
typedef TYPE_5__ ccv_nnc_tensor_dot_t ;
struct TYPE_21__ {int* remap; int* rename_index; int* rename_zone; TYPE_5__* dots; } ;
typedef TYPE_6__ ccv_nnc_tensor_dot_recovery_t ;
struct TYPE_22__ {TYPE_9__* exec_info; } ;
typedef TYPE_7__ ccv_nnc_graph_t ;
struct TYPE_23__ {int input_size; int output_size; TYPE_4__** outputs; TYPE_4__** inputs; } ;
typedef TYPE_8__ ccv_nnc_graph_exec_info_t ;
struct TYPE_24__ {int rnum; } ;


 int const FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_5__*,int*) ;
 int FUNC_5 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_9__*,int) ;
 uintptr_t FUNC_8 (uintptr_t,uintptr_t) ;
 int const FUNC_9 (int const*) ;

__attribute__((used)) static ccv_nnc_tensor_dot_recovery_t FUNC_10(const ccv_nnc_graph_t* const VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->exec_info->rnum; VAR_1++)
 {
  ccv_nnc_graph_exec_info_t* VAR_4 = (ccv_nnc_graph_exec_info_t*)FUNC_7(VAR_0->exec_info, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_4->input_size; VAR_2++)
   if (VAR_4->inputs[VAR_2])
    VAR_3 += FUNC_1(VAR_4->inputs[VAR_2]) ? FUNC_3((ccv_nnc_tensor_multiview_t*)VAR_4->inputs[VAR_2]) : 1;
  for (VAR_2 = 0; VAR_2 < VAR_4->output_size; VAR_2++)
   if (VAR_4->outputs[VAR_2])
    VAR_3 += FUNC_1(VAR_4->outputs[VAR_2]) ? FUNC_3((ccv_nnc_tensor_multiview_t*)VAR_4->outputs[VAR_2]) : 1;
 }
 ccv_nnc_tensor_dot_t* VAR_5 = VAR_3 > 0 ? (ccv_nnc_tensor_dot_t*)FUNC_6(sizeof(ccv_nnc_tensor_dot_t) * VAR_3) : 0;
 int VAR_6 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->exec_info->rnum; VAR_1++)
 {
  ccv_nnc_graph_exec_info_t* VAR_7 = (ccv_nnc_graph_exec_info_t*)FUNC_7(VAR_0->exec_info, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_7->input_size; VAR_2++)
  {
   ccv_nnc_tensor_t* VAR_8 = VAR_7->inputs[VAR_2];
   if (!VAR_8)
    continue;
   if (FUNC_1(VAR_8))
    FUNC_4((ccv_nnc_tensor_multiview_t*)VAR_8, VAR_5, &VAR_6);
   else {
    VAR_5[VAR_6].name = VAR_6;
    VAR_5[VAR_6].tensor_ref = (uintptr_t)VAR_8;
    VAR_5[VAR_6].start_ptr = (uintptr_t)VAR_8->data.u8;
    const int* VAR_9 = FUNC_2(VAR_8) ? ((ccv_nnc_tensor_view_t*)VAR_8)->inc : VAR_8->info.dim;
    const size_t VAR_10 = (FUNC_9(VAR_9) - VAR_9[0] + VAR_8->info.dim[0]) * FUNC_0(VAR_8->type);
    VAR_5[VAR_6].end_ptr = VAR_5[VAR_6].start_ptr + VAR_10 - 1;
    ++VAR_6;
   }
  }
  for (VAR_2 = 0; VAR_2 < VAR_7->output_size; VAR_2++)
  {
   ccv_nnc_tensor_t* VAR_11 = VAR_7->outputs[VAR_2];
   if (!VAR_11)
    continue;
   if (FUNC_1(VAR_11))
    FUNC_4((ccv_nnc_tensor_multiview_t*)VAR_11, VAR_5, &VAR_6);
   else {
    VAR_5[VAR_6].name = VAR_6;
    VAR_5[VAR_6].tensor_ref = (uintptr_t)VAR_11;
    VAR_5[VAR_6].start_ptr = (uintptr_t)VAR_11->data.u8;
    const int* VAR_12 = FUNC_2(VAR_11) ? ((ccv_nnc_tensor_view_t*)VAR_11)->inc : VAR_11->info.dim;
    const size_t VAR_13 = (FUNC_9(VAR_12) - VAR_12[0] + VAR_11->info.dim[0]) * FUNC_0(VAR_11->type);
    VAR_5[VAR_6].end_ptr = VAR_5[VAR_6].start_ptr + VAR_13 - 1;
    ++VAR_6;
   }
  }
 }
 VAR_3 = VAR_6;

 FUNC_5(VAR_5, VAR_3, 0);
 int VAR_14 = 0, VAR_15 = 0;
 uintptr_t VAR_16 = VAR_3 > 0 ? VAR_5[0].tensor_ref : 0;
 uintptr_t VAR_17 = VAR_3 > 0 ? VAR_5[0].end_ptr : 0;


 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
 {
  if (VAR_5[VAR_1].tensor_ref != VAR_16)
  {
   VAR_16 = VAR_5[VAR_1].tensor_ref;
   ++VAR_14;
  }
  if (VAR_5[VAR_1].start_ptr > VAR_17)
  {
   VAR_17 = FUNC_8(VAR_17, VAR_5[VAR_1].end_ptr);
   ++VAR_15;
  }
  VAR_5[VAR_1].index = VAR_14;
  VAR_5[VAR_1].zone = VAR_15;
 }



 const int VAR_18 = VAR_14 + 1;
 const int VAR_19 = VAR_15 + 1;
 int* VAR_20 = (int*)FUNC_6(sizeof(int) * (VAR_3 + VAR_18 + VAR_19));
 int* VAR_21 = VAR_20 + VAR_3;
 int* VAR_22 = VAR_21 + VAR_18;
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
  VAR_20[VAR_5[VAR_1].name] = VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_18; VAR_1++)
  VAR_21[VAR_1] = -1;
 for (VAR_1 = 0; VAR_1 < VAR_19; VAR_1++)
  VAR_22[VAR_1] = -1;
 VAR_14 = 0;
 VAR_15 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
 {
  ccv_nnc_tensor_dot_t* VAR_23 = VAR_5 + VAR_20[VAR_1];
  if (VAR_21[VAR_23->index] == -1)
   VAR_21[VAR_23->index] = VAR_14++;
  if (VAR_22[VAR_23->zone] == -1)
   VAR_22[VAR_23->zone] = VAR_15++;
 }
 ccv_nnc_tensor_dot_recovery_t VAR_24 = {
  .dots = VAR_5,
  .remap = VAR_20,
  .rename_index = VAR_21,
  .rename_zone = VAR_22,
 };
 return VAR_24;
}
