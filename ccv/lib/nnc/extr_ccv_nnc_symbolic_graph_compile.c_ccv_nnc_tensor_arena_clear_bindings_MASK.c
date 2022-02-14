
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vt_tensor_size; int * pb_vt_tensors; TYPE_1__** vt_tensors; } ;
typedef TYPE_2__ ccv_nnc_tensor_arena_t ;
struct TYPE_4__ {int data; } ;



void FUNC_0(ccv_nnc_tensor_arena_t* const VAR_0)
{
 if (!VAR_0->pb_vt_tensors)
  return;
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->vt_tensor_size; VAR_1++)
  if (VAR_0->vt_tensors[VAR_1])
   VAR_0->vt_tensors[VAR_1]->data = VAR_0->pb_vt_tensors[VAR_1];
}
