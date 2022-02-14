
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* context; int func; } ;
struct TYPE_6__ {TYPE_1__ graph_exec_symbol_new; } ;
struct TYPE_7__ {TYPE_2__ hooks; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_exec_symbol_new_hook_f ;



void* FUNC_0(ccv_nnc_symbolic_graph_t* const VAR_0, ccv_nnc_graph_exec_symbol_new_hook_f VAR_1, void* VAR_2)
{
 void* const VAR_3 = VAR_0->hooks.graph_exec_symbol_new.context;
 VAR_0->hooks.graph_exec_symbol_new.func = VAR_1;
 VAR_0->hooks.graph_exec_symbol_new.context = VAR_2;
 return VAR_3;
}
