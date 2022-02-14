
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ccv_nnc_tensor_variable_s {int dummy; } ;
typedef TYPE_1__* ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_param_t ;
struct TYPE_11__ {int reuse_var; TYPE_6__* vars; } ;
typedef TYPE_2__ ccv_nnc_dynamic_graph_t ;
struct TYPE_12__ {int const rnum; } ;
struct TYPE_10__ {int alias_ref; int index; int inc; int ofs; scalar_t__ tensor_view; int symbol; int info; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int const) ;
 int FUNC_3 (TYPE_6__*,TYPE_1__**) ;
 int FUNC_4 (int ,int const*,int) ;

ccv_nnc_tensor_variable_t FUNC_5(ccv_nnc_dynamic_graph_t* const VAR_2, const ccv_nnc_tensor_variable_t VAR_3, const int VAR_4[VAR_0], const int VAR_5[VAR_0], const ccv_nnc_tensor_param_t VAR_6)
{
 FUNC_0(!VAR_3->alias_ref);
 ccv_nnc_tensor_variable_t VAR_7 = FUNC_1(sizeof(struct ccv_nnc_tensor_variable_s));
 VAR_7->type = VAR_3->type;
 VAR_7->alias_ref = VAR_3->index + 1;
 VAR_7->info = VAR_6;
 VAR_7->symbol = VAR_1;
 VAR_7->tensor_view = 0;
 FUNC_4(VAR_7->ofs, VAR_4, sizeof(int) * VAR_0);
 FUNC_4(VAR_7->inc, VAR_5, sizeof(int) * VAR_0);
 if (VAR_2->reuse_var >= 0)
 {
  const int VAR_8 = VAR_2->reuse_var;
  FUNC_0(VAR_8 < VAR_2->vars->rnum);
  VAR_7->index = VAR_8;
  *(ccv_nnc_tensor_variable_t*)FUNC_2(VAR_2->vars, VAR_8) = VAR_7;
  int VAR_9;
  VAR_2->reuse_var = -1;
  for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_2->vars->rnum && VAR_2->reuse_var < 0; VAR_9++)
   if (*(ccv_nnc_tensor_variable_t*)FUNC_2(VAR_2->vars, VAR_9) == 0)
    VAR_2->reuse_var = VAR_9;
 } else {
  VAR_7->index = VAR_2->vars->rnum;
  FUNC_3(VAR_2->vars, &VAR_7);
 }
 return VAR_7;
}
