
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_stream_context_t ;
struct TYPE_5__ {int * signals; int ** streams; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_6__ {TYPE_3__* node; TYPE_1__* graph; int * stream; } ;
typedef TYPE_2__ ccv_nnc_graph_neighbor_context_discovery_t ;
struct TYPE_8__ {int stream_size; int wait_size; size_t* waits; } ;
struct TYPE_7__ {TYPE_4__ schedule; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;


 int const FUNC_0 (int ) ;
 size_t* FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static ccv_nnc_stream_context_t* FUNC_4(const int VAR_0, void* const VAR_1)
{
 const ccv_nnc_graph_neighbor_context_discovery_t* const VAR_2 = (ccv_nnc_graph_neighbor_context_discovery_t*)VAR_1;
 if (FUNC_0(FUNC_2(VAR_2->stream)) == VAR_0)
  return VAR_2->stream;
 ccv_nnc_graph_t* const VAR_3 = VAR_2->graph;
 ccv_nnc_graph_exec_info_t* const VAR_4 = VAR_2->node;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->schedule.stream_size; VAR_5++)
 {
  ccv_nnc_stream_context_t* const VAR_6 = VAR_3->streams[FUNC_1(VAR_4->schedule)[VAR_5]];
  if (FUNC_0(FUNC_2(VAR_6)) == VAR_0)
   return VAR_6;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->schedule.wait_size; VAR_5++)
 {
  ccv_nnc_stream_context_t* VAR_7 = FUNC_3(VAR_3->signals[VAR_4->schedule.waits[VAR_5]]);
  if (VAR_7 && FUNC_0(FUNC_2(VAR_7)) == VAR_0)
   return VAR_7;
 }
 return 0;
}
