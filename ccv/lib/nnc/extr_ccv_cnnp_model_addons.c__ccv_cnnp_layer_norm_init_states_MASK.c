
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int ,TYPE_1__) ;
typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {scalar_t__ graph; } ;
struct TYPE_5__ {TYPE_1__ scale; TYPE_1__ bias; } ;
typedef TYPE_2__ ccv_cnnp_model_batch_norm_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(ccv_cnnp_model_t* const VAR_1, ccv_nnc_symbolic_graph_t* const VAR_2, const ccv_cnnp_state_initializer_f VAR_3, void* const VAR_4)
{
 ccv_cnnp_model_batch_norm_t* const VAR_5 = (ccv_cnnp_model_batch_norm_t*)VAR_1;
 if (VAR_5->bias.graph)
  VAR_3(VAR_4, FUNC_1(0), VAR_0, 0, 0, VAR_5->bias);
 if (VAR_5->scale.graph)
  VAR_3(VAR_4, FUNC_0(0, 1), VAR_0, 0, 0, VAR_5->scale);
}
