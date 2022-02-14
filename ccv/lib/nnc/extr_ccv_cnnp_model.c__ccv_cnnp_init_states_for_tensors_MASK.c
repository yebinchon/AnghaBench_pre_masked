
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_11__ {int d; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_t ;
struct TYPE_12__ {int parallel_count; int * graph; TYPE_2__* compiled_data; int * tensor_arena; } ;
typedef TYPE_4__ ccv_nnc_tensor_init_states_t ;
typedef int ccv_nnc_tensor_arena_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_t ;
struct TYPE_9__ {int const size; unsigned int* v; } ;
struct TYPE_10__ {TYPE_1__ tensors_init; } ;


 int const FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const,int const,int const,int * const*,int,int * const*,int,int ) ;
 int const VAR_0 ;
 int * FUNC_3 (int * const,TYPE_3__ const) ;
 TYPE_3__ const FUNC_4 (int const* const,TYPE_3__ const,int) ;

__attribute__((used)) static void FUNC_5(void* const VAR_1, const ccv_nnc_cmd_t VAR_2, const ccv_nnc_hint_t VAR_3, const int VAR_4, ccv_nnc_tensor_t* const VAR_5, const ccv_nnc_tensor_symbol_t VAR_6)
{
 ccv_nnc_tensor_init_states_t* const VAR_7 = (ccv_nnc_tensor_init_states_t*)VAR_1;
 ccv_nnc_tensor_arena_t* const VAR_8 = VAR_7->tensor_arena;
 ccv_nnc_tensor_t* const VAR_9 = FUNC_3(VAR_8, VAR_6);
 if (!VAR_9)
  return;
 const int VAR_10 = VAR_6.d;
 FUNC_1(VAR_10 < VAR_7->compiled_data->tensors_init.size);
 if (VAR_7->compiled_data->tensors_init.v[VAR_10 >> 5] & (1u << (VAR_10 & 0x1f)))
  return;
 VAR_7->compiled_data->tensors_init.v[VAR_10 >> 5] |= (1u << (VAR_10 & 0x1f));
 FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_5, VAR_5 ? 1 : 0, &VAR_9, 1, 0);
 const ccv_nnc_symbolic_graph_t* const VAR_11 = VAR_7->graph;
 const int VAR_12 = VAR_7->parallel_count;
 int VAR_13;
 for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++)
 {
  ccv_nnc_tensor_t* const VAR_14 = FUNC_3(VAR_8, FUNC_4(VAR_11, VAR_6, VAR_13));
  if (VAR_14)
   FUNC_2(FUNC_0(), VAR_0, 0, &VAR_9, 1, &VAR_14, 1, 0);
 }
}
