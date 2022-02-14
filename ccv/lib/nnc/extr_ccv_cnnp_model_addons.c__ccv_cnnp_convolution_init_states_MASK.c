
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int (* ccv_cnnp_state_initializer_f ) (void* const,int ,int ,int ,int ,TYPE_1__) ;
typedef int ccv_cnnp_model_t ;
struct TYPE_5__ {scalar_t__ graph; } ;
struct TYPE_6__ {TYPE_1__ scale; TYPE_1__ bias; TYPE_1__ weights; } ;
typedef TYPE_2__ ccv_cnnp_model_convolution_t ;


 int FUNC_0 (float const,float const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int * const,TYPE_1__) ;
 float const FUNC_6 (int const) ;

__attribute__((used)) static void FUNC_7(ccv_cnnp_model_t* const VAR_1, ccv_nnc_symbolic_graph_t* const VAR_2, const ccv_cnnp_state_initializer_f VAR_3, void* const VAR_4)
{
 ccv_cnnp_model_convolution_t* const VAR_5 = (ccv_cnnp_model_convolution_t*)VAR_1;
 const ccv_nnc_tensor_param_t VAR_6 = FUNC_5(VAR_2, VAR_5->weights);
 const int VAR_7 = FUNC_2(FUNC_4(VAR_6), 1);
 const int VAR_8 = FUNC_3(VAR_6);
 const float VAR_9 = FUNC_6(2) / FUNC_6(VAR_8 / VAR_7);
 const float VAR_10 = FUNC_6(3) * VAR_9;
 VAR_3(VAR_4, FUNC_0(-VAR_10, VAR_10), VAR_0, 0, 0, VAR_5->weights);
 if (VAR_5->bias.graph)
  VAR_3(VAR_4, FUNC_1(0), VAR_0, 0, 0, VAR_5->bias);
 if (VAR_5->scale.graph)
  VAR_3(VAR_4, FUNC_0(0, 1), VAR_0, 0, 0, VAR_5->scale);
}
