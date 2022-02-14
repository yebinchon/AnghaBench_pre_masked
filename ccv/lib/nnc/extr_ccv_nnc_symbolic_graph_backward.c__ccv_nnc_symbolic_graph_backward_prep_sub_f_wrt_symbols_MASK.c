
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_17__ {int const d; TYPE_3__ const* const graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_18__ {int assign_ref; TYPE_5__ const* const s_ref; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_19__ {TYPE_5__ const* const tensor_symbol_info; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_20__ {int input_size; int output_size; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_21__ {int const rnum; } ;
typedef TYPE_5__ const ccv_array_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_4__ const* const,int**,int**,int*,int*) ;
 int FUNC_1 (TYPE_5__ const* const) ;
 scalar_t__ FUNC_2 (TYPE_5__ const* const,int const) ;
 int FUNC_3 (TYPE_5__ const* const,TYPE_1__*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(const ccv_nnc_graph_exec_symbol_info_t* const VAR_1, const ccv_nnc_symbolic_graph_t* const VAR_2, const int VAR_3, const ccv_nnc_tensor_symbol_info_t* const VAR_4, const uint64_t* const VAR_5, const uint64_t* const VAR_6, ccv_array_t* const VAR_7, ccv_array_t* const VAR_8)
{
 int VAR_9, VAR_10;
 FUNC_1(VAR_8);
 int VAR_11[FUNC_4(1, VAR_1->output_size)];
 int VAR_12[FUNC_4(1, VAR_1->input_size)];
 int* VAR_13 = VAR_11;
 int* VAR_14 = VAR_12;
 int VAR_15, VAR_16;
 FUNC_0(VAR_1, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
 for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9++)
  if (VAR_6[VAR_9 >> 6] & ((uint64_t)1 << (VAR_9 & 63)))
  {
   const int VAR_17 = VAR_14[VAR_9];
   const ccv_array_t* const VAR_18 = VAR_4[VAR_17].s_ref;
   const int VAR_19 = VAR_18 && VAR_18->rnum > VAR_3 ? *(int*)FUNC_2(VAR_18, VAR_3) - 1 : -1;
   if (VAR_19 >= 0)
   {
    ccv_nnc_tensor_symbol_t VAR_20 = {
     .d = VAR_19,
     .graph = VAR_2,
    };
    FUNC_3(VAR_8, &VAR_20);
   } else
    FUNC_3(VAR_8, &VAR_0);
  }
 FUNC_1(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
  if (VAR_5[VAR_9 >> 6] & ((uint64_t)1 << (VAR_9 & 63)))
  {
   const int VAR_21 = VAR_13[VAR_9];
   ccv_nnc_tensor_symbol_t VAR_22 = {
    .d = *(int*)FUNC_2(VAR_4[VAR_21].s_ref, VAR_3) - 1,
    .graph = VAR_2,
   };
   FUNC_3(VAR_7, &VAR_22);
  }





 for (VAR_9 = 0; VAR_9 < VAR_2->tensor_symbol_info->rnum; VAR_9++)
 {
  const ccv_nnc_tensor_symbol_info_t* const VAR_23 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_2->tensor_symbol_info, VAR_9);
  if (VAR_23->assign_ref)
  {
   const int VAR_24 = VAR_23->assign_ref - 1;

   int VAR_25 = 0;
   for (VAR_10 = 0; !VAR_25 && VAR_10 < VAR_8->rnum; VAR_10++)
    VAR_25 = (((ccv_nnc_tensor_symbol_t*)FUNC_2(VAR_8, VAR_10))->d == VAR_9);
   if (!VAR_25)
   {
    ccv_nnc_tensor_symbol_t VAR_26 = {
     .d = VAR_9,
     .graph = VAR_2,
    };
    FUNC_3(VAR_8, &VAR_26);
   }
   VAR_25 = 0;
   for (VAR_10 = 0; !VAR_25 && VAR_10 < VAR_7->rnum; VAR_10++)
    VAR_25 = (((ccv_nnc_tensor_symbol_t*)FUNC_2(VAR_7, VAR_10))->d == VAR_24);
   if (!VAR_25)
   {
    ccv_nnc_tensor_symbol_t VAR_27 = {
     .d = VAR_24,
     .graph = VAR_2,
    };
    FUNC_3(VAR_7, &VAR_27);
   }
  }
 }
}
