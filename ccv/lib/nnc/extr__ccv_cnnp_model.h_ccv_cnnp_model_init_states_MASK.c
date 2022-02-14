
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_cnnp_state_initializer_f ;
struct TYPE_6__ {TYPE_1__* isa; } ;
typedef TYPE_2__ ccv_cnnp_model_t ;
struct TYPE_5__ {int (* init_states ) (TYPE_2__* const,int * const,int const,void* const) ;} ;


 int FUNC_0 (TYPE_2__* const,int * const,int const,void* const) ;

__attribute__((used)) static inline void FUNC_1(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_cnnp_state_initializer_f VAR_2, void* const VAR_3)
{
 if (VAR_0->isa->init_states)
  VAR_0->isa->init_states(VAR_0, VAR_1, VAR_2, VAR_3);
}
