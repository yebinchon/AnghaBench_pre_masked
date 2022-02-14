
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_7__ {TYPE_5__* exec_symbol_info; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_8__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_t ;
typedef int ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_9__ {scalar_t__ rnum; } ;


 int FUNC_0 (TYPE_1__* const,int * const,int const* const,int const,int const* const,int const) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,scalar_t__) ;

void FUNC_3(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_graph_exec_symbol_t VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, const ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 FUNC_1(VAR_1.graph == VAR_0);
 FUNC_1(VAR_1.d >= 0);
 FUNC_1(VAR_1.d < VAR_0->exec_symbol_info->rnum);
 ccv_nnc_graph_exec_symbol_info_t* const VAR_6 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_2(VAR_0->exec_symbol_info, VAR_1.d);
 FUNC_0(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
