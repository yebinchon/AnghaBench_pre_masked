
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_6__ {int input_size; TYPE_2__* inputs; } ;
typedef TYPE_3__ ccv_cnnp_model_cmd_exec_t ;
struct TYPE_4__ {void* context; int (* deinit ) (void* const) ;scalar_t__ init; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ init_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void* const) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_2)
{
 ccv_cnnp_model_cmd_exec_t* const VAR_3 = (ccv_cnnp_model_cmd_exec_t*)VAR_2;
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_3->input_size; VAR_4++)
  if ((VAR_3->inputs[VAR_4].type == VAR_0 || VAR_3->inputs[VAR_4].type == VAR_1) &&
   VAR_3->inputs[VAR_4].init_state.context)
  {
   void* const VAR_6 = VAR_3->inputs[VAR_4].init_state.context;
   if (VAR_3->inputs[VAR_4].init_state.deinit)
    VAR_3->inputs[VAR_4].init_state.deinit(VAR_6);
   VAR_3->inputs[VAR_4].init_state.init = 0;
   VAR_3->inputs[VAR_4].init_state.deinit = 0;
   VAR_3->inputs[VAR_4].init_state.context = 0;
   for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_3->input_size; VAR_5++)
    if (VAR_3->inputs[VAR_5].init_state.context == VAR_6)
    {
     VAR_3->inputs[VAR_5].init_state.init = 0;
     VAR_3->inputs[VAR_5].init_state.deinit = 0;
     VAR_3->inputs[VAR_5].init_state.context = 0;
    }
  }
}
