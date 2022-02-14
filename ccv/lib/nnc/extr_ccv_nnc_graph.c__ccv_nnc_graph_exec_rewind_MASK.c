
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** tensor_wraps; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_10__ {TYPE_5__* tensor_wraps; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;
struct TYPE_11__ {scalar_t__ tensor_wraps_ref; int input_size; int output_size; int update_size; int * updates; int * outputs; int * inputs; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_info_t ;
struct TYPE_12__ {scalar_t__ rnum; } ;
struct TYPE_8__ {int * tensors; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ccv_nnc_graph_exec_info_t* const VAR_0, ccv_nnc_graph_t* const VAR_1)
{
 if (!VAR_0->tensor_wraps_ref)
  return;
 int VAR_2;
 FUNC_0(VAR_0->tensor_wraps_ref <= VAR_1->tensor_wraps->rnum);
 ccv_nnc_graph_tensor_wrap_array_t* const VAR_3 = *(ccv_nnc_graph_tensor_wrap_array_t**)FUNC_1(VAR_1->tensor_wraps, VAR_0->tensor_wraps_ref - 1);;

 for (VAR_2 = 0; VAR_2 < VAR_0->input_size; VAR_2++)
  if (VAR_3->tensor_wraps[VAR_2])
   VAR_0->inputs[VAR_2] = VAR_3->tensor_wraps[VAR_2]->tensors[0];
 const int VAR_4 = VAR_0->input_size;
 for (VAR_2 = 0; VAR_2 < VAR_0->output_size; VAR_2++)
  if (VAR_3->tensor_wraps[VAR_4 + VAR_2])
   VAR_0->outputs[VAR_2] = VAR_3->tensor_wraps[VAR_4 + VAR_2]->tensors[0];
 const int VAR_5 = VAR_0->input_size + VAR_0->output_size;
 for (VAR_2 = 0; VAR_2 < VAR_0->update_size; VAR_2++)
  if (VAR_3->tensor_wraps[VAR_5 + VAR_2])
   VAR_0->updates[VAR_2] = VAR_3->tensor_wraps[VAR_5 + VAR_2]->tensors[0];
}
