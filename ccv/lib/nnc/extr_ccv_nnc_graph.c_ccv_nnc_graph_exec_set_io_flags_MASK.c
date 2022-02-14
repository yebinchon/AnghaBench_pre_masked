
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_6__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_8__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_9__ {int const input_size; int const output_size; int* input_flags; int* output_flags; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_10__ {scalar_t__ rnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,scalar_t__) ;
 int FUNC_3 (int*,int const* const,int) ;

void FUNC_4(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t VAR_1, const int* const VAR_2, const int VAR_3, const int* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_1.d < VAR_0->exec_info->rnum);
 FUNC_0(VAR_1.graph == VAR_0);
 ccv_nnc_graph_exec_info_t* const VAR_6 = (ccv_nnc_graph_exec_info_t*)FUNC_2(VAR_0->exec_info, VAR_1.d);
 FUNC_0(VAR_3 <= VAR_6->input_size);
 FUNC_0(VAR_5 <= VAR_6->output_size);
 if (VAR_6->input_size + VAR_6->output_size == 0)
  return;
 if (!VAR_6->input_flags)
 {
  VAR_6->input_flags = (int*)FUNC_1(VAR_6->input_size + VAR_6->output_size, sizeof(int));
  VAR_6->output_flags = VAR_6->input_flags + VAR_6->input_size;
 }
 if (VAR_3 > 0)
  FUNC_3(VAR_6->input_flags, VAR_2, sizeof(int) * VAR_3);
 if (VAR_5 > 0)
  FUNC_3(VAR_6->output_flags, VAR_4, sizeof(int) * VAR_5);
}
