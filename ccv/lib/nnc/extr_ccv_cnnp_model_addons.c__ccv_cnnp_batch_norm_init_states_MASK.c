
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int ,TYPE_1__) ;
typedef int ccv_cnnp_model_t ;
struct TYPE_7__ {TYPE_4__* zero_inits; TYPE_1__ scale; TYPE_1__ bias; } ;
typedef TYPE_3__ ccv_cnnp_model_batch_norm_t ;
struct TYPE_8__ {int rnum; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(ccv_cnnp_model_t* const VAR_1, ccv_nnc_symbolic_graph_t* const VAR_2, const ccv_cnnp_state_initializer_f VAR_3, void* const VAR_4)
{
 ccv_cnnp_model_batch_norm_t* const VAR_5 = (ccv_cnnp_model_batch_norm_t*)VAR_1;
 if (VAR_5->bias.graph)
  VAR_3(VAR_4, FUNC_1(0), VAR_0, 0, 0, VAR_5->bias);
 if (VAR_5->scale.graph)
  VAR_3(VAR_4, FUNC_0(0, 1), VAR_0, 0, 0, VAR_5->scale);
 int VAR_6;
 if (VAR_5->zero_inits)
  for (VAR_6 = 0; VAR_6 < VAR_5->zero_inits->rnum; VAR_6++)
   VAR_3(VAR_4, FUNC_1(0), VAR_0, 0, 0, *(ccv_nnc_tensor_symbol_t*)FUNC_2(VAR_5->zero_inits, VAR_6));
}
