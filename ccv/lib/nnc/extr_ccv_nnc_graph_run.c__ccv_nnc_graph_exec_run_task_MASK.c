
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_24__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;


typedef int ccv_nnc_tensor_tape_t ;
struct TYPE_30__ {int type; } ;
struct TYPE_28__ {int u8; } ;
struct TYPE_31__ {TYPE_2__ info; TYPE_1__ data; } ;
typedef TYPE_3__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_stream_task_t ;
typedef int ccv_nnc_stream_scheduler_t ;
typedef int ccv_nnc_stream_context_t ;
struct TYPE_32__ {int const exec_idx; int const flags; int * stream_context; int * const tensor_tape; TYPE_7__* const exec; TYPE_5__* graph; TYPE_3__** inputs; } ;
typedef TYPE_4__ ccv_nnc_graph_topsorted_run_coro_t ;
struct TYPE_33__ {int * signals; int ** streams; int sub_graphs; } ;
typedef TYPE_5__ ccv_nnc_graph_t ;
struct TYPE_34__ {int * const stream; TYPE_7__* const node; TYPE_5__* const graph; } ;
typedef TYPE_6__ ccv_nnc_graph_neighbor_context_discovery_t ;
struct TYPE_29__ {int stream_size; int wait_size; size_t* waits; } ;
struct TYPE_27__ {scalar_t__ cmd; } ;
struct TYPE_35__ {int input_size; int output_size; int flags; TYPE_24__ schedule; int hint; TYPE_14__ cmd; int output_flags; int input_flags; TYPE_3__** inputs; } ;
typedef TYPE_7__ ccv_nnc_graph_exec_info_t ;
typedef TYPE_4__ ccv_nnc_graph_exec_cases_of_coro_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* FUNC_1 (TYPE_7__* const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 size_t* FUNC_4 (TYPE_24__) ;
 size_t* FUNC_5 (TYPE_24__) ;
 int FUNC_6 (TYPE_5__* const,TYPE_7__* const) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__* const,TYPE_7__* const) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (TYPE_14__,int ,int const,TYPE_3__**,int,TYPE_3__**,int,int * const) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int * const,int ) ;
 int FUNC_14 (int * const,int ,TYPE_6__*) ;
 int FUNC_15 (int * const,int ) ;
 int * FUNC_16 (int * const,int ,TYPE_4__*,int ) ;
 int FUNC_17 (int * const) ;
 int FUNC_18 (int * const,TYPE_5__* const,int ,TYPE_3__**,int,int ,TYPE_3__**,int) ;

