
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int ccv_nnc_tensor_tape_t ;
struct TYPE_23__ {int done; int super; } ;
typedef TYPE_2__ ccv_nnc_stream_task_t ;
struct TYPE_24__ {TYPE_2__** block_stream_tasks; TYPE_1__* sub_graphs; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;
struct TYPE_22__ {int stream_size; } ;
struct TYPE_25__ {TYPE_20__ schedule; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_info_t ;
struct TYPE_21__ {int rnum; } ;


 int FUNC_0 (int,int,int) ;
 size_t* FUNC_1 (TYPE_20__) ;
 TYPE_2__* FUNC_2 (TYPE_3__* const,TYPE_4__* const,int const,int * const,int ,int const) ;
 int FUNC_3 (TYPE_3__* const,TYPE_4__* const,TYPE_4__* const,TYPE_2__* const) ;
 int FUNC_4 (TYPE_2__* const,TYPE_3__* const,TYPE_2__** const,int,TYPE_4__* const,int*,int) ;
 scalar_t__ FUNC_5 (TYPE_3__* const,int) ;

__attribute__((used)) static void FUNC_6(ccv_nnc_stream_task_t* const VAR_0, ccv_nnc_graph_t* const VAR_1, ccv_nnc_graph_exec_info_t* const VAR_2, const int VAR_3, const int VAR_4, ccv_nnc_tensor_tape_t* const VAR_5, const int VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = 0;
 ccv_nnc_stream_task_t** const VAR_10 = (ccv_nnc_stream_task_t**)FUNC_5(VAR_1, sizeof(ccv_nnc_stream_task_t*) * (VAR_1->sub_graphs ? VAR_1->sub_graphs->rnum : 0) + sizeof(int) * VAR_4 * 2);
 int* VAR_11[2];
 VAR_11[0] = (int*)(VAR_10 + (VAR_1->sub_graphs ? VAR_1->sub_graphs->rnum : 0));
 VAR_11[1] = VAR_11[0] + VAR_4;
 int VAR_12[2] = {
  0, 0
 };
 for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++)
 {
  ccv_nnc_graph_exec_info_t* const VAR_13 = VAR_2 + VAR_7;

  int VAR_14 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_13->schedule.stream_size; VAR_8++)
   if (VAR_1->block_stream_tasks[FUNC_1(VAR_13->schedule)[VAR_8]])
   {
    VAR_11[0][VAR_12[0]++] = VAR_7;
    FUNC_3(VAR_1, VAR_2, VAR_13, VAR_1->block_stream_tasks[FUNC_1(VAR_13->schedule)[VAR_8]]);
    VAR_14 = 1;
   }
  if (VAR_14)
   continue;
  ccv_nnc_stream_task_t* const VAR_15 = FUNC_2(VAR_1, VAR_13, VAR_7, VAR_5, VAR_0->super, VAR_6);
  if (VAR_15 && !VAR_15->done)
  {
   VAR_10[VAR_9++] = VAR_15;
   for (VAR_8 = 0; VAR_8 < VAR_13->schedule.stream_size; VAR_8++)
    VAR_1->block_stream_tasks[FUNC_1(VAR_13->schedule)[VAR_8]] = VAR_15;
   FUNC_3(VAR_1, VAR_2, VAR_13, VAR_15);
  }
 }
 FUNC_4(VAR_0, VAR_1, VAR_10, VAR_9, VAR_2, VAR_11[0], VAR_12[0]);
 int VAR_16 = 0, VAR_17 = 1;
 while (VAR_12[VAR_16] > 0)
 {
  VAR_12[VAR_17] = 0;
  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_12[VAR_16]; VAR_7++)
  {
   const int VAR_18 = VAR_11[VAR_16][VAR_7];
   ccv_nnc_graph_exec_info_t* const VAR_19 = VAR_2 + VAR_18;
   int VAR_20 = 0;
   for (VAR_8 = 0; VAR_8 < VAR_19->schedule.stream_size; VAR_8++)
    if (VAR_1->block_stream_tasks[FUNC_1(VAR_19->schedule)[VAR_8]])
    {
     FUNC_3(VAR_1, VAR_2, VAR_19, VAR_1->block_stream_tasks[FUNC_1(VAR_19->schedule)[VAR_8]]);
     VAR_11[VAR_17][VAR_12[VAR_17]++] = VAR_18;
     VAR_20 = 1;
    }
   if (VAR_20)
    continue;
   ccv_nnc_stream_task_t* const VAR_21 = FUNC_2(VAR_1, VAR_19, VAR_18, VAR_5, VAR_0->super, VAR_6);
   if (VAR_21 && !VAR_21->done)
   {
    VAR_10[VAR_9++] = VAR_21;
    for (VAR_8 = 0; VAR_8 < VAR_19->schedule.stream_size; VAR_8++)
     VAR_1->block_stream_tasks[FUNC_1(VAR_19->schedule)[VAR_8]] = VAR_21;
    FUNC_3(VAR_1, VAR_2, VAR_19, VAR_21);
   }
  }
  int VAR_22;
  FUNC_0(VAR_16, VAR_17, VAR_22);
  FUNC_4(VAR_0, VAR_1, VAR_10, VAR_9, VAR_2, VAR_11[VAR_16], VAR_12[VAR_16]);
 }
}
