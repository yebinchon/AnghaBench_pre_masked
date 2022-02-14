
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ topsorted; TYPE_7__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_10__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_11__ {TYPE_7__* outgoings; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_12__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,int) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int) ;

int FUNC_3(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t VAR_1, const ccv_nnc_graph_exec_t VAR_2)
{
 FUNC_0(VAR_0 == VAR_1.graph);
 FUNC_0(VAR_0 == VAR_2.graph);
 FUNC_0(VAR_1.d < VAR_0->exec_info->rnum);
 FUNC_0(VAR_2.d < VAR_0->exec_info->rnum);
 ccv_nnc_graph_exec_info_t* VAR_3 = (ccv_nnc_graph_exec_info_t*)FUNC_2(VAR_0->exec_info, VAR_1.d);
 if (!VAR_3->outgoings)
  return -1;
 int VAR_4, VAR_5 = -1;

 for (VAR_4 = 0; VAR_4 < VAR_3->outgoings->rnum; VAR_4++)
  if (*(int*)FUNC_2(VAR_3->outgoings, VAR_4) == VAR_2.d)
  {
   VAR_5 = VAR_4;
   break;
  }
 if (VAR_5 < 0)
  return -1;
 if (VAR_5 < VAR_3->outgoings->rnum - 1)
  *(int*)FUNC_2(VAR_3->outgoings, VAR_5) = *(int*)FUNC_2(VAR_3->outgoings, VAR_3->outgoings->rnum - 1);
 --VAR_3->outgoings->rnum;
 ccv_nnc_graph_exec_info_t* VAR_6 = (ccv_nnc_graph_exec_info_t*)FUNC_2(VAR_0->exec_info, VAR_2.d);
 if (VAR_6->outgoings)
  for (VAR_4 = 0; VAR_4 < VAR_6->outgoings->rnum; VAR_4++)
   FUNC_1(VAR_3->outgoings, *(int*)FUNC_2(VAR_6->outgoings, VAR_4));
 VAR_0->topsorted = 0;
 return 0;
}
