
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ccv_cnnp_model_io_s {int dummy; } ;
typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_9__ {int output_size; void* io; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
typedef TYPE_2__* ccv_cnnp_model_io_t ;
struct TYPE_10__ {void* outgoings; void* incomings; int * outputs; TYPE_1__* model; scalar_t__ visit; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (void*,TYPE_2__**) ;
 int FUNC_5 (void*,int const) ;
 int FUNC_6 (int ,TYPE_2__* const* const,int) ;

ccv_cnnp_model_io_t FUNC_7(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_model_io_t* const VAR_1, const int VAR_2)
{
 FUNC_0(VAR_2 > 0);
 if (!VAR_0->io)
  VAR_0->io = FUNC_3(sizeof(ccv_cnnp_model_io_t), 1, 0);
 ccv_cnnp_model_io_t VAR_3 = FUNC_1(sizeof(struct ccv_cnnp_model_io_s) + sizeof(ccv_nnc_tensor_symbol_t) * VAR_0->output_size);
 VAR_3->visit = 0;
 VAR_3->model = VAR_0;
 VAR_3->incomings = FUNC_3(sizeof(ccv_cnnp_model_io_t), 1, 0);
 VAR_3->outgoings = 0;
 VAR_3->outputs = (ccv_nnc_tensor_symbol_t*)(VAR_3 + 1);
 FUNC_4(VAR_0->io, &VAR_3);
 int VAR_4;
 FUNC_5(VAR_3->incomings, VAR_2);
 FUNC_6(FUNC_2(VAR_3->incomings, 0), VAR_1, sizeof(ccv_cnnp_model_io_t) * VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (!VAR_1[VAR_4]->outgoings)
   VAR_1[VAR_4]->outgoings = FUNC_3(sizeof(ccv_cnnp_model_io_t), 1, 0);
  FUNC_4(VAR_1[VAR_4]->outgoings, &VAR_3);
 }
 return VAR_3;
}