__attribute__((used)) static inline ccv_nnc_stream_task_t* FUNC_19(ccv_nnc_graph_t* const VAR_8, ccv_nnc_graph_exec_info_t* const VAR_9, const int VAR_10, ccv_nnc_tensor_tape_t* const VAR_11, ccv_nnc_stream_scheduler_t* const VAR_12, const int VAR_13)
{
 FUNC_7(VAR_8, VAR_9);
 ccv_nnc_tensor_t** VAR_14 = VAR_9->inputs;
 ccv_nnc_tensor_t** VAR_15 = VAR_14 + VAR_9->input_size;
 if (VAR_11)
  FUNC_18(VAR_11, VAR_8, VAR_9->input_flags, VAR_14, VAR_9->input_size, VAR_9->output_flags, VAR_15, VAR_9->output_size);


 FUNC_6(VAR_8, VAR_9);
 if (VAR_9->cmd.cmd == VAR_4 || VAR_9->cmd.cmd == VAR_1)
 {
  if (VAR_9->flags & VAR_2)
  {
   ccv_nnc_stream_context_t* const VAR_16 = VAR_8->streams[FUNC_5(VAR_9->schedule)[0]];
   ccv_nnc_graph_exec_cases_of_coro_t VAR_17 = {
    .graph = VAR_8,
    .exec_idx = VAR_10,
    .exec = VAR_9,
    .inputs = VAR_14,
    .tensor_tape = VAR_11,
    .stream_context = VAR_16,
    .flags = VAR_13,
   };
   ccv_nnc_stream_task_t* const VAR_18 = FUNC_16(VAR_12, VAR_5, &VAR_17, 0);
   FUNC_17(VAR_18);
   return VAR_18;
  } else if (VAR_9->flags & VAR_3) {
   ccv_nnc_graph_t* VAR_19 = *(ccv_nnc_graph_t**)FUNC_10(VAR_8->sub_graphs, FUNC_1(VAR_9)[0] - 1);
   FUNC_9(VAR_8->streams[FUNC_5(VAR_9->schedule)[0]] == VAR_19->streams[0]);
   ccv_nnc_graph_topsorted_run_coro_t VAR_20 = {
    .graph = VAR_19,
    .exec_idx = VAR_10,
    .exec = VAR_9,
    .tensor_tape = VAR_11,
    .stream_context = VAR_8->streams[FUNC_5(VAR_9->schedule)[0]],
    .flags = VAR_13
   };
   ccv_nnc_stream_task_t* const VAR_21 = FUNC_16(VAR_12, VAR_7, &VAR_20, 0);
   FUNC_17(VAR_21);
   return VAR_21;
  }
 } else {
  int VAR_22, VAR_23;
  for (VAR_22 = 0; VAR_22 < VAR_9->schedule.stream_size; VAR_22++)
  {
   ccv_nnc_stream_context_t* const VAR_24 = VAR_8->streams[FUNC_5(VAR_9->schedule)[VAR_22]];
   for (VAR_23 = 0; VAR_23 < VAR_9->schedule.wait_size; VAR_23++)
    FUNC_15(VAR_24, VAR_8->signals[VAR_9->schedule.waits[VAR_23]]);
  }
  FUNC_3(VAR_0, "%s [%d]: [%d] -> [%d]\n", FUNC_12(VAR_9->cmd.cmd), VAR_10, VAR_9->input_size, VAR_9->output_size);
  for (VAR_22 = 0; VAR_22 < VAR_9->input_size; VAR_22++)
  {
   FUNC_3(VAR_0, "|-> %d. %p (%p:%d)", VAR_22 + 1, VAR_14[VAR_22], (VAR_14[VAR_22] ? VAR_14[VAR_22]->data.u8 : 0), (VAR_14[VAR_22] ? FUNC_2(VAR_14[VAR_22]->info.type) : -1));
   if (VAR_14[VAR_22] && FUNC_0(VAR_0))
    FUNC_8(VAR_14[VAR_22]);
   FUNC_3(VAR_0, "\n");
  }
  ccv_nnc_stream_context_t* const VAR_25 = VAR_8->streams[FUNC_5(VAR_9->schedule)[0]];
  ccv_nnc_graph_neighbor_context_discovery_t VAR_26 = {
   .graph = VAR_8,
   .node = VAR_9,
   .stream = VAR_25
  };
  FUNC_14(VAR_25, VAR_6, &VAR_26);
  FUNC_11(VAR_9->cmd, VAR_9->hint, VAR_13, VAR_14, VAR_9->input_size, VAR_15, VAR_9->output_size, VAR_25);
  for (VAR_22 = 0; VAR_22 < VAR_9->output_size; VAR_22++)
  {
   FUNC_3(VAR_0, "|<- %d. %p (%p:%d)", VAR_22 + 1, VAR_15[VAR_22], (VAR_15[VAR_22] ? VAR_15[VAR_22]->data.u8 : 0), (VAR_15[VAR_22] ? FUNC_2(VAR_15[VAR_22]->info.type) : -1));
   if (VAR_15[VAR_22] && FUNC_0(VAR_0))
    FUNC_8(VAR_15[VAR_22]);
   FUNC_3(VAR_0, "\n");
  }
  for (VAR_22 = 0; VAR_22 < VAR_9->schedule.stream_size; VAR_22++)
   if (FUNC_4(VAR_9->schedule)[VAR_22] >= 0)
   {
    ccv_nnc_stream_context_t* const VAR_27 = VAR_8->streams[FUNC_5(VAR_9->schedule)[VAR_22]];
    FUNC_13(VAR_27, VAR_8->signals[FUNC_4(VAR_9->schedule)[VAR_22]]);
   }
 }
 return 0;
}
