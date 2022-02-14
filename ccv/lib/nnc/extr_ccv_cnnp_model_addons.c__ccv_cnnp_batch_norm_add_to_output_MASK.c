
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_cnnp_model_t ;
struct TYPE_3__ {TYPE_2__* retainables; } ;
typedef TYPE_1__ ccv_cnnp_model_batch_norm_t ;
typedef int (* ccv_cnnp_add_to_array_f ) (void* const,int const) ;
struct TYPE_4__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_add_to_array_f VAR_1, void* const VAR_2)
{
 ccv_cnnp_model_batch_norm_t* const VAR_3 = (ccv_cnnp_model_batch_norm_t*)VAR_0;
 int VAR_4;
 if (VAR_3->retainables)
  for (VAR_4 = 0; VAR_4 < VAR_3->retainables->rnum; VAR_4++)
  {
   const ccv_nnc_tensor_symbol_t VAR_5 = *(ccv_nnc_tensor_symbol_t*)FUNC_0(VAR_3->retainables, VAR_4);
   VAR_1(VAR_2, VAR_5);
  }
}
