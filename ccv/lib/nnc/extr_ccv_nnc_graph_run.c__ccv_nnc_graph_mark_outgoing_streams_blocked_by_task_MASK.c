
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_nnc_stream_task_t ;
struct TYPE_8__ {int ** block_stream_tasks; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_11__ {int stream_size; } ;
struct TYPE_9__ {TYPE_7__ schedule; TYPE_3__* outgoings; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_info_t ;
struct TYPE_10__ {int rnum; } ;


 size_t* FUNC_0 (TYPE_7__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(ccv_nnc_graph_t* const VAR_0, ccv_nnc_graph_exec_info_t* const VAR_1, ccv_nnc_graph_exec_info_t* const VAR_2, ccv_nnc_stream_task_t* const VAR_3)
{
 int VAR_4, VAR_5;
 if (VAR_2->outgoings)
  for (VAR_4 = 0; VAR_4 < VAR_2->outgoings->rnum; VAR_4++)
  {
   const int VAR_6 = *(int*)FUNC_1(VAR_2->outgoings, VAR_4);
   ccv_nnc_graph_exec_info_t* const VAR_7 = VAR_1 + VAR_6;


   for (VAR_5 = 0; VAR_5 < VAR_7->schedule.stream_size; VAR_5++)
    VAR_0->block_stream_tasks[FUNC_0(VAR_7->schedule)[VAR_5]] = VAR_3;
  }
}
