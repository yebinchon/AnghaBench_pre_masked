
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_6__* exec_symbol_info; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_8__ {scalar_t__ d; TYPE_1__ const* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_t ;
struct TYPE_9__ {int* inputs; int input_size; int* outputs; int output_size; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_10__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,scalar_t__) ;

void FUNC_2(const ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1, const int** const VAR_2, int* const VAR_3, const int** const VAR_4, int* const VAR_5)
{
 FUNC_0(VAR_0 == VAR_1.graph);
 FUNC_0(VAR_1.d < VAR_0->exec_symbol_info->rnum);
 const ccv_nnc_graph_exec_symbol_info_t* const VAR_6 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_0->exec_symbol_info, VAR_1.d);
 if (VAR_2)
  *VAR_2 = VAR_6->inputs;
 if (VAR_3)
  *VAR_3 = VAR_6->input_size;
 if (VAR_4)
  *VAR_4 = VAR_6->outputs;
 if (VAR_5)
  *VAR_5 = VAR_6->output_size;
}
