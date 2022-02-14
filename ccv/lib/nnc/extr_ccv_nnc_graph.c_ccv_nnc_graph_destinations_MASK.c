
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ destinations; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

ccv_nnc_graph_exec_t* FUNC_1(const ccv_nnc_graph_t* const VAR_0)
{
 return VAR_0->destinations ? (ccv_nnc_graph_exec_t*)FUNC_0(VAR_0->destinations, 0) : 0;
}
