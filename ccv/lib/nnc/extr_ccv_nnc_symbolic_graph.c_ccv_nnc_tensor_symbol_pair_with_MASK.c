
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ d; TYPE_3__* graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_9__ {scalar_t__ pair_ref; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_10__ {TYPE_7__* tensor_symbol_info; struct TYPE_10__* pair; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_11__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,scalar_t__) ;

void FUNC_2(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_symbol_t VAR_1, const ccv_nnc_tensor_symbol_t VAR_2)
{
 FUNC_0(VAR_1.graph == VAR_0);
 FUNC_0(VAR_1.d >= 0);
 FUNC_0(VAR_1.d < VAR_0->tensor_symbol_info->rnum);
 FUNC_0(VAR_2.graph == VAR_0->pair);
 FUNC_0(VAR_2.d >= 0);
 FUNC_0(VAR_2.d < VAR_0->pair->tensor_symbol_info->rnum);
 ccv_nnc_tensor_symbol_info_t* const VAR_3 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, VAR_1.d);
 VAR_3->pair_ref = VAR_2.d + 1;
}
