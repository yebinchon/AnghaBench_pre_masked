
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_10__ {int exec_idx; int breakpoint_size; int * breakpoints; TYPE_1__* p; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_while_f ;
typedef int ccv_nnc_graph_exec_symbol_t ;
struct TYPE_9__ {void* data; int* inputs; int input_size; int expr; } ;
struct TYPE_11__ {TYPE_2__ p_while; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_12__ {int const rnum; } ;
struct TYPE_8__ {TYPE_7__* exec_symbol_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int const) ;
 int FUNC_3 (TYPE_3__* const,int const) ;
 int FUNC_4 (int *,int const* const,int) ;

void FUNC_5(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_while_f VAR_1, const void* const VAR_2, const ccv_nnc_tensor_symbol_t* const VAR_3, const int VAR_4, const ccv_nnc_graph_exec_symbol_t* const VAR_5, const int VAR_6)
{
 const int VAR_7 = VAR_0->exec_idx - 1;
 FUNC_0(VAR_7 >= 0 && VAR_7 < VAR_0->p->exec_symbol_info->rnum);
 ccv_nnc_graph_exec_symbol_info_t* const VAR_8 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_2(VAR_0->p->exec_symbol_info, VAR_7);
 VAR_8->p_while.data = VAR_2;
 VAR_8->p_while.expr = VAR_1;
 int VAR_9;
 if (VAR_4 > 0)
 {
  FUNC_0(VAR_3);
  VAR_8->p_while.inputs = (int*)FUNC_1(sizeof(int) * VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   VAR_8->p_while.inputs[VAR_9] = FUNC_3(VAR_0, VAR_3[VAR_9]);
  VAR_8->p_while.input_size = VAR_4;
 }
 if (VAR_6 > 0)
 {
  FUNC_0(VAR_5);
  VAR_0->breakpoint_size = VAR_6;
  VAR_0->breakpoints = (ccv_nnc_graph_exec_symbol_t*)FUNC_1(sizeof(ccv_nnc_graph_exec_symbol_t) * VAR_6);
  FUNC_4(VAR_0->breakpoints, VAR_5, sizeof(ccv_nnc_graph_exec_symbol_t) * VAR_6);
 }
}
