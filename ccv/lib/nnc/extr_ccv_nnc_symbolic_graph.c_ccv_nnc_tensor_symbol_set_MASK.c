
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ d; TYPE_3__* const graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_8__ {scalar_t__ assign_ref; int info; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
typedef int ccv_nnc_tensor_param_t ;
struct TYPE_9__ {TYPE_6__* tensor_symbol_info; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_10__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,scalar_t__) ;

int FUNC_2(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_symbol_t VAR_1, const ccv_nnc_tensor_param_t VAR_2)
{
 FUNC_0(VAR_0 == VAR_1.graph);
 FUNC_0(VAR_1.d < VAR_0->tensor_symbol_info->rnum);
 ccv_nnc_tensor_symbol_info_t* const VAR_3 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, VAR_1.d);
 VAR_3->info = VAR_2;

 if (VAR_3->assign_ref)
 {
  ccv_nnc_tensor_symbol_info_t* const VAR_4 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, VAR_3->assign_ref - 1);
  VAR_4->info = VAR_2;
 }
 return 0;
}
