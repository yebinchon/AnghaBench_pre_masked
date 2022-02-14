
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int TaskType ;
struct TYPE_20__ {int trackerFailureCount; } ;
typedef TYPE_1__ TaskTracker ;
typedef int TaskStatus ;
struct TYPE_21__ {int* taskStatusArray; size_t currentNodeIndex; size_t querySourceNodeIndex; } ;
typedef TYPE_2__ TaskExecution ;
typedef int TaskExecStatus ;
struct TYPE_22__ {int taskType; TYPE_2__* taskExecution; int dependedTaskList; int queryString; } ;
typedef TYPE_3__ Task ;
struct TYPE_23__ {int data; } ;
typedef TYPE_4__* StringInfo ;


 int FUNC_0 (int) ;



 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static TaskExecStatus
FUNC_11(TaskTracker *VAR_10, TaskTracker *VAR_11,
     Task *VAR_12, TaskExecution *VAR_13)
{
 TaskExecStatus *VAR_14 = VAR_13->taskStatusArray;
 uint32 VAR_15 = VAR_13->currentNodeIndex;
 uint32 VAR_16 = 0;

 TaskExecStatus VAR_17 = VAR_14[VAR_15];
 TaskExecStatus VAR_18 = VAR_0;

 switch (VAR_17)
 {
  case 128:
  {
   bool VAR_19 = 1;
   TaskType VAR_20 = VAR_9;

   bool VAR_21 = FUNC_4(VAR_10);
   if (!VAR_21)
   {
    VAR_18 = 130;
    break;
   }





   VAR_19 = FUNC_2(VAR_12->dependedTaskList);
   if (!VAR_19)
   {
    VAR_18 = 128;
    break;
   }


   VAR_20 = VAR_12->taskType;
   if (VAR_20 == VAR_2)
   {
    StringInfo VAR_22 = ((void*)0);
    Task *VAR_23 = (Task *) FUNC_10(VAR_12->dependedTaskList);
    TaskExecution *VAR_24 = VAR_23->taskExecution;

    VAR_22 = FUNC_1(VAR_12, VAR_23);
    VAR_12->queryString = VAR_22->data;
    VAR_13->querySourceNodeIndex = VAR_24->currentNodeIndex;
   }





   if (VAR_20 == VAR_3)
   {
    FUNC_5(VAR_10, VAR_12);
   }
   else
   {
    FUNC_6(VAR_10, VAR_12);
   }

   VAR_18 = 131;
   break;
  }

  case 131:
  {
   TaskStatus VAR_25 = VAR_7;

   bool VAR_26 = FUNC_4(VAR_10);
   if (!VAR_26)
   {
    VAR_18 = 130;
    break;
   }

   VAR_25 = FUNC_7(VAR_10, VAR_12);
   if (VAR_25 == VAR_8)
   {
    VAR_18 = 132;
   }
   else if (VAR_25 == VAR_4 ||
      VAR_25 == VAR_5)
   {
    VAR_18 = 129;
   }
   else if (VAR_25 == VAR_6)
   {






    if (VAR_12->taskType == VAR_2)
    {
     VAR_18 = 133;
    }
    else
    {
     VAR_18 = 130;
    }
   }
   else
   {

    VAR_18 = 131;
   }

   break;
  }

  case 129:
  {
   bool VAR_27 = 0;
   bool VAR_28 = 0;







   VAR_28 = FUNC_3(VAR_10);
   if (VAR_28)
   {
    VAR_10->trackerFailureCount++;
   }

   VAR_27 = FUNC_4(VAR_10);
   if (VAR_27)
   {
    TaskStatus VAR_29 = FUNC_7(VAR_10, VAR_12);
    if (VAR_29 == VAR_4)
    {
     VAR_18 = 128;
    }
    else if (VAR_29 == VAR_5)
    {
     VAR_18 = 131;
    }
   }
   else
   {
    VAR_18 = 130;
   }

   break;
  }

  case 133:
  {
   Task *VAR_30 = (Task *) FUNC_10(VAR_12->dependedTaskList);
   TaskExecution *VAR_31 = VAR_30->taskExecution;
   uint32 VAR_32 = VAR_31->currentNodeIndex;

   bool VAR_33 = 0;
   FUNC_0(VAR_11 != ((void*)0));
   FUNC_0(VAR_12->taskType == VAR_2);
   if (VAR_13->querySourceNodeIndex == VAR_32)
   {
    bool VAR_34 = FUNC_3(VAR_11);
    if (VAR_34)
    {
     VAR_11->trackerFailureCount++;
    }
   }

   VAR_33 = FUNC_4(VAR_11);
   if (VAR_33)
   {





    VAR_18 = 128;
   }
   else
   {
    VAR_18 = 134;
   }

   break;
  }

  case 130:
  case 134:
  {





   VAR_18 = 128;
   break;
  }

  case 132:
  {

   VAR_18 = 132;
   break;
  }

  default:
  {

   FUNC_8(VAR_1, (FUNC_9("invalid execution status: %d",
           VAR_17)));
   break;
  }
 }


 VAR_16 = VAR_13->currentNodeIndex;
 VAR_14[VAR_16] = VAR_18;

 return VAR_18;
}
