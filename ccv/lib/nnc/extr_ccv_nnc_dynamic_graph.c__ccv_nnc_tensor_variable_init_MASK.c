
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_param_t ;
struct TYPE_9__ {int reuse_var; TYPE_3__* vars; } ;
typedef TYPE_2__ ccv_nnc_dynamic_graph_t ;
struct TYPE_10__ {int const rnum; } ;
struct TYPE_8__ {int index; scalar_t__ tensor_view; int symbol; int info; scalar_t__ alias_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__**) ;

__attribute__((used)) inline static void FUNC_3(ccv_nnc_dynamic_graph_t* const VAR_1, ccv_nnc_tensor_variable_t VAR_2, const ccv_nnc_tensor_param_t VAR_3)
{
 VAR_2->alias_ref = 0;
 VAR_2->info = VAR_3;
 VAR_2->symbol = VAR_0;
 VAR_2->tensor_view = 0;
 if (VAR_1->reuse_var >= 0)
 {
  const int VAR_4 = VAR_1->reuse_var;
  FUNC_0(VAR_4 < VAR_1->vars->rnum);
  VAR_2->index = VAR_4;
  *(ccv_nnc_tensor_variable_t*)FUNC_1(VAR_1->vars, VAR_4) = VAR_2;
  int VAR_5;
  VAR_1->reuse_var = -1;
  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_1->vars->rnum && VAR_1->reuse_var < 0; VAR_5++)
   if (*(ccv_nnc_tensor_variable_t*)FUNC_1(VAR_1->vars, VAR_5) == 0)
    VAR_1->reuse_var = VAR_5;
 } else {
  VAR_2->index = VAR_1->vars->rnum;
  FUNC_2(VAR_1->vars, &VAR_2);
 }
}
