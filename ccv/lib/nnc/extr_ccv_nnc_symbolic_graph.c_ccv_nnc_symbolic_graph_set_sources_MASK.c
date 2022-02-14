
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sources; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_1__* const,int const) ;

void FUNC_3(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t* const VAR_1, const int VAR_2)
{
 if (!VAR_0->sources)
  VAR_0->sources = FUNC_1(sizeof(ccv_nnc_graph_exec_symbol_t), 0, 0);
 else
  FUNC_0(VAR_0->sources);
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_2(VAR_0, VAR_1[VAR_3]);
}
