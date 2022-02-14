
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_11__ {int graph; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_12__ {int type; } ;
typedef TYPE_3__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_10__ {int ** accum_gradients; int ** gradients; } ;
struct TYPE_13__ {TYPE_1__ tensors; TYPE_8__* trainables; int parallel_count; } ;
typedef TYPE_4__ ccv_cnnp_compiled_data_t ;
struct TYPE_14__ {int rnum; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (int ,TYPE_3__,int ) ;
 TYPE_3__ FUNC_6 (int ,TYPE_2__ const) ;

__attribute__((used)) static void FUNC_7(const ccv_nnc_symbolic_graph_t* const VAR_0, ccv_cnnp_compiled_data_t* const VAR_1)
{
 FUNC_1(!VAR_1->tensors.gradients);
 const int VAR_2 = VAR_1->trainables->rnum;
 const int VAR_3 = FUNC_4(VAR_1->parallel_count, 1);
 VAR_1->tensors.gradients = (ccv_nnc_tensor_t**)FUNC_2(sizeof(ccv_nnc_tensor_t*) * VAR_2 * 2 * VAR_3);
 VAR_1->tensors.accum_gradients = VAR_1->tensors.gradients + VAR_2 * VAR_3;
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  const ccv_nnc_tensor_symbol_t VAR_6 = *(ccv_nnc_tensor_symbol_t*)FUNC_3(VAR_1->trainables, VAR_4);
  ccv_nnc_tensor_param_t VAR_7 = FUNC_6(VAR_6.graph, VAR_6);
  FUNC_0(VAR_7.type, 0);
  VAR_1->tensors.gradients[VAR_4] = FUNC_5(0, VAR_7, 0);
  VAR_1->tensors.accum_gradients[VAR_4] = 0;
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
  {
   FUNC_0(VAR_7.type, VAR_5);
   VAR_1->tensors.gradients[VAR_4 + VAR_5 * VAR_2] = FUNC_5(0, VAR_7, 0);
   VAR_1->tensors.accum_gradients[VAR_4 + VAR_5 * VAR_2] = 0;
  }
 }
}
