
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int exec_symbol_info; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_t ;
struct TYPE_9__ {int d; TYPE_2__* const graph; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_t ;
struct TYPE_7__ {void const* data; int expr; } ;
struct TYPE_10__ {TYPE_1__ case_of; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_nnc_graph_case_of_f ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1, ccv_nnc_graph_case_of_f VAR_2, const void* VAR_3)
{
 FUNC_0(VAR_1.graph == VAR_0);
 ccv_nnc_graph_exec_symbol_info_t* const VAR_4 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_0->exec_symbol_info, VAR_1.d);
 VAR_4->case_of.expr = VAR_2;
 VAR_4->case_of.data = VAR_3;
}
