
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_nnc_tensor_multiview_t ;
struct TYPE_7__ {int index; scalar_t__ update_required; scalar_t__* tensors; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_8__ {int size; TYPE_1__** tensor_wraps; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_9__ {int tensor_wraps; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;
struct TYPE_10__ {scalar_t__ tensor_wraps_ref; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_info_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int * const) ;

__attribute__((used)) static void FUNC_3(ccv_nnc_graph_t* const VAR_0, ccv_nnc_graph_exec_info_t* const VAR_1)
{
 if (!VAR_1->tensor_wraps_ref)
  return;
 int VAR_2;
 ccv_nnc_graph_tensor_wrap_array_t* const VAR_3 = *(ccv_nnc_graph_tensor_wrap_array_t**)FUNC_1(VAR_0->tensor_wraps, VAR_1->tensor_wraps_ref - 1);
 ccv_nnc_graph_tensor_wrap_t** const VAR_4 = VAR_3->tensor_wraps;
 for (VAR_2 = 0; VAR_2 < VAR_3->size; VAR_2++)
  if (VAR_4[VAR_2] && VAR_4[VAR_2]->update_required)
  {
   FUNC_0(VAR_4[VAR_2]->index > 0);
   ccv_nnc_tensor_multiview_t* const VAR_5 = (ccv_nnc_tensor_multiview_t*)(VAR_4[VAR_2]->tensors[VAR_4[VAR_2]->index - 1]);

   FUNC_2(VAR_5);
   VAR_4[VAR_2]->update_required = 0;
  }
}
