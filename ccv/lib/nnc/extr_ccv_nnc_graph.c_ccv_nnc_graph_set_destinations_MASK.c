
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ topsorted; scalar_t__ destinations; int sources; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int const,int ) ;
 int FUNC_2 (scalar_t__,int const* const) ;

void FUNC_3(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t* const VAR_1, const int VAR_2)
{
 if (!VAR_0->destinations)
  VAR_0->destinations = FUNC_1(sizeof(ccv_nnc_graph_exec_t), VAR_2, 0);
 else
  FUNC_0(VAR_0->sources);
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_2(VAR_0->destinations, VAR_1 + VAR_3);
 VAR_0->topsorted = 0;
}
