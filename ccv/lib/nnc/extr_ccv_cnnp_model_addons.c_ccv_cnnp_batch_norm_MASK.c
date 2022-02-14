
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_9__ {float momentum; float epsilon; } ;
struct TYPE_10__ {TYPE_3__ bnorm; } ;
struct TYPE_8__ {scalar_t__ graph; void* d; } ;
struct TYPE_7__ {scalar_t__ graph; void* d; } ;
struct TYPE_12__ {int input_size; int output_size; int * outputs; int * isa; } ;
struct TYPE_11__ {TYPE_4__ params; TYPE_2__ bias; TYPE_1__ scale; TYPE_6__ super; int output; } ;
typedef TYPE_5__ ccv_cnnp_model_batch_norm_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,char const* const) ;

ccv_cnnp_model_t* FUNC_2(const float VAR_2, const float VAR_3, const char* const VAR_4)
{
 ccv_cnnp_model_batch_norm_t* const VAR_5 = (ccv_cnnp_model_batch_norm_t*)FUNC_0(1, sizeof(ccv_cnnp_model_batch_norm_t));
 VAR_5->super.isa = &VAR_1;
 VAR_5->super.input_size = 1;
 VAR_5->super.outputs = &VAR_5->output;
 VAR_5->super.output_size = 1;
 FUNC_1(&VAR_5->super, VAR_4);
 VAR_5->scale.d = VAR_0;
 VAR_5->scale.graph = 0;
 VAR_5->bias.d = VAR_0;
 VAR_5->bias.graph = 0;
 VAR_5->params.bnorm.momentum = VAR_2;
 VAR_5->params.bnorm.epsilon = VAR_3;
 return (ccv_cnnp_model_t*)VAR_5;
}
