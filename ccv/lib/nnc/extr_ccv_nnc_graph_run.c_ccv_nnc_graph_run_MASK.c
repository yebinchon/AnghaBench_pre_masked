
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int params ;
typedef int ccv_nnc_tensor_tape_t ;
typedef int ccv_nnc_stream_task_t ;
typedef int ccv_nnc_stream_scheduler_t ;
typedef int ccv_nnc_stream_context_t ;
struct TYPE_6__ {int exec_idx; int const flags; int * const stream_context; int * const tensor_tape; int exec; TYPE_2__* const graph; } ;
typedef TYPE_1__ ccv_nnc_graph_topsorted_run_coro_t ;
struct TYPE_7__ {scalar_t__ stream_size; scalar_t__ topsorted; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__* const,int,int ,int ,int ,int ,int ,int const,int const* const,int const,int const* const,int const,int * const,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int * const) ;
 int FUNC_2 (int * const,int * const) ;
 int * FUNC_3 (int * const,int ,TYPE_1__*,int) ;

int FUNC_4(ccv_nnc_graph_t* const VAR_2, const int VAR_3, const ccv_nnc_graph_exec_t* const VAR_4, const int VAR_5, const ccv_nnc_graph_exec_t* const VAR_6, const int VAR_7, ccv_nnc_tensor_tape_t* const VAR_8, ccv_nnc_stream_context_t* const VAR_9)
{
 if (VAR_9 && VAR_2->topsorted && VAR_2->stream_size > 0 && VAR_5 == 0 && VAR_7 == 0)
 {
  ccv_nnc_stream_scheduler_t* const VAR_10 = FUNC_1(VAR_9);
  ccv_nnc_graph_topsorted_run_coro_t VAR_11 = {
   .graph = VAR_2,
   .exec_idx = -1,
   .exec = 0,
   .tensor_tape = VAR_8,
   .stream_context = VAR_9,
   .flags = VAR_3
  };
  ccv_nnc_stream_task_t* const VAR_12 = FUNC_3(VAR_10, VAR_1, &VAR_11, sizeof(VAR_11));
  FUNC_2(VAR_10, VAR_12);
  return VAR_0;
 } else
  return FUNC_0(VAR_2, -1, 0, 0, 0, 0, 0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0 );
}
