
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_view_t ;
typedef TYPE_1__* ccv_nnc_tensor_variable_t ;
struct TYPE_6__ {int info; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_dynamic_graph_t ;
struct TYPE_5__ {int * tensor_view; int info; int alias_ref; } ;


 int FUNC_0 (int) ;

void FUNC_1(ccv_nnc_dynamic_graph_t* const VAR_0, const ccv_nnc_tensor_variable_t VAR_1, ccv_nnc_tensor_t* const VAR_2)
{
 FUNC_0(!VAR_1->tensor_view);
 FUNC_0(!VAR_1->alias_ref);
 VAR_1->info = VAR_2->info;
 VAR_1->tensor_view = (ccv_nnc_tensor_view_t*)((uintptr_t)VAR_2 | 1);
}
