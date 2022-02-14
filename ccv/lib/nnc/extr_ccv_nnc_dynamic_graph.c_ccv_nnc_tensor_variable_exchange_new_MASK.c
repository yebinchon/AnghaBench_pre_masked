
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ d; } ;
struct ccv_nnc_tensor_variable_s {scalar_t__ alias_ref; int index; TYPE_1__ symbol; int info; int inc; int ofs; } ;
typedef struct ccv_nnc_tensor_variable_s* ccv_nnc_tensor_variable_t ;
struct TYPE_8__ {int index; } ;
typedef TYPE_2__ ccv_nnc_tensor_variable_graph_bind_t ;
struct TYPE_9__ {int binds; int vars; } ;
typedef TYPE_3__ ccv_nnc_dynamic_graph_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 struct ccv_nnc_tensor_variable_s* FUNC_1 (TYPE_3__* const,struct ccv_nnc_tensor_variable_s*,int ,int ,int ) ;
 struct ccv_nnc_tensor_variable_s* FUNC_2 (TYPE_3__* const,int ) ;

ccv_nnc_tensor_variable_t FUNC_3(ccv_nnc_dynamic_graph_t* const VAR_1, ccv_nnc_tensor_variable_t VAR_2)
{
 struct ccv_nnc_tensor_variable_s VAR_3 = *VAR_2;
 ccv_nnc_tensor_variable_t VAR_4;

 if (VAR_3.alias_ref)
  VAR_4 = FUNC_1(VAR_1, *(ccv_nnc_tensor_variable_t*)FUNC_0(VAR_1->vars, VAR_3.alias_ref - 1), VAR_3.ofs, VAR_3.inc, VAR_3.info);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_3.info);
 *VAR_2 = *VAR_4;
 *VAR_4 = VAR_3;

 const int VAR_5 = VAR_4->index;
 VAR_4->index = VAR_2->index;
 if (VAR_4->symbol.d != VAR_0)
 {
  ccv_nnc_tensor_variable_graph_bind_t* const VAR_6 = (ccv_nnc_tensor_variable_graph_bind_t*)FUNC_0(VAR_1->binds, VAR_4->symbol.d);
  VAR_6->index = VAR_4->index;
 }
 VAR_2->index = VAR_5;
 return VAR_4;
}
