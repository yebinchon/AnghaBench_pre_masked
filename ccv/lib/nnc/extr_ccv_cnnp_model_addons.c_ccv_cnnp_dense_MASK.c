
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_cnnp_param_t ;
typedef int ccv_cnnp_model_t ;
struct TYPE_6__ {scalar_t__ graph; void* d; } ;
struct TYPE_5__ {scalar_t__ graph; void* d; } ;
struct TYPE_8__ {int input_size; int output_size; int * outputs; int * isa; } ;
struct TYPE_7__ {int count; int params; TYPE_2__ bias; TYPE_1__ weights; TYPE_4__ super; int output; } ;
typedef TYPE_3__ ccv_cnnp_model_dense_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,char const* const) ;

ccv_cnnp_model_t* FUNC_2(const int VAR_2, const ccv_cnnp_param_t VAR_3, const char* const VAR_4)
{
 ccv_cnnp_model_dense_t* const VAR_5 = (ccv_cnnp_model_dense_t*)FUNC_0(1, sizeof(ccv_cnnp_model_dense_t));
 VAR_5->super.isa = &VAR_1;
 VAR_5->super.input_size = 1;
 VAR_5->super.outputs = &VAR_5->output;
 VAR_5->super.output_size = 1;
 FUNC_1(&VAR_5->super, VAR_4);
 VAR_5->weights.d = VAR_0;
 VAR_5->weights.graph = 0;
 VAR_5->bias.d = VAR_0;
 VAR_5->bias.graph = 0;
 VAR_5->count = VAR_2;
 VAR_5->params = VAR_3;
 return (ccv_cnnp_model_t*)VAR_5;
}
