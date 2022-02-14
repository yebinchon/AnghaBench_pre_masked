
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_6__* exec_symbol_info; TYPE_6__* destinations; TYPE_6__* sources; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_8__ {int idx; int visit; TYPE_1__* graph; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_iter_t ;
typedef int const ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_9__ {int const rnum; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_1__ const* const,int *,int const,int const* const,int const,int const* const,int const,int ) ;

ccv_nnc_symbolic_graph_iter_t* FUNC_3(const ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t* const VAR_1, const int VAR_2, const ccv_nnc_graph_exec_symbol_t* const VAR_3, const int VAR_4)
{
 const ccv_nnc_graph_exec_symbol_t* const VAR_5 = VAR_1 ? VAR_1 : (ccv_nnc_graph_exec_symbol_t*)FUNC_1(VAR_0->sources, 0);
 const int VAR_6 = VAR_2 ? VAR_2 : VAR_0->sources->rnum;
 const ccv_nnc_graph_exec_symbol_t* const VAR_7 = VAR_3 ? VAR_3 : (ccv_nnc_graph_exec_symbol_t*)FUNC_1(VAR_0->destinations, 0);
 const int VAR_8 = VAR_4 ? VAR_4 : VAR_0->destinations->rnum;
 ccv_nnc_symbolic_graph_iter_t* const VAR_9 = (ccv_nnc_symbolic_graph_iter_t*)FUNC_0(1, sizeof(ccv_nnc_symbolic_graph_iter_t));
 VAR_9->idx = -1;
 VAR_9->graph = VAR_0;
 VAR_9->visit = FUNC_2(VAR_0, (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_0->exec_symbol_info, 0), VAR_0->exec_symbol_info->rnum, VAR_5, VAR_6, VAR_7, VAR_8, 0);
 return VAR_9;
}
