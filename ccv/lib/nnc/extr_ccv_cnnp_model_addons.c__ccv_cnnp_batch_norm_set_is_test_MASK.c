
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_6__ {int is_test; } ;
struct TYPE_9__ {TYPE_1__ bnorm; } ;
struct TYPE_8__ {scalar_t__ graph; } ;
struct TYPE_7__ {TYPE_4__ params; TYPE_3__ batch_norm; } ;
typedef TYPE_2__ ccv_cnnp_model_batch_norm_t ;
typedef int (* ccv_cnnp_cmd_updater_f ) (void* const,TYPE_3__,int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(ccv_cnnp_model_t* const VAR_2, const int VAR_3, const ccv_cnnp_cmd_updater_f VAR_4, void* const VAR_5)
{
 ccv_cnnp_model_batch_norm_t* const VAR_6 = (ccv_cnnp_model_batch_norm_t*)VAR_2;
 if (VAR_6->batch_norm.graph)
 {
  VAR_6->params.bnorm.is_test = VAR_3;
  VAR_4(VAR_5, VAR_6->batch_norm, FUNC_0(VAR_0, 0, VAR_6->params, 0), VAR_1);
 }
}
