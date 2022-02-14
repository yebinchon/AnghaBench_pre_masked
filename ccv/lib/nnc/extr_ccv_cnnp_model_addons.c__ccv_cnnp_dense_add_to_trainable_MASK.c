
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_5__ {scalar_t__ graph; } ;
struct TYPE_4__ {TYPE_2__ scale; TYPE_2__ bias; TYPE_2__ weights; } ;
typedef TYPE_1__ ccv_cnnp_model_dense_t ;
typedef int (* ccv_cnnp_add_to_array_f ) (void* const,TYPE_2__) ;



__attribute__((used)) static void FUNC_0(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_add_to_array_f VAR_1, void* const VAR_2)
{
 ccv_cnnp_model_dense_t* const VAR_3 = (ccv_cnnp_model_dense_t*)VAR_0;
 VAR_1(VAR_2, VAR_3->weights);
 if (VAR_3->bias.graph)
  VAR_1(VAR_2, VAR_3->bias);
 if (VAR_3->scale.graph)
  VAR_1(VAR_2, VAR_3->scale);
}
