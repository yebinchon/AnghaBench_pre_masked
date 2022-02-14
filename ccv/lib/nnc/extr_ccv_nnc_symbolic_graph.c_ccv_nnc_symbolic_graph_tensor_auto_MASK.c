
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_info_t ;
struct TYPE_6__ {TYPE_5__* exec_symbol_info; TYPE_5__* tensor_symbol_info; TYPE_5__* destinations; TYPE_5__* sources; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_graph_visit_t ;
typedef int const ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_7__ {int const rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int * const) ;
 int * FUNC_3 (TYPE_1__* const,int *,int const,int const* const,int const,int const* const,int const,int ) ;
 int FUNC_4 (TYPE_1__* const,int * const,int const* const,int const,int const* const,int const,int ,int ,int *,int *) ;

void FUNC_5(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t* const VAR_1, const int VAR_2, const ccv_nnc_graph_exec_symbol_t* const VAR_3, const int VAR_4)
{
 FUNC_0((VAR_1 && VAR_2) || (!VAR_1 && !VAR_2));
 const ccv_nnc_graph_exec_symbol_t* const VAR_5 = VAR_1 ? VAR_1 : (ccv_nnc_graph_exec_symbol_t*)FUNC_1(VAR_0->sources, 0);
 const int VAR_6 = VAR_2 ? VAR_2 : VAR_0->sources->rnum;
 FUNC_0((VAR_3 && VAR_4) || (!VAR_3 && !VAR_4));
 const ccv_nnc_graph_exec_symbol_t* const VAR_7 = VAR_3 ? VAR_3 : (ccv_nnc_graph_exec_symbol_t*)FUNC_1(VAR_0->destinations, 0);
 const int VAR_8 = VAR_4 ? VAR_4 : VAR_0->destinations->rnum;
 ccv_nnc_graph_visit_t* const VAR_9 = FUNC_3(VAR_0, (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_0->exec_symbol_info, 0), VAR_0->exec_symbol_info->rnum, VAR_5, VAR_6, VAR_7, VAR_8, 0);
 FUNC_4(VAR_0, VAR_9, VAR_5, VAR_6, VAR_7, VAR_8, 0, 0, (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, 0), (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_0->exec_symbol_info, 0));
 FUNC_2(VAR_9);
}
