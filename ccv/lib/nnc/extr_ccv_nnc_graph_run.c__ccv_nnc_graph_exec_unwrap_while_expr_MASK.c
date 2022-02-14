
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* it; } ;
typedef TYPE_2__ ccv_nnc_tensor_multiview_t ;
struct TYPE_12__ {int index; TYPE_2__** tensors; } ;
typedef TYPE_3__ ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_13__ {int size; TYPE_3__** tensor_wraps; } ;
typedef TYPE_4__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_14__ {int tensor_wraps; } ;
typedef TYPE_5__ ccv_nnc_graph_t ;
struct TYPE_10__ {int input_size; TYPE_2__** inputs; scalar_t__ tensor_wraps_ref; } ;
struct TYPE_15__ {int flags; TYPE_1__ p_while; } ;
typedef TYPE_6__ ccv_nnc_graph_exec_info_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_graph_t* const VAR_1, ccv_nnc_graph_exec_info_t* const VAR_2)
{
 FUNC_1(VAR_2->flags & VAR_0);
 if (!VAR_2->p_while.tensor_wraps_ref)
  return;
 int VAR_3;
 ccv_nnc_graph_tensor_wrap_array_t* const VAR_4 = *(ccv_nnc_graph_tensor_wrap_array_t**)FUNC_2(VAR_1->tensor_wraps, VAR_2->p_while.tensor_wraps_ref - 1);
 ccv_nnc_graph_tensor_wrap_t** const VAR_5 = VAR_4->tensor_wraps;
 for (VAR_3 = 0; VAR_3 < VAR_4->size; VAR_3++)
  if (VAR_5[VAR_3])
  {
   FUNC_1(VAR_5[VAR_3]->index > 0);
   ccv_nnc_tensor_multiview_t* VAR_6 = (ccv_nnc_tensor_multiview_t*)(VAR_5[VAR_3]->tensors[VAR_5[VAR_3]->index - 1]);
   FUNC_1(FUNC_0(VAR_6));

   VAR_6->it = VAR_5[VAR_3]->tensors[VAR_5[VAR_3]->index];
   FUNC_1(!FUNC_0(VAR_6->it));
  }
 for (VAR_3 = 0; VAR_3 < VAR_2->p_while.input_size; VAR_3++)
  if (VAR_5[VAR_3])
   VAR_2->p_while.inputs[VAR_3] = VAR_5[VAR_3]->tensors[VAR_5[VAR_3]->index];
}
