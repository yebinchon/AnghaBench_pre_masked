
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int input_size; int output_size; int * outputs; int * isa; } ;
struct TYPE_3__ {int* transpose; TYPE_2__ super; int output; } ;
typedef TYPE_1__ ccv_cnnp_model_transpose_t ;
typedef int ccv_cnnp_model_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,char const* const) ;
 int VAR_0 ;

ccv_cnnp_model_t* FUNC_2(const int VAR_1, const int VAR_2, const char* const VAR_3)
{
 ccv_cnnp_model_transpose_t* const VAR_4 = (ccv_cnnp_model_transpose_t*)FUNC_0(1, sizeof(ccv_cnnp_model_transpose_t));
 VAR_4->super.isa = &VAR_0;
 VAR_4->super.input_size = 1;
 VAR_4->super.outputs = &VAR_4->output;
 VAR_4->super.output_size = 1;
 VAR_4->transpose[0] = VAR_1;
 VAR_4->transpose[1] = VAR_2;
 FUNC_1(&VAR_4->super, VAR_3);
 return (ccv_cnnp_model_t*)VAR_4;
}
