
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* it; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
struct TYPE_10__ {int index; TYPE_1__** tensors; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_11__ {int size; TYPE_2__** tensor_wraps; } ;
typedef TYPE_3__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_12__ {int tensor_wraps; } ;
typedef TYPE_4__ ccv_nnc_graph_t ;
struct TYPE_13__ {int input_size; int output_size; TYPE_1__** outputs; TYPE_1__** inputs; scalar_t__ tensor_wraps_ref; } ;
typedef TYPE_5__ ccv_nnc_graph_exec_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_graph_t* const VAR_0, ccv_nnc_graph_exec_info_t* const VAR_1)
{
 if (!VAR_1->tensor_wraps_ref)
  return;
 int VAR_2;
 ccv_nnc_graph_tensor_wrap_array_t* const VAR_3 = *(ccv_nnc_graph_tensor_wrap_array_t**)FUNC_2(VAR_0->tensor_wraps, VAR_1->tensor_wraps_ref - 1);
 ccv_nnc_graph_tensor_wrap_t** const VAR_4 = VAR_3->tensor_wraps;
 for (VAR_2 = 0; VAR_2 < VAR_3->size; VAR_2++)
  if (VAR_4[VAR_2])
  {
   FUNC_1(VAR_4[VAR_2]->index > 0);
   ccv_nnc_tensor_multiview_t* VAR_5 = (ccv_nnc_tensor_multiview_t*)(VAR_4[VAR_2]->tensors[VAR_4[VAR_2]->index - 1]);
   FUNC_1(FUNC_0(VAR_5));

   VAR_5->it = VAR_4[VAR_2]->tensors[VAR_4[VAR_2]->index];
   FUNC_1(!FUNC_0(VAR_5->it));
  }
 for (VAR_2 = 0; VAR_2 < VAR_1->input_size; VAR_2++)
  if (VAR_4[VAR_2])
   VAR_1->inputs[VAR_2] = VAR_4[VAR_2]->tensors[VAR_4[VAR_2]->index];
 const int VAR_6 = VAR_1->input_size;
 for (VAR_2 = 0; VAR_2 < VAR_1->output_size; VAR_2++)
  if (VAR_4[VAR_6 + VAR_2])
   VAR_1->outputs[VAR_2] = VAR_4[VAR_6 + VAR_2]->tensors[VAR_4[VAR_6 + VAR_2]->index];
}
