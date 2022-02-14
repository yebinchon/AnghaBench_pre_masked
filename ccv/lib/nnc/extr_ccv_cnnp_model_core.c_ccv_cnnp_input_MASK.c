
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccv_cnnp_model_io_s {int dummy; } ;
typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_6__ {int output_size; int * outputs; int io; int * isa; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
typedef TYPE_2__* ccv_cnnp_model_io_t ;
struct TYPE_7__ {int * outputs; TYPE_1__* model; scalar_t__ outgoings; scalar_t__ incomings; scalar_t__ visit; } ;


 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,TYPE_2__**) ;
 int VAR_0 ;

ccv_cnnp_model_io_t FUNC_4(void)
{
 ccv_cnnp_model_t* const VAR_1 = (ccv_cnnp_model_t*)FUNC_0(1, sizeof(ccv_cnnp_model_t) + sizeof(ccv_nnc_tensor_symbol_t));
 VAR_1->isa = &VAR_0;
 VAR_1->io = FUNC_2(sizeof(ccv_cnnp_model_io_t), 1, 0);
 ccv_cnnp_model_io_t VAR_2 = FUNC_1(sizeof(struct ccv_cnnp_model_io_s) + sizeof(ccv_nnc_tensor_symbol_t));
 VAR_2->visit = 0;
 VAR_2->incomings = 0;
 VAR_2->outgoings = 0;
 VAR_2->model = VAR_1;
 VAR_2->outputs = (ccv_nnc_tensor_symbol_t*)(VAR_2 + 1);
 FUNC_3(VAR_1->io, &VAR_2);
 VAR_1->outputs = (ccv_nnc_tensor_symbol_t*)(VAR_1 + 1);
 VAR_1->output_size = 1;
 return VAR_2;
}
