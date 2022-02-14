
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int ,TYPE_2__) ;
typedef int ccv_cnnp_model_t ;
struct TYPE_8__ {scalar_t__ graph; } ;
struct TYPE_9__ {TYPE_2__ scale; TYPE_2__ bias; TYPE_2__ weights; } ;
typedef TYPE_3__ ccv_cnnp_model_dense_t ;


 int FUNC_0 (float const,float const) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__ FUNC_2 (int * const,TYPE_2__) ;
 float const FUNC_3 (int const) ;

__attribute__((used)) static void FUNC_4(ccv_cnnp_model_t* const VAR_1, ccv_nnc_symbolic_graph_t* const VAR_2, const ccv_cnnp_state_initializer_f VAR_3, void* const VAR_4)
{
 ccv_cnnp_model_dense_t* const VAR_5 = (ccv_cnnp_model_dense_t*)VAR_1;
 const ccv_nnc_tensor_param_t VAR_6 = FUNC_2(VAR_2, VAR_5->weights);
 const int VAR_7 = VAR_6.dim[1];
 const float VAR_8 = FUNC_3(2) / FUNC_3(VAR_7);
 const float VAR_9 = FUNC_3(3) * VAR_8;
 VAR_3(VAR_4, FUNC_0(-VAR_9, VAR_9), VAR_0, 0, 0, VAR_5->weights);
 if (VAR_5->bias.graph)
  VAR_3(VAR_4, FUNC_1(0), VAR_0, 0, 0, VAR_5->bias);
 if (VAR_5->scale.graph)
  VAR_3(VAR_4, FUNC_0(0, 1), VAR_0, 0, 0, VAR_5->scale);
}
