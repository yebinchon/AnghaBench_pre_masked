
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int d; TYPE_4__* const graph; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_20__ {int alias_ref; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_21__ {TYPE_8__* tensor_symbol_info; TYPE_1__* exec_symbol_info; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_symbolic_graph_backward_prep_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;
struct TYPE_22__ {int rnum; } ;
struct TYPE_18__ {int rnum; } ;


 int FUNC_0 (int *,TYPE_2__ const* const,int const,TYPE_2__ const* const,int const,TYPE_4__* const,TYPE_4__* const) ;
 int FUNC_1 (TYPE_4__* const,int const* const,int const,int const* const,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__ const* const,int const,TYPE_2__ const* const,int const,int ,int const* const,int const,int const* const,int const) ;
 int FUNC_4 (int *,TYPE_2__ const* const,int const,TYPE_2__ const* const,int const,int const* const,int const,int const* const,int const) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ) ;

void FUNC_7(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_symbol_t* const VAR_1, const int VAR_2, const ccv_nnc_tensor_symbol_t* const VAR_3, const int VAR_4, const ccv_nnc_graph_exec_symbol_t* const VAR_5, const int VAR_6, const ccv_nnc_graph_exec_symbol_t* const VAR_7, const int VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  FUNC_5(VAR_1[VAR_9].graph == VAR_0);
  FUNC_5(!((ccv_nnc_tensor_symbol_info_t*)FUNC_6(VAR_0->tensor_symbol_info, VAR_1[VAR_9].d))->alias_ref);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 {
  FUNC_5(VAR_3[VAR_9].graph == VAR_0);
  FUNC_5(!((ccv_nnc_tensor_symbol_info_t*)FUNC_6(VAR_0->tensor_symbol_info, VAR_3[VAR_9].d))->alias_ref);
 }
 const int VAR_10 = VAR_0->exec_symbol_info->rnum;
 const int VAR_11 = VAR_0->tensor_symbol_info->rnum;
 FUNC_5(VAR_10 > 0);
 FUNC_5(VAR_11 > 0);
 ccv_nnc_symbolic_graph_backward_prep_t VAR_12 = FUNC_1(VAR_0, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_4(&VAR_12, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_3(&VAR_12, VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_0(&VAR_12, VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, VAR_0);
 FUNC_2(VAR_12);
}
