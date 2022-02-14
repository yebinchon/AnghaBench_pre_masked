
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t d; TYPE_3__ const* const graph; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_8__ {size_t tensor_symbol_size; scalar_t__* tensor_symbol_idx; } ;
struct TYPE_10__ {TYPE_1__ backward; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;

ccv_nnc_tensor_symbol_t FUNC_1(const ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t VAR_2)
{
 FUNC_0(VAR_2.d >= 0);
 FUNC_0(VAR_2.d < VAR_1->backward.tensor_symbol_size);
 if (VAR_1->backward.tensor_symbol_idx[VAR_2.d] < 0)
  return VAR_0;
 ccv_nnc_tensor_symbol_t VAR_3 = {
  .d = VAR_1->backward.tensor_symbol_idx[VAR_2.d],
  .graph = VAR_1,
 };
 return VAR_3;
}
