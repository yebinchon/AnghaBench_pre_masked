
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
struct TYPE_10__ {int transit; TYPE_1__* to; } ;
typedef TYPE_3__ ccv_nnc_graph_tensor_carry_over_t ;
struct TYPE_11__ {TYPE_5__* carry_overs; } ;
typedef TYPE_4__ ccv_nnc_graph_t ;
struct TYPE_12__ {int rnum; } ;
struct TYPE_8__ {size_t index; scalar_t__* tensors; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_graph_t* const VAR_0)
{
 int VAR_1;
 if (VAR_0->carry_overs)
  for (VAR_1 = 0; VAR_1 < VAR_0->carry_overs->rnum; VAR_1++)
  {
   ccv_nnc_graph_tensor_carry_over_t* const VAR_2 = (ccv_nnc_graph_tensor_carry_over_t*)FUNC_2(VAR_0->carry_overs, VAR_1);
   ccv_nnc_tensor_t* VAR_3 = (ccv_nnc_tensor_t*)(VAR_2->to->tensors[VAR_2->to->index]);
   FUNC_1(!FUNC_0(VAR_3));
   VAR_3->data = VAR_2->transit;
  }
}
