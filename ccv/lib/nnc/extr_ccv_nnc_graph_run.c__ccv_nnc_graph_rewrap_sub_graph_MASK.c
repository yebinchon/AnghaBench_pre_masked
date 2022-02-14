
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int to; int from; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_carry_over_t ;
struct TYPE_8__ {TYPE_3__* sub_graphs; TYPE_3__* carry_overs; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
struct TYPE_9__ {int rnum; } ;


 int FUNC_0 (TYPE_2__ const* const,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(const ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_t* const VAR_1)
{
 int VAR_2;
 if (VAR_1->carry_overs)
  for (VAR_2 = 0; VAR_2 < VAR_1->carry_overs->rnum; VAR_2++)
  {
   ccv_nnc_graph_tensor_carry_over_t* const VAR_3 = (ccv_nnc_graph_tensor_carry_over_t*)FUNC_1(VAR_1->carry_overs, VAR_2);
   FUNC_0(VAR_0, VAR_3->from);
   FUNC_0(VAR_0, VAR_3->to);
  }
 if (VAR_1->sub_graphs)
  for (VAR_2 = 0; VAR_2 < VAR_1->sub_graphs->rnum; VAR_2++)
   FUNC_2(VAR_0, *(ccv_nnc_graph_t**)FUNC_1(VAR_1->sub_graphs, VAR_2));
}
