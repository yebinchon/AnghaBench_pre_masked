
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ anchor; int it; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;
typedef int ccv_nnc_graph_t ;
struct TYPE_7__ {int output_size; scalar_t__* outputs; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_info_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__* const) ;

__attribute__((used)) static void FUNC_3(ccv_nnc_graph_t* const VAR_1, const ccv_nnc_graph_exec_info_t* const VAR_2, const int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->output_size; VAR_4++)
  if (FUNC_0(VAR_2->outputs[VAR_4]) &&
   ((ccv_nnc_tensor_multiview_t*)VAR_2->outputs[VAR_4])->anchor == VAR_0)
  {
   ccv_nnc_tensor_multiview_t* const VAR_5 = (ccv_nnc_tensor_multiview_t*)VAR_2->outputs[VAR_4];
   VAR_5->it = FUNC_1(VAR_5)[VAR_3 >= 0];
   FUNC_2(VAR_5);
  }
}
