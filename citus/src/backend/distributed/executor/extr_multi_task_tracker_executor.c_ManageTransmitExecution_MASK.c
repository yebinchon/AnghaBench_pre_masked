
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint64 ;
typedef size_t uint32 ;
typedef int int32 ;
typedef int TransmitExecStatus ;
struct TYPE_21__ {int connectionBusy; int trackerFailureCount; int * connectionBusyOnTask; } ;
typedef TYPE_1__ TaskTracker ;
typedef int TaskStatus ;
struct TYPE_22__ {int* fileDescriptorArray; size_t currentNodeIndex; int* transmitStatusArray; int * taskStatusArray; } ;
typedef TYPE_2__ TaskExecution ;
typedef int TaskExecStatus ;
struct TYPE_23__ {scalar_t__ taskType; int taskId; int jobId; } ;
typedef TYPE_3__ Task ;
struct TYPE_25__ {int totalIntermediateResultSize; } ;
struct TYPE_24__ {char* data; } ;
typedef TYPE_4__* StringInfo ;
typedef int QueryStatus ;
typedef TYPE_5__ DistributedExecutionStats ;
typedef int CopyStatus ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*) ;
 int VAR_23 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static TransmitExecStatus
FUNC_15(TaskTracker *VAR_24,
      Task *VAR_25, TaskExecution *VAR_26,
      DistributedExecutionStats *VAR_27)
{
 int32 *VAR_28 = VAR_26->fileDescriptorArray;
 uint32 VAR_29 = VAR_26->currentNodeIndex;
 uint32 VAR_30 = 0;

 TransmitExecStatus *VAR_31 = VAR_26->transmitStatusArray;
 TransmitExecStatus VAR_32 = VAR_31[VAR_29];
 TransmitExecStatus VAR_33 = VAR_7;
 FUNC_0(VAR_25->taskType == VAR_15);

 switch (VAR_32)
 {
  case 128:
  {
   TaskExecStatus *VAR_34 = VAR_26->taskStatusArray;
   TaskExecStatus VAR_35 = VAR_34[VAR_29];
   bool VAR_36 = 0;


   if (VAR_35 != VAR_6)
   {
    VAR_33 = 128;
    break;
   }

   VAR_36 = FUNC_7(VAR_24);
   if (!VAR_36)
   {
    VAR_33 = 130;
    break;
   }

   FUNC_8(VAR_24, VAR_25);
   VAR_33 = 131;
   break;
  }

  case 131:
  {
   QueryStatus VAR_37 = VAR_4;
   int32 VAR_38 = VAR_9;
   TaskStatus VAR_39 = VAR_22;

   bool VAR_40 = FUNC_7(VAR_24);
   if (!VAR_40)
   {
    VAR_33 = 130;
    break;
   }

   VAR_39 = FUNC_9(VAR_24, VAR_25);
   if (VAR_39 == VAR_21)
   {

    VAR_33 = 131;
    break;
   }
   else if (VAR_39 == VAR_20)
   {
    VAR_33 = 129;
    break;
   }


   VAR_38 = FUNC_10(VAR_24, VAR_25);
   FUNC_0(VAR_38 != VAR_9);
   FUNC_0(VAR_39 == VAR_19);


   VAR_37 = FUNC_4(VAR_38);
   if (VAR_37 == VAR_5)
   {
    StringInfo VAR_41 = FUNC_2(VAR_25->jobId);
    StringInfo VAR_42 = FUNC_5(VAR_41, VAR_25->taskId);

    char *VAR_43 = VAR_42->data;
    int VAR_44 = (VAR_10 | VAR_11 | VAR_12 | VAR_13 | VAR_14);
    int VAR_45 = (VAR_16 | VAR_17);

    int32 VAR_46 = FUNC_1(VAR_43, VAR_44, VAR_45);
    if (VAR_46 >= 0)
    {




     VAR_28[VAR_29] = VAR_46;
     VAR_33 = 133;
    }
    else
    {
     FUNC_12(VAR_23, (FUNC_13(),
           FUNC_14("could not open file \"%s\": %m",
            VAR_43)));

     VAR_33 = 129;
    }
   }
   else
   {
    VAR_33 = 129;
   }







   if (VAR_33 == 129)
   {
    VAR_24->connectionBusy = 0;
    VAR_24->connectionBusyOnTask = ((void*)0);
   }

   break;
  }

  case 133:
  {
   int32 VAR_47 = VAR_28[VAR_29];
   CopyStatus VAR_48 = VAR_3;
   int VAR_49 = -1;
   uint64 VAR_50 = 0;


   int32 VAR_51 = FUNC_10(VAR_24, VAR_25);
   FUNC_0(VAR_51 != VAR_9);

   VAR_48 = FUNC_3(VAR_51, VAR_47,
            &VAR_50);

   if (VAR_18 > 0)
   {
    VAR_27->totalIntermediateResultSize += VAR_50;
   }

   if (VAR_48 == VAR_2)
   {

    VAR_33 = 133;
    break;
   }


   if (VAR_48 == VAR_0)
   {
    VAR_49 = FUNC_11(VAR_47);
    VAR_28[VAR_29] = -1;

    if (VAR_49 >= 0)
    {
     VAR_33 = 132;
    }
    else
    {
     FUNC_12(VAR_23, (FUNC_13(),
           FUNC_14("could not close copied file: %m")));

     VAR_33 = 129;
    }
   }
   else if (VAR_48 == VAR_1)
   {
    VAR_33 = 129;

    VAR_49 = FUNC_11(VAR_47);
    VAR_28[VAR_29] = -1;

    if (VAR_49 < 0)
    {
     FUNC_12(VAR_23, (FUNC_13(),
           FUNC_14("could not close copy file: %m")));
    }
   }






   VAR_24->connectionBusy = 0;
   VAR_24->connectionBusyOnTask = ((void*)0);

   break;
  }

  case 129:
  {
   bool VAR_52 = 0;
   bool VAR_53 = 0;






   VAR_53 = FUNC_6(VAR_24);
   if (VAR_53)
   {
    VAR_24->trackerFailureCount++;
   }

   VAR_52 = FUNC_7(VAR_24);
   if (VAR_52)
   {
    VAR_33 = 128;
   }
   else
   {
    VAR_33 = 130;
   }

   break;
  }

  case 130:
  {





   VAR_33 = 128;
   break;
  }

  case 132:
  {

   VAR_33 = 132;
   break;
  }

  default:
  {

   FUNC_12(VAR_8, (FUNC_14("invalid transmit status: %d",
           VAR_32)));
   break;
  }
 }


 VAR_30 = VAR_26->currentNodeIndex;
 VAR_31[VAR_30] = VAR_33;

 return VAR_33;
}
