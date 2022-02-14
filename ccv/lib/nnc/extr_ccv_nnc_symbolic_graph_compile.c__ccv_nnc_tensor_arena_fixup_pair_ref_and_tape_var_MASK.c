
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {intptr_t graph_ref; struct TYPE_15__** sub_arenas; scalar_t__* vt_tensors; } ;
typedef TYPE_5__ ccv_nnc_tensor_arena_t ;
struct TYPE_16__ {int tensor_symbol_info_size; int sub_prep_size; struct TYPE_16__** sub_preps; TYPE_4__* alloc_prep; TYPE_2__* tensor_symbol_info; TYPE_1__* symbolic_graph; } ;
typedef TYPE_6__ ccv_nnc_symbolic_graph_prep_t ;
struct TYPE_14__ {int* vt_blocks; TYPE_3__* blocks; int * buffers; } ;
struct TYPE_13__ {size_t buffer_ref; } ;
struct TYPE_12__ {int flags; scalar_t__ pair_ref; } ;
struct TYPE_11__ {int pair; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_5__ const* const,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const ccv_nnc_tensor_arena_t* const VAR_2, const ccv_nnc_symbolic_graph_prep_t* const VAR_3, ccv_nnc_tensor_arena_t* const VAR_4)
{
 FUNC_4(VAR_4->graph_ref == (intptr_t)VAR_3->symbolic_graph);
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->tensor_symbol_info_size; VAR_5++)
 {
  if (VAR_3->tensor_symbol_info[VAR_5].pair_ref)
  {
   VAR_4->vt_tensors[VAR_5] = FUNC_2(VAR_2, VAR_3->symbolic_graph->pair, VAR_3->tensor_symbol_info[VAR_5].pair_ref - 1);

   continue;
  }
  if ((VAR_3->tensor_symbol_info[VAR_5].flags & VAR_0) && VAR_4->vt_tensors[VAR_5])
  {

   if (!FUNC_0(VAR_4->vt_tensors[VAR_5]))
   {
    const int VAR_6 = VAR_3->alloc_prep->vt_blocks[VAR_5];
    if (VAR_6 >= 0 &&
     FUNC_1(VAR_3->alloc_prep->buffers[VAR_3->alloc_prep->blocks[VAR_6].buffer_ref]) == VAR_1)
     continue;
   }
   FUNC_3(VAR_4->vt_tensors[VAR_5]);
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->sub_prep_size; VAR_5++)
  if (VAR_3->sub_preps[VAR_5])
   FUNC_5(VAR_2, VAR_3->sub_preps[VAR_5], VAR_4->sub_arenas[VAR_5]);
}
