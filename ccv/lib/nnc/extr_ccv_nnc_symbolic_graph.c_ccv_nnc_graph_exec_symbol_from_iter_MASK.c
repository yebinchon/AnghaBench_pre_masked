
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t idx; TYPE_3__* visit; TYPE_1__* graph; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_iter_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_11__ {int flags; char* name; int hint; int cmd; } ;
typedef TYPE_5__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_nnc_cmd_t ;
struct TYPE_9__ {size_t size; TYPE_2__* node; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {int exec_symbol_info; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1(ccv_nnc_symbolic_graph_iter_t* const VAR_0, ccv_nnc_cmd_t* const VAR_1, ccv_nnc_hint_t* const VAR_2, int* const VAR_3, char** const VAR_4)
{
 if (VAR_0->idx >= VAR_0->visit->size)
  return;
 const ccv_nnc_graph_exec_symbol_info_t* const VAR_5 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_0(VAR_0->graph->exec_symbol_info, VAR_0->visit->node[VAR_0->idx].index);
 if (VAR_1)
  *VAR_1 = VAR_5->cmd;
 if (VAR_2)
  *VAR_2 = VAR_5->hint;
 if (VAR_3)
  *VAR_3 = VAR_5->flags;
 if (VAR_4)
  *VAR_4 = VAR_5->name;
}
