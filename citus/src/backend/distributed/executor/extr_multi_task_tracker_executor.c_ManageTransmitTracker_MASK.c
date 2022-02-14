
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_14__ {int status; int taskId; int jobId; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_15__ {int connectionBusy; TYPE_1__* connectionBusyOnTask; int connectionId; int taskStateHash; } ;
typedef TYPE_2__ TaskTracker ;
struct TYPE_16__ {int data; } ;
typedef TYPE_3__* StringInfo ;


 char* FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(TaskTracker *VAR_3)
{
 TrackerTaskState *VAR_4 = ((void*)0);
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5)
 {
  return;
 }

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6)
 {
  FUNC_7(VAR_3);
  return;
 }


 if (VAR_3->connectionBusy)
 {
  return;
 }

 VAR_4 = FUNC_3(VAR_3->taskStateHash);
 if (VAR_4 != ((void*)0))
 {
  bool VAR_7 = 0;
  int32 VAR_8 = VAR_3->connectionId;
  StringInfo VAR_9 = FUNC_1(VAR_4->jobId);
  StringInfo VAR_10 = FUNC_4(VAR_9, VAR_4->taskId);
  char *VAR_11 = FUNC_0();

  StringInfo VAR_12 = FUNC_9();
  FUNC_8(VAR_12, VAR_2,
       VAR_10->data, FUNC_10(VAR_11));

  VAR_7 = FUNC_2(VAR_8, VAR_12->data);
  if (VAR_7)
  {
   VAR_4->status = VAR_0;

   VAR_3->connectionBusy = 1;
   VAR_3->connectionBusyOnTask = VAR_4;
  }
  else
  {
   VAR_4->status = VAR_1;

   VAR_3->connectionBusy = 0;
   VAR_3->connectionBusyOnTask = ((void*)0);
  }
 }
}
