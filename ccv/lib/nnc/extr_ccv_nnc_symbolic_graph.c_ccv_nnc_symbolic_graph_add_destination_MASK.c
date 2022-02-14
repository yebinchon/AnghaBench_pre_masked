
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ destinations; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_7__ {TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (scalar_t__,TYPE_2__ const*) ;

void FUNC_3(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1)
{
 if (!VAR_0->destinations)
  VAR_0->destinations = FUNC_1(sizeof(ccv_nnc_graph_exec_symbol_t), 0, 0);
 FUNC_0(VAR_1.graph == VAR_0);
 FUNC_2(VAR_0->destinations, &VAR_1);
}
