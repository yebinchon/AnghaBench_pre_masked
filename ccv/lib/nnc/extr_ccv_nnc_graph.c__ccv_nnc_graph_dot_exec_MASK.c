
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
typedef TYPE_2__ ccv_nnc_stream_context_t ;
struct TYPE_11__ {scalar_t__ stream_size; int wait_size; int* waits; } ;
struct TYPE_8__ {int cmd; } ;
struct TYPE_10__ {TYPE_6__ schedule; TYPE_1__ cmd; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
typedef int FILE ;


 int const VAR_0 ;
 int FUNC_0 (int ) ;
 int* FUNC_1 (TYPE_6__) ;
 int* FUNC_2 (TYPE_6__) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int const,...) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static void FUNC_7(const int VAR_1, const ccv_nnc_graph_exec_info_t* const VAR_2, ccv_nnc_stream_context_t** const VAR_3, const int VAR_4, FILE* VAR_5)
{
 if (VAR_4 == VAR_0)
  FUNC_5('{', VAR_5);
 FUNC_4(VAR_5, "node%d", VAR_1);
 if (VAR_4 == VAR_0)
 {
  FUNC_6("|Command: ", VAR_5);
  FUNC_6(FUNC_3(VAR_2->cmd.cmd), VAR_5);
  if (VAR_2->schedule.stream_size > 0)
  {
   int VAR_6, VAR_7 = 0;
   FUNC_6("|Stream: ", VAR_5);
   for (VAR_6 = 0; VAR_6 < VAR_2->schedule.stream_size; VAR_6++)
   {
    const int VAR_8 = VAR_3 ? FUNC_0(VAR_3[FUNC_2(VAR_2->schedule)[VAR_6]]->type) : 0;
    if (VAR_6 == 0)
     FUNC_4(VAR_5, "%d (d%d)", FUNC_2(VAR_2->schedule)[VAR_6], VAR_8);
    else
     FUNC_4(VAR_5, ", %d (d%d)", FUNC_2(VAR_2->schedule)[VAR_6], VAR_8);
   }
   for (VAR_6 = 0; VAR_6 < VAR_2->schedule.stream_size; VAR_6++)
    if (FUNC_1(VAR_2->schedule)[VAR_6] >= 0)
    {
     if (!VAR_7)
     {
      VAR_7 = 1;
      FUNC_4(VAR_5, "|Signal: %d", FUNC_1(VAR_2->schedule)[VAR_6]);
     } else
      FUNC_4(VAR_5, ", %d", FUNC_1(VAR_2->schedule)[VAR_6]);
    }
  }
  if (VAR_2->schedule.wait_size > 0)
  {
   FUNC_6("|Wait: ", VAR_5);
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < VAR_2->schedule.wait_size - 1; VAR_9++)
    FUNC_4(VAR_5, "%d, ", VAR_2->schedule.waits[VAR_9]);
   FUNC_4(VAR_5, "%d", VAR_2->schedule.waits[VAR_2->schedule.wait_size - 1]);
  }
  FUNC_5('}', VAR_5);
 }
}
