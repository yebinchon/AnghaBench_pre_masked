
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {scalar_t__ topsorted; TYPE_7__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_11__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_12__ {TYPE_7__* outgoings; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_13__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int) ;
 TYPE_7__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_7__*,int*) ;

int FUNC_4(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t VAR_1, const ccv_nnc_graph_exec_t VAR_2)
{
 FUNC_0(VAR_0 == VAR_1.graph);
 FUNC_0(VAR_0 == VAR_2.graph);
 FUNC_0(VAR_1.d < VAR_0->exec_info->rnum);
 FUNC_0(VAR_2.d < VAR_0->exec_info->rnum);
 ccv_nnc_graph_exec_info_t* VAR_3 = (ccv_nnc_graph_exec_info_t*)FUNC_1(VAR_0->exec_info, VAR_1.d);
 if (VAR_3->outgoings == 0)
  VAR_3->outgoings = FUNC_2(sizeof(int32_t), 1, 0);
 else {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->outgoings->rnum; VAR_4++)
   if (*(int*)FUNC_1(VAR_3->outgoings, VAR_4) == VAR_2.d)
    return -1;
 }
 FUNC_3(VAR_3->outgoings, &VAR_2.d);
 VAR_0->topsorted = 0;
 return 0;
}
