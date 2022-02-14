
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {int input_size; int * input_symbols; TYPE_1__* inputs; } ;
typedef TYPE_2__ ccv_cnnp_model_cmd_exec_t ;
typedef int (* ccv_cnnp_add_to_array_f ) (void* const,int ) ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(ccv_cnnp_model_t* const VAR_1, const ccv_cnnp_add_to_array_f VAR_2, void* const VAR_3)
{
 ccv_cnnp_model_cmd_exec_t* const VAR_4 = (ccv_cnnp_model_cmd_exec_t*)VAR_1;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->input_size; VAR_5++)
  if (VAR_4->inputs[VAR_5].type == VAR_0)
   VAR_2(VAR_3, VAR_4->input_symbols[VAR_5]);
}
