
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sequence_size; int * sequence; } ;
typedef TYPE_1__ ccv_cnnp_sequential_model_t ;
typedef int ccv_cnnp_model_t ;
typedef int ccv_cnnp_cmd_updater_f ;


 int FUNC_0 (int ,int const,int const,void* const) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_0, const int VAR_1, const ccv_cnnp_cmd_updater_f VAR_2, void* const VAR_3)
{
 ccv_cnnp_sequential_model_t* const VAR_4 = (ccv_cnnp_sequential_model_t*)VAR_0;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->sequence_size; VAR_5++)
  FUNC_0(VAR_4->sequence[VAR_5], VAR_1, VAR_2, VAR_3);
}
