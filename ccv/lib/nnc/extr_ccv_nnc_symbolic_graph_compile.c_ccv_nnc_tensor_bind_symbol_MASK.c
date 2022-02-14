
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ u8; } ;
typedef TYPE_2__ ccv_numeric_data_t ;
struct TYPE_15__ {TYPE_2__ data; } ;
typedef TYPE_3__ ccv_nnc_tensor_t ;
struct TYPE_16__ {size_t d; scalar_t__ graph; } ;
typedef TYPE_4__ ccv_nnc_tensor_symbol_t ;
struct TYPE_17__ {intptr_t graph_ref; size_t vt_tensor_size; int* vt_alias_refs; scalar_t__* vt_alias_offs; TYPE_1__** vt_tensors; TYPE_6__** vt_alias_tos; TYPE_2__* pb_vt_tensors; } ;
typedef TYPE_5__ ccv_nnc_tensor_arena_t ;
struct TYPE_18__ {int rnum; } ;
typedef TYPE_6__ ccv_array_t ;
struct TYPE_13__ {TYPE_2__ data; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int) ;
 TYPE_6__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_6__*,int*) ;

void FUNC_5(ccv_nnc_tensor_arena_t* const VAR_0, const ccv_nnc_tensor_symbol_t VAR_1, const ccv_nnc_tensor_t* const VAR_2)
{
 FUNC_0(VAR_0->graph_ref == (intptr_t)VAR_1.graph);
 FUNC_0(VAR_1.d < VAR_0->vt_tensor_size);

 int VAR_3;
 if (!VAR_0->pb_vt_tensors)
 {
  VAR_0->pb_vt_tensors = (ccv_numeric_data_t*)FUNC_1(VAR_0->vt_tensor_size, sizeof(ccv_numeric_data_t));
  for (VAR_3 = 0; VAR_3 < VAR_0->vt_tensor_size; VAR_3++)
   if (VAR_0->vt_tensors[VAR_3])
    VAR_0->pb_vt_tensors[VAR_3] = VAR_0->vt_tensors[VAR_3]->data;
 }
 if (!VAR_0->vt_alias_tos)
 {
  VAR_0->vt_alias_tos = (ccv_array_t**)FUNC_1(VAR_0->vt_tensor_size, sizeof(ccv_array_t*));
  for (VAR_3 = 0; VAR_3 < VAR_0->vt_tensor_size; VAR_3++)
   if (VAR_0->vt_alias_refs[VAR_3])
   {
    const int VAR_4 = VAR_0->vt_alias_refs[VAR_3] - 1;
    if (!VAR_0->vt_alias_tos[VAR_4])
     VAR_0->vt_alias_tos[VAR_4] = FUNC_3(sizeof(int), 1, 0);
    FUNC_4(VAR_0->vt_alias_tos[VAR_4], &VAR_3);
   }
 }
 VAR_0->vt_tensors[VAR_1.d]->data = VAR_2->data;
 if (VAR_0->vt_alias_tos[VAR_1.d])
  for (VAR_3 = 0; VAR_3 < VAR_0->vt_alias_tos[VAR_1.d]->rnum; VAR_3++)
  {
   const int VAR_5 = *(int*)FUNC_2(VAR_0->vt_alias_tos[VAR_1.d], VAR_3);
   VAR_0->vt_tensors[VAR_5]->data.u8 = VAR_2->data.u8 + VAR_0->vt_alias_offs[VAR_5];
  }
}
