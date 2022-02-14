
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* int32 ;
struct TYPE_3__ {int taskStatus; void* connectionId; scalar_t__ failureCount; int taskId; int taskCallString; int userName; int databaseName; int jobId; } ;
typedef TYPE_1__ WorkerTask ;
typedef int ResultStatus ;
typedef int QueryStatus ;
typedef int HTAB ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void
FUNC_10(WorkerTask *VAR_9, HTAB *VAR_10)
{
 switch (VAR_9->taskStatus)
 {
  case 136:
  {
   break;
  }

  case 130:
  {

   FUNC_2(VAR_9->jobId);


   VAR_9->connectionId = FUNC_1(VAR_9->databaseName,
                VAR_9->userName);

   if (VAR_9->connectionId != VAR_6)
   {
    bool VAR_11 = FUNC_7(VAR_9->connectionId,
              VAR_9->taskCallString);
    if (VAR_11)
    {
     VAR_9->taskStatus = 131;
    }
    else
    {
     VAR_9->taskStatus = 133;
     VAR_9->failureCount++;

     FUNC_4(VAR_9->connectionId);
     VAR_9->connectionId = VAR_6;
    }
   }
   else
   {
    VAR_9->taskStatus = 133;
    VAR_9->failureCount++;
   }

   break;
  }

  case 131:
  {
   int32 VAR_12 = VAR_9->connectionId;
   ResultStatus VAR_13 = FUNC_6(VAR_12);


   if (VAR_13 == VAR_3)
   {
    QueryStatus VAR_14 = FUNC_5(VAR_12);
    if (VAR_14 == VAR_0)
    {
     VAR_9->taskStatus = 129;
    }
    else if (VAR_14 == VAR_1)
    {
     VAR_9->taskStatus = 133;
     VAR_9->failureCount++;
    }
    else
    {
     FUNC_8(VAR_5, (FUNC_9("invalid query status: %d", VAR_14)));
    }
   }
   else if (VAR_13 == VAR_2)
   {
    VAR_9->taskStatus = 131;
   }
   else if (VAR_13 == VAR_4)
   {
    VAR_9->taskStatus = 133;
    VAR_9->failureCount++;
   }


   if (VAR_13 != VAR_2)
   {
    FUNC_4(VAR_9->connectionId);
    VAR_9->connectionId = VAR_6;
   }

   break;
  }

  case 133:
  {
   if (VAR_9->failureCount < VAR_8)
   {
    VAR_9->taskStatus = 136;
   }
   else
   {
    VAR_9->taskStatus = 132;
   }

   break;
  }

  case 132:
  case 129:
  {
   break;
  }

  case 134:
  {






   if (VAR_9->taskId == VAR_7)
   {
    VAR_9->taskStatus = 135;
    break;
   }

   if (VAR_9->connectionId != VAR_6)
   {
    int32 VAR_15 = VAR_9->connectionId;

    ResultStatus VAR_16 = FUNC_6(VAR_15);
    if (VAR_16 == VAR_2)
    {
     FUNC_3(VAR_15);
    }
   }


   VAR_9->taskStatus = 135;
   break;
  }

  case 135:
  {
   if (VAR_9->connectionId != VAR_6)
   {
    FUNC_4(VAR_9->connectionId);
    VAR_9->connectionId = VAR_6;
   }

   VAR_9->taskStatus = 128;
   break;
  }

  case 128:
  default:
  {

   FUNC_8(VAR_5, (FUNC_9("invalid task status: %d", VAR_9->taskStatus)));
   break;
  }
 }

 FUNC_0(VAR_9->failureCount <= VAR_8);
}
