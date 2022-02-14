
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_3__ {intptr_t graph_ref; int const vt_tensor_size; int sub_arena_size; struct TYPE_3__** sub_arenas; int ** vt_tensors; } ;
typedef TYPE_1__ ccv_nnc_tensor_arena_t ;
typedef int ccv_nnc_symbolic_graph_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static ccv_nnc_tensor_t* FUNC_1(const ccv_nnc_tensor_arena_t* const VAR_0, const ccv_nnc_symbolic_graph_t* const VAR_1, const int VAR_2)
{
 FUNC_0(VAR_1);
 if ((intptr_t)VAR_1 == VAR_0->graph_ref)
 {
  FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0->vt_tensor_size);
  return VAR_0->vt_tensors[VAR_2];
 }
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->sub_arena_size; VAR_3++)
  if (VAR_0->sub_arenas[VAR_3])
  {
   ccv_nnc_tensor_t* const VAR_4 = FUNC_1(VAR_0->sub_arenas[VAR_3], VAR_1, VAR_2);
   if (VAR_4)
    return VAR_4;
  }
 return 0;
}
