
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_2__ {scalar_t__ retainables; scalar_t__ zero_inits; } ;
typedef TYPE_1__ ccv_cnnp_model_batch_norm_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_0)
{
 ccv_cnnp_model_batch_norm_t* const VAR_1 = (ccv_cnnp_model_batch_norm_t*)VAR_0;
 if (VAR_1->zero_inits)
  FUNC_0(VAR_1->zero_inits);
 if (VAR_1->retainables)
  FUNC_0(VAR_1->retainables);
}
