
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ signal_set; } ;
typedef TYPE_1__ ccv_nnc_stream_data_t ;
struct TYPE_14__ {scalar_t__ stream_size; int wait_size; int waits; } ;
struct TYPE_12__ {TYPE_9__ schedule; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_info_t ;
struct TYPE_13__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 int* FUNC_0 (TYPE_9__) ;
 int const* FUNC_1 (TYPE_9__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_3__* const,int const) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int FUNC_8 (scalar_t__,int*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int*,int) ;

__attribute__((used)) static void FUNC_11(ccv_array_t* const VAR_0, ccv_nnc_graph_exec_info_t* const VAR_1, ccv_array_t* const VAR_2, int* const VAR_3, ccv_nnc_graph_exec_info_t* const VAR_4, const int VAR_5)
{
 FUNC_2(VAR_0->rnum > 0);
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0->rnum; VAR_6++)
 {
  const int VAR_11 = *(int*)FUNC_6(VAR_0, VAR_6);
  ccv_nnc_graph_exec_info_t* const VAR_12 = VAR_4 + VAR_11;
  FUNC_2(VAR_12->schedule.stream_size > 0);
  VAR_10 += VAR_12->schedule.stream_size;
 }
 int VAR_13[FUNC_9(1, VAR_10)];
 FUNC_2(VAR_1->schedule.stream_size > 0);
 for (VAR_6 = 0; VAR_6 < VAR_0->rnum; VAR_6++)
 {
  const int VAR_14 = *(int*)FUNC_6(VAR_0, VAR_6);
  FUNC_2(VAR_14 < VAR_5);
  FUNC_2(VAR_14 >= 0);
  ccv_nnc_graph_exec_info_t* const VAR_15 = VAR_4 + VAR_14;
  FUNC_2(VAR_15->schedule.stream_size > 0);
  int VAR_16 = 1;


  for (VAR_7 = 0; VAR_16 && VAR_7 < VAR_1->schedule.stream_size; VAR_7++)
  {
   const int VAR_17 = FUNC_1(VAR_1->schedule)[VAR_7];
   FUNC_2(VAR_17 >= 0);
   int VAR_18 = 0;
   for (VAR_8 = 0; !VAR_18 && VAR_8 < VAR_15->schedule.stream_size; VAR_8++)
    VAR_18 = (FUNC_1(VAR_15->schedule)[VAR_8] == VAR_17);
   VAR_16 = VAR_18;
  }
  if (VAR_16)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_15->schedule.stream_size; VAR_7++)
  {
   const int VAR_19 = FUNC_1(VAR_15->schedule)[VAR_7];
   FUNC_2(VAR_19 >= 0);
   int VAR_20 = 0;
   for (VAR_8 = 0; !VAR_20 && VAR_8 < VAR_1->schedule.stream_size; VAR_8++)
    VAR_20 = (FUNC_1(VAR_1->schedule)[VAR_8] == VAR_19);
   if (!VAR_20)
   {
    if (FUNC_0(VAR_15->schedule)[VAR_7] < 0)
     FUNC_0(VAR_15->schedule)[VAR_7] = (*VAR_3)++;
    else {
     int VAR_21 = 0;

     for (VAR_8 = 0; !VAR_21 && VAR_8 < VAR_1->schedule.stream_size; VAR_8++)
     {
      FUNC_2(FUNC_1(VAR_1->schedule)[VAR_8] >= 0);
      ccv_nnc_stream_data_t* const VAR_22 = (ccv_nnc_stream_data_t*)FUNC_6(VAR_2, FUNC_1(VAR_1->schedule)[VAR_8]);
      VAR_21 = (VAR_22->signal_set && FUNC_5(VAR_22->signal_set, FUNC_0(VAR_15->schedule)[VAR_7]));
     }
     if (VAR_21)
      continue;
    }

    VAR_13[VAR_9++] = FUNC_0(VAR_15->schedule)[VAR_7];

    for (VAR_8 = 0; VAR_8 < VAR_1->schedule.stream_size; VAR_8++)
    {
     ccv_nnc_stream_data_t* const VAR_23 = (ccv_nnc_stream_data_t*)FUNC_6(VAR_2, FUNC_1(VAR_1->schedule)[VAR_8]);
     if (!VAR_23->signal_set)
      VAR_23->signal_set = FUNC_7(sizeof(int), 0, 0);
     FUNC_8(VAR_23->signal_set, &FUNC_0(VAR_15->schedule)[VAR_7]);
    }
   }
  }
 }
 VAR_1->schedule.wait_size = VAR_9;
 if (VAR_9 > 0)
 {
  VAR_1->schedule.waits = VAR_1->schedule.waits ? FUNC_4(VAR_1->schedule.waits, sizeof(int) * VAR_9) : FUNC_3(sizeof(int) * VAR_9);
  FUNC_10(VAR_1->schedule.waits, VAR_13, sizeof(int) * VAR_9);
 }
}
