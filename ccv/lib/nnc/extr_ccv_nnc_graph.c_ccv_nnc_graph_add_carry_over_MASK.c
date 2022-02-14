
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
typedef int ccv_nnc_tensor_multiview_t ;
struct TYPE_5__ {int to; int from; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_carry_over_t ;
struct TYPE_6__ {scalar_t__ carry_overs; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

void FUNC_3(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_tensor_t* const VAR_1, const ccv_nnc_tensor_t* const VAR_2)
{
 ccv_nnc_graph_tensor_carry_over_t VAR_3 = {
  .from = FUNC_0((ccv_nnc_tensor_multiview_t*)VAR_1),
  .to = FUNC_0((ccv_nnc_tensor_multiview_t*)VAR_2)
 };
 if (!VAR_0->carry_overs)
  VAR_0->carry_overs = FUNC_1(sizeof(ccv_nnc_graph_tensor_carry_over_t), 0, 0);
 FUNC_2(VAR_0->carry_overs, &VAR_3);
}
