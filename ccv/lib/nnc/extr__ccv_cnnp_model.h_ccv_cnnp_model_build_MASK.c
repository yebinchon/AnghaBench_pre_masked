
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_7__ {int const output_size; int * const outputs; TYPE_1__* isa; } ;
typedef TYPE_2__ ccv_cnnp_model_t ;
struct TYPE_6__ {int (* build ) (TYPE_2__* const,int * const,int const* const,int const,int * const,int const) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int * const,int * const,int) ;
 int FUNC_2 (TYPE_2__* const,int * const,int const* const,int const,int * const,int const) ;
 int FUNC_3 (TYPE_2__* const,int * const,int const* const,int const,int * const,int const) ;

__attribute__((used)) static inline void FUNC_4(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 if (VAR_4 && VAR_5)
 {
  FUNC_0(VAR_5 == VAR_0->output_size);
  VAR_0->isa->build(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_1(VAR_0->outputs, VAR_4, sizeof(ccv_nnc_tensor_symbol_t) * VAR_5);
 } else
  VAR_0->isa->build(VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->outputs, VAR_0->output_size);
}
