
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* exec_info; TYPE_3__* destinations; TYPE_3__* sources; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
typedef int const ccv_nnc_graph_exec_t ;
typedef int ccv_nnc_graph_exec_info_t ;
struct TYPE_6__ {int const rnum; } ;


 int FUNC_0 (TYPE_1__* const,int *,int const,int const* const,int const,int const* const,int const,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;

void FUNC_2(ccv_nnc_graph_t* const VAR_1, const size_t VAR_2, const int VAR_3, const ccv_nnc_graph_exec_t* const VAR_4, const int VAR_5, const ccv_nnc_graph_exec_t* const VAR_6, const int VAR_7)
{

 int VAR_8;
 const ccv_nnc_graph_exec_t* const VAR_9 = VAR_4 ? VAR_4 : (VAR_1->sources ? (ccv_nnc_graph_exec_t*)FUNC_1(VAR_1->sources, 0): 0);
 const int VAR_10 = VAR_5 ? VAR_5 : (VAR_1->sources ? VAR_1->sources->rnum : 0);
 const ccv_nnc_graph_exec_t* const VAR_11 = VAR_6 ? VAR_6 : (VAR_1->destinations ? (ccv_nnc_graph_exec_t*)FUNC_1(VAR_1->destinations, 0) : 0);
 const int VAR_12 = VAR_7 ? VAR_7 : (VAR_1->destinations ? VAR_1->destinations->rnum : 0);
 FUNC_0(VAR_1, (ccv_nnc_graph_exec_info_t*)FUNC_1(VAR_1->exec_info, 0), VAR_1->exec_info->rnum, VAR_9, VAR_10, VAR_11, VAR_12, 0, VAR_0);

}
