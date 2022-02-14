
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ d; TYPE_4__* const graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_11__ {int destination; int source; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_map_t ;
struct TYPE_12__ {scalar_t__ assign_ref; scalar_t__ r_assign_ref; int alias_ref; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_13__ {TYPE_9__* tensor_symbol_info; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
struct TYPE_14__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,scalar_t__) ;
 TYPE_1__ FUNC_2 (TYPE_4__* const,int ) ;

void FUNC_3(ccv_nnc_symbolic_graph_t* const VAR_0, const ccv_nnc_tensor_symbol_map_t* const VAR_1, const int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  const ccv_nnc_tensor_symbol_t VAR_4 = FUNC_2(VAR_0, VAR_1[VAR_3].source);
  const ccv_nnc_tensor_symbol_t VAR_5 = FUNC_2(VAR_0, VAR_1[VAR_3].destination);
  FUNC_0(VAR_4.graph == VAR_0);
  FUNC_0(VAR_5.graph == VAR_0);
  FUNC_0(VAR_4.d < VAR_0->tensor_symbol_info->rnum);
  FUNC_0(VAR_5.d < VAR_0->tensor_symbol_info->rnum);
  ccv_nnc_tensor_symbol_info_t* VAR_6 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, VAR_4.d);
  ccv_nnc_tensor_symbol_info_t* VAR_7 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_0->tensor_symbol_info, VAR_5.d);





  FUNC_0(!VAR_7->alias_ref);
  FUNC_0(!VAR_6->alias_ref);
  VAR_7->assign_ref = VAR_4.d + 1;
  VAR_6->r_assign_ref = VAR_5.d + 1;
 }
}
