
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_13__ {void* status; } ;
typedef TYPE_1__ TrackerTaskState ;
struct TYPE_14__ {int connectionBusy; int * connectionBusyOnTaskList; int connectionId; int * assignedTaskList; } ;
typedef TYPE_2__ TaskTracker ;
struct TYPE_15__ {int data; } ;
typedef TYPE_3__* StringInfo ;
typedef scalar_t__ ResultStatus ;
typedef int List ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 void* VAR_5 ;
 int * FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_14(TaskTracker *VAR_6)
{
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 VAR_8 = FUNC_8(VAR_6);
 if (!VAR_8)
 {
  return;
 }

 VAR_7 = FUNC_7(VAR_6);
 if (!VAR_7)
 {
  FUNC_9(VAR_6);
  return;
 }





 if (!VAR_6->connectionBusy)
 {
  List *VAR_9 = VAR_6->assignedTaskList;
  List *VAR_10 = FUNC_1(VAR_6);

  VAR_6->assignedTaskList = FUNC_11(VAR_9, VAR_10);
 }





 if (!VAR_6->connectionBusy)
 {
  List *VAR_11 = FUNC_5(VAR_6);


  if (VAR_11)
  {
   int32 VAR_12 = VAR_6->connectionId;
   StringInfo VAR_13 = ((void*)0);
   bool VAR_14 = 0;

   VAR_13 = FUNC_6(VAR_11);

   VAR_14 = FUNC_3(VAR_12, VAR_13->data);
   if (VAR_14)
   {
    VAR_6->connectionBusy = 1;
    VAR_6->connectionBusyOnTaskList = VAR_11;
   }
   else
   {

    TrackerTaskState *VAR_15 = (TrackerTaskState *) FUNC_10(
     VAR_11);
    VAR_15->status = VAR_5;

    FUNC_12(VAR_11);

    VAR_6->connectionBusy = 0;
    VAR_6->connectionBusyOnTaskList = VAR_4;
   }

   FUNC_13(VAR_13);
  }
 }




 if (VAR_6->connectionBusy)
 {
  int32 VAR_16 = VAR_6->connectionId;
  ResultStatus VAR_17 = VAR_0;


  VAR_17 = FUNC_2(VAR_16);
  if (VAR_17 == VAR_2)
  {
   FUNC_4(VAR_6);
  }
  else if (VAR_17 == VAR_3)
  {
   TrackerTaskState *VAR_18 = (TrackerTaskState *) FUNC_10(
    VAR_6->connectionBusyOnTaskList);
   FUNC_0(VAR_18 != ((void*)0));
   VAR_18->status = VAR_5;
  }


  if (VAR_17 != VAR_1)
  {
   FUNC_12(VAR_6->connectionBusyOnTaskList);

   VAR_6->connectionBusy = 0;
   VAR_6->connectionBusyOnTaskList = VAR_4;
  }
 }
}
