
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ccv_nnc_tensor_symbol_info_t ;
struct TYPE_10__ {TYPE_6__* exec_symbol_info; TYPE_1__* tensor_symbol_info; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_t ;
struct TYPE_11__ {int tensor_symbol_info_size; int exec_symbol_info_size; int* output_execs; scalar_t__ exec_dead; scalar_t__ tensor_dead; int * exec_symbol_info; int * tensor_symbol_info; int visit; TYPE_2__* graph; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_simplify_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_12__ {int rnum; } ;
struct TYPE_9__ {int rnum; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_2__* const,int *,int,int const* const,int const,int const* const,int const,int ) ;
 int FUNC_4 (TYPE_2__* const,int ,int const* const,int const,int const* const,int const,int ,int ,int *,int *) ;

__attribute__((used)) static ccv_nnc_symbolic_graph_simplify_t* FUNC_5(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t* const VAR_1, const int VAR_2, const ccv_nnc_graph_exec_symbol_t* const VAR_3, const int VAR_4)
{
 ccv_nnc_symbolic_graph_simplify_t* const VAR_5 = (ccv_nnc_symbolic_graph_simplify_t*)FUNC_1(sizeof(ccv_nnc_symbolic_graph_simplify_t));
 VAR_5->graph = VAR_0;
 VAR_5->visit = FUNC_3(VAR_0, (ccv_nnc_graph_exec_symbol_info_t*)FUNC_2(VAR_0->exec_symbol_info, 0), VAR_0->exec_symbol_info->rnum, VAR_1, VAR_2, VAR_3, VAR_4, 0);
 VAR_5->tensor_symbol_info = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(sizeof(ccv_nnc_tensor_symbol_info_t) * VAR_0->tensor_symbol_info->rnum);
 VAR_5->exec_symbol_info = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(sizeof(ccv_nnc_graph_exec_symbol_info_t) * VAR_0->exec_symbol_info->rnum);
 FUNC_4(VAR_0, VAR_5->visit, VAR_1, VAR_2, VAR_3, VAR_4, 0, 0, VAR_5->tensor_symbol_info, VAR_5->exec_symbol_info);
 VAR_5->tensor_symbol_info_size = VAR_0->tensor_symbol_info->rnum;
 VAR_5->exec_symbol_info_size = VAR_0->exec_symbol_info->rnum;
 VAR_5->exec_dead = FUNC_0(((VAR_5->exec_symbol_info_size + 31) >> 5) + ((VAR_5->tensor_symbol_info_size + 31) >> 5), sizeof(uint32_t));
 VAR_5->tensor_dead = VAR_5->exec_dead + ((VAR_5->exec_symbol_info_size + 31) >> 5);
 VAR_5->output_execs = (int*)FUNC_1(sizeof(int) * VAR_5->tensor_symbol_info_size);
 return VAR_5;
}
