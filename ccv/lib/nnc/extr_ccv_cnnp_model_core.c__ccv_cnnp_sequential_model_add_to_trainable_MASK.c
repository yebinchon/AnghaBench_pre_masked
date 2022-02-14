
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sequence_size; int * sequence; } ;
typedef TYPE_1__ ccv_cnnp_sequential_model_t ;
typedef int ccv_cnnp_model_t ;
typedef int ccv_cnnp_add_to_array_f ;


 int FUNC_0 (int ,int const,void* const) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_add_to_array_f VAR_1, void* const VAR_2)
{
 ccv_cnnp_sequential_model_t* const VAR_3 = (ccv_cnnp_sequential_model_t*)VAR_0;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->sequence_size; VAR_4++)
  FUNC_0(VAR_3->sequence[VAR_4], VAR_1, VAR_2);
}
