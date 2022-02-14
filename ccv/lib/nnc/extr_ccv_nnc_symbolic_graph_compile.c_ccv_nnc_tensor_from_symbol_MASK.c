
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ it; } ;
typedef TYPE_1__ ccv_nnc_tensor_t ;
struct TYPE_11__ {size_t d; scalar_t__ graph; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
struct TYPE_12__ {intptr_t graph_ref; size_t vt_tensor_size; int sub_arena_size; struct TYPE_12__** sub_arenas; TYPE_1__** vt_tensors; } ;
typedef TYPE_4__ ccv_nnc_tensor_arena_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

ccv_nnc_tensor_t* FUNC_3(const ccv_nnc_tensor_arena_t* const VAR_0, const ccv_nnc_tensor_symbol_t VAR_1)
{
 if ((intptr_t)VAR_1.graph == VAR_0->graph_ref)
 {
  FUNC_2(VAR_1.d >= 0 && VAR_1.d < VAR_0->vt_tensor_size);
  ccv_nnc_tensor_t* VAR_2 = VAR_0->vt_tensors[VAR_1.d];
  if (VAR_2 && FUNC_0(VAR_2))
  {
   ccv_nnc_tensor_multiview_t* VAR_3 = (ccv_nnc_tensor_multiview_t*)VAR_2;
   while (FUNC_0(VAR_3))
    VAR_3 = (ccv_nnc_tensor_multiview_t*)(VAR_3->it ? VAR_3->it : FUNC_1(VAR_3)[0]);
   return (ccv_nnc_tensor_t*)VAR_3;
  }
  return VAR_2;
 }
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0->sub_arena_size; VAR_4++)
  if (VAR_0->sub_arenas[VAR_4])
  {
   ccv_nnc_tensor_t* VAR_5 = FUNC_3(VAR_0->sub_arenas[VAR_4], VAR_1);
   if (VAR_5)
    return VAR_5;
  }
 return 0;
}
