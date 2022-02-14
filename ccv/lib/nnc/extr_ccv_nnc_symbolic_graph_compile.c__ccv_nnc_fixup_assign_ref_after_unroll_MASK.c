
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int assign_ref; int r_assign_ref; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
typedef int ccv_nnc_tensor_block_t ;
struct TYPE_8__ {TYPE_1__* tensor_symbol_info; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_6__ {int rnum; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_symbolic_graph_t* const VAR_0, const int VAR_1, const ccv_nnc_tensor_block_t* const VAR_2, const int* const VAR_3, ccv_nnc_tensor_symbol_info_t* const VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0->tensor_symbol_info->rnum; VAR_5++)


  if (VAR_4[VAR_5].assign_ref)
  {
   VAR_4[VAR_4[VAR_5].assign_ref - 1].r_assign_ref = 0;
   VAR_4[VAR_5].assign_ref = VAR_3[(VAR_4[VAR_5].assign_ref - 1) * VAR_1 + VAR_1 - 1] + 1;
   FUNC_0(VAR_4[VAR_5].assign_ref);
   VAR_4[VAR_4[VAR_5].assign_ref - 1].r_assign_ref = VAR_5 + 1;
  }
}
