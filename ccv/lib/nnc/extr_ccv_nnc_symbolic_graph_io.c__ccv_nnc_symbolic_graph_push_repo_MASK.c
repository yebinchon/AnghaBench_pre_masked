
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* sub_graphs; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
typedef int ccv_array_t ;
struct TYPE_6__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int * const,TYPE_1__ const* const*) ;

__attribute__((used)) static void FUNC_2(const ccv_nnc_symbolic_graph_t* const VAR_0, ccv_array_t* const VAR_1)
{
 FUNC_1(VAR_1, &VAR_0);
 int VAR_2;
 if (VAR_0->sub_graphs && VAR_0->sub_graphs->rnum)
  for (VAR_2 = 0; VAR_2 < VAR_0->sub_graphs->rnum; VAR_2++)
  {
   const ccv_nnc_symbolic_graph_t* const VAR_3 = *(ccv_nnc_symbolic_graph_t**)FUNC_0(VAR_0->sub_graphs, VAR_2);
   if (VAR_3)
    FUNC_2(VAR_3, VAR_1);
  }
}
