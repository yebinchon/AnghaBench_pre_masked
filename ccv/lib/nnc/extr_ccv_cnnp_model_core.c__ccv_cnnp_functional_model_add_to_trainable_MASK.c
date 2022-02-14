
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {int input_size; } ;
struct TYPE_6__ {int sequence_size; TYPE_2__** sequence; TYPE_1__ super; } ;
typedef TYPE_3__ ccv_cnnp_functional_model_t ;
typedef int ccv_cnnp_add_to_array_f ;
struct TYPE_5__ {int model; } ;


 int FUNC_0 (int ,int const,void* const) ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_add_to_array_f VAR_1, void* const VAR_2)
{
 ccv_cnnp_functional_model_t* const VAR_3 = (ccv_cnnp_functional_model_t*)VAR_0;
 int VAR_4;
 for (VAR_4 = VAR_3->super.input_size; VAR_4 < VAR_3->sequence_size; VAR_4++)
  FUNC_0(VAR_3->sequence[VAR_4]->model, VAR_1, VAR_2);
}
