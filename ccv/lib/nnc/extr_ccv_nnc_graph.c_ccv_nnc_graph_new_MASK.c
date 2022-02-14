
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_info_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;

ccv_nnc_graph_t* FUNC_2(void)
{
 ccv_nnc_graph_t* VAR_0 = (ccv_nnc_graph_t*)FUNC_0(1, sizeof(ccv_nnc_graph_t));
 VAR_0->exec_info = FUNC_1(sizeof(ccv_nnc_graph_exec_info_t), 5, 0);
 return VAR_0;
}
