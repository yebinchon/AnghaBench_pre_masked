
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_cnnp_state_initializer_f ;
typedef int ccv_cnnp_model_t ;
struct TYPE_6__ {int input_size; TYPE_2__* inputs; int * input_symbols; } ;
typedef TYPE_3__ ccv_cnnp_model_cmd_exec_t ;
struct TYPE_4__ {int context; int (* init ) (int ,int const,void* const,int ) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ init_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const,void* const,int ) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_2, ccv_nnc_symbolic_graph_t* const VAR_3, const ccv_cnnp_state_initializer_f VAR_4, void* const VAR_5)
{
 ccv_cnnp_model_cmd_exec_t* const VAR_6 = (ccv_cnnp_model_cmd_exec_t*)VAR_2;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_6->input_size; VAR_7++)
  if (VAR_6->inputs[VAR_7].type == VAR_0 || VAR_6->inputs[VAR_7].type == VAR_1)
   VAR_6->inputs[VAR_7].init_state.init(VAR_6->input_symbols[VAR_7], VAR_4, VAR_5, VAR_6->inputs[VAR_7].init_state.context);
}
