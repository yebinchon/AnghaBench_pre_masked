
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_7__* exec_info; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
struct TYPE_10__ {scalar_t__ d; TYPE_2__* const graph; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_t ;
struct TYPE_8__ {int offset; int expr; void const* data; } ;
struct TYPE_11__ {int flags; TYPE_1__ case_of; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_info_t ;
typedef int ccv_nnc_graph_case_of_f ;
struct TYPE_12__ {scalar_t__ rnum; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,scalar_t__) ;

void FUNC_2(ccv_nnc_graph_t* const VAR_1, const ccv_nnc_graph_exec_t VAR_2, ccv_nnc_graph_case_of_f VAR_3, const void* VAR_4, const int VAR_5)
{
 FUNC_0(VAR_2.graph == VAR_1);
 FUNC_0(VAR_2.d >= 0);
 FUNC_0(VAR_2.d < VAR_1->exec_info->rnum);
 ccv_nnc_graph_exec_info_t* const VAR_6 = (ccv_nnc_graph_exec_info_t*)FUNC_1(VAR_1->exec_info, VAR_2.d);
 FUNC_0(VAR_6->flags & VAR_0);
 VAR_6->case_of.data = VAR_4;
 VAR_6->case_of.expr = VAR_3;
 VAR_6->case_of.offset = VAR_5;
}
