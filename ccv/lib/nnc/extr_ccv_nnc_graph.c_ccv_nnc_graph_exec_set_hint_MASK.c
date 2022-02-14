
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ccv_nnc_hint_t ;
struct TYPE_7__ {TYPE_6__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_8__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_9__ {int hint; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_10__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,scalar_t__) ;

void FUNC_2(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t VAR_1, const ccv_nnc_hint_t VAR_2)
{
 FUNC_0(VAR_1.d < VAR_0->exec_info->rnum);
 FUNC_0(VAR_1.graph == VAR_0);
 ccv_nnc_graph_exec_info_t* const VAR_3 = (ccv_nnc_graph_exec_info_t*)FUNC_1(VAR_0->exec_info, VAR_1.d);
 VAR_3->hint = VAR_2;
}
