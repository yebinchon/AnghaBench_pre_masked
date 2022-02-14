
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
typedef int ccv_nnc_tensor_t ;
struct TYPE_14__ {int graph; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_t ;
struct TYPE_15__ {int type; } ;
typedef TYPE_4__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_13__ {int ** retainables; int ** trainables; } ;
struct TYPE_12__ {int size; int v; } ;
struct TYPE_16__ {TYPE_2__ tensors; TYPE_10__* retainables; TYPE_10__* trainables; TYPE_1__ tensors_init; int parallel_count; } ;
typedef TYPE_5__ ccv_cnnp_compiled_data_t ;
struct TYPE_11__ {int rnum; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (int ,TYPE_4__,int ) ;
 int FUNC_7 (int const* const) ;
 TYPE_4__ FUNC_8 (int ,TYPE_3__ const) ;

void FUNC_9(const ccv_nnc_symbolic_graph_t* const VAR_0, ccv_cnnp_compiled_data_t* const VAR_1)
{
 FUNC_1(!VAR_1->tensors.trainables);
 const int VAR_2 = VAR_1->trainables->rnum;
 const int VAR_3 = FUNC_5(VAR_1->parallel_count, 1);
 const int VAR_4 = VAR_1->retainables->rnum;
 VAR_1->tensors_init.size = FUNC_7(VAR_0);
 VAR_1->tensors_init.v = FUNC_2(((VAR_1->tensors_init.size + 31) >> 5), sizeof(uint32_t));
 VAR_1->tensors.trainables = (ccv_nnc_tensor_t**)FUNC_3((sizeof(ccv_nnc_tensor_t*) * VAR_2 + sizeof(ccv_nnc_tensor_t*) * VAR_4) * VAR_3);
 VAR_1->tensors.retainables = VAR_1->tensors.trainables + VAR_2 * VAR_3;
 int VAR_5, VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  const ccv_nnc_tensor_symbol_t VAR_7 = *(ccv_nnc_tensor_symbol_t*)FUNC_4(VAR_1->trainables, VAR_5);
  ccv_nnc_tensor_param_t VAR_8 = FUNC_8(VAR_7.graph, VAR_7);
  FUNC_0(VAR_8.type, 0);
  VAR_1->tensors.trainables[VAR_5] = FUNC_6(0, VAR_8, 0);
  for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
  {
   FUNC_0(VAR_8.type, VAR_6);
   VAR_1->tensors.trainables[VAR_5 + VAR_6 * VAR_2] = FUNC_6(0, VAR_8, 0);
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  const ccv_nnc_tensor_symbol_t VAR_9 = *(ccv_nnc_tensor_symbol_t*)FUNC_4(VAR_1->retainables, VAR_5);
  ccv_nnc_tensor_param_t VAR_10 = FUNC_8(VAR_9.graph, VAR_9);
  FUNC_0(VAR_10.type, 0);
  VAR_1->tensors.retainables[VAR_5] = FUNC_6(0, VAR_10, 0);
  for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++)
  {
   FUNC_0(VAR_10.type, VAR_6);
   VAR_1->tensors.retainables[VAR_5 + VAR_6 * VAR_4] = FUNC_6(0, VAR_10, 0);
  }
 }
}
