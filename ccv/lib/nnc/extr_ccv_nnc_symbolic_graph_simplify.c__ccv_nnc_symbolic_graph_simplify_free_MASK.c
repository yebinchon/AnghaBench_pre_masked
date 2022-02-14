
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* const output_execs; struct TYPE_4__* const exec_dead; struct TYPE_4__* const exec_symbol_info; struct TYPE_4__* const tensor_symbol_info; int visit; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_simplify_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ccv_nnc_symbolic_graph_simplify_t* const VAR_0)
{
 FUNC_1(VAR_0->visit);
 FUNC_0(VAR_0->tensor_symbol_info);
 FUNC_0(VAR_0->exec_symbol_info);
 FUNC_0(VAR_0->exec_dead);
 FUNC_0(VAR_0->output_execs);
 FUNC_0(VAR_0);
}
