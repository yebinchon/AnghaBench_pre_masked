
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {int input_size; int output_size; int * outputs; int * isa; } ;
struct TYPE_3__ {TYPE_2__ super; int output; } ;
typedef TYPE_1__ ccv_cnnp_model_relu_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,char const* const) ;
 int VAR_0 ;

ccv_cnnp_model_t* FUNC_2(const char* const VAR_1)
{
 ccv_cnnp_model_relu_t* const VAR_2 = (ccv_cnnp_model_relu_t*)FUNC_0(1, sizeof(ccv_cnnp_model_relu_t));
 VAR_2->super.isa = &VAR_0;
 VAR_2->super.input_size = 1;
 VAR_2->super.outputs = &VAR_2->output;
 VAR_2->super.output_size = 1;
 FUNC_1(&VAR_2->super, VAR_1);
 return (ccv_cnnp_model_t*)VAR_2;
}
