
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_tensor_variable_t ;
typedef int ccv_nnc_tensor_variable_graph_bind_t ;
struct TYPE_4__ {int reuse_var; scalar_t__ ws; int stateful_execs; int tape; void* binds; void* vars; scalar_t__ no_grad; } ;
typedef TYPE_1__ ccv_nnc_dynamic_graph_t ;


 TYPE_1__* FUNC_0 (int) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

ccv_nnc_dynamic_graph_t* FUNC_4(void)
{
 ccv_nnc_dynamic_graph_t* VAR_1 = FUNC_0(sizeof(ccv_nnc_dynamic_graph_t));
 VAR_1->no_grad = 0;
 VAR_1->reuse_var = -1;
 VAR_1->vars = FUNC_1(sizeof(ccv_nnc_tensor_variable_t), 1, 0);
 VAR_1->binds = FUNC_1(sizeof(ccv_nnc_tensor_variable_graph_bind_t), 1, 0);
 VAR_1->tape = FUNC_2();
 VAR_1->stateful_execs = FUNC_3(VAR_0);
 VAR_1->ws = 0;
 return VAR_1;
}
