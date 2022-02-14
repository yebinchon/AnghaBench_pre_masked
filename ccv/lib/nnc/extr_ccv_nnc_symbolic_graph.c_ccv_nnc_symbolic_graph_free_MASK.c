
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* s_ref; TYPE_4__* const name; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_10__ {TYPE_4__* const exec_symbol_idx; TYPE_4__* const tensor_symbol_idx; } ;
struct TYPE_9__ {TYPE_4__* const tensor_symbol_idx; } ;
struct TYPE_12__ {TYPE_2__ data_parallel; TYPE_1__ backward; TYPE_6__* exec_symbol_info; TYPE_6__* tensor_symbol_info; struct TYPE_12__* const breakpoints; TYPE_6__* destinations; TYPE_6__* sources; TYPE_6__* sub_graphs; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_13__ {int rnum; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__* const) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int) ;

void FUNC_4(ccv_nnc_symbolic_graph_t* const VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->exec_symbol_info->rnum; VAR_1++)
  FUNC_0((ccv_nnc_graph_exec_symbol_info_t*)FUNC_3(VAR_0->exec_symbol_info, VAR_1), 0);
 for (VAR_1 = 0; VAR_1 < VAR_0->tensor_symbol_info->rnum; VAR_1++)
 {
  ccv_nnc_tensor_symbol_info_t* const VAR_2 = (ccv_nnc_tensor_symbol_info_t*)FUNC_3(VAR_0->tensor_symbol_info, VAR_1);
  if (VAR_2->name)
   FUNC_1(VAR_2->name);
  if (VAR_2->s_ref)
   FUNC_2(VAR_2->s_ref);
 }
 if (VAR_0->sub_graphs)
 {
  for (VAR_1 = 0; VAR_1 < VAR_0->sub_graphs->rnum; VAR_1++)
   FUNC_4(*(ccv_nnc_symbolic_graph_t**)FUNC_3(VAR_0->sub_graphs, VAR_1));
  FUNC_2(VAR_0->sub_graphs);
 }
 if (VAR_0->sources)
  FUNC_2(VAR_0->sources);
 if (VAR_0->destinations)
  FUNC_2(VAR_0->destinations);
 if (VAR_0->breakpoints)
  FUNC_1(VAR_0->breakpoints);
 FUNC_2(VAR_0->tensor_symbol_info);
 FUNC_2(VAR_0->exec_symbol_info);
 if (VAR_0->backward.tensor_symbol_idx)
  FUNC_1(VAR_0->backward.tensor_symbol_idx);
 if (VAR_0->data_parallel.tensor_symbol_idx)
  FUNC_1(VAR_0->data_parallel.tensor_symbol_idx);
 if (VAR_0->data_parallel.exec_symbol_idx)
  FUNC_1(VAR_0->data_parallel.exec_symbol_idx);
 FUNC_1(VAR_0);
}
