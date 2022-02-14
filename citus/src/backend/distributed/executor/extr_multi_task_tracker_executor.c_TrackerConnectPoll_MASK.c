
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef void* int32 ;
typedef int TrackerStatus ;
struct TYPE_3__ {int trackerStatus; char* workerName; char* userName; int connectPollCount; void* connectionId; int workerPort; } ;
typedef TYPE_1__ TaskTracker ;
typedef int ConnectStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 () ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (void*) ;
 float VAR_7 ;
 float VAR_8 ;




 int VAR_9 ;
 int FUNC_4 (float) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static TrackerStatus
FUNC_7(TaskTracker *VAR_10)
{
 switch (VAR_10->trackerStatus)
 {
  case 128:
  {
   char *VAR_11 = VAR_10->workerName;
   uint32 VAR_12 = VAR_10->workerPort;
   char *VAR_13 = FUNC_0();
   char *VAR_14 = VAR_10->userName;

   int32 VAR_15 = FUNC_2(VAR_11, VAR_12,
               VAR_13, VAR_14);
   if (VAR_15 != VAR_6)
   {
    VAR_10->connectionId = VAR_15;
    VAR_10->trackerStatus = 129;
   }
   else
   {
    VAR_10->trackerStatus = 130;
   }

   break;
  }

  case 129:
  {
   int32 VAR_16 = VAR_10->connectionId;

   ConnectStatus VAR_17 = FUNC_1(VAR_16);
   if (VAR_17 == VAR_4)
   {
    VAR_10->trackerStatus = 131;
   }
   else if (VAR_17 == VAR_1 ||
      VAR_17 == VAR_2 ||
      VAR_17 == VAR_3)
   {
    VAR_10->trackerStatus = 129;
   }
   else if (VAR_17 == VAR_0)
   {
    VAR_10->trackerStatus = 130;

    FUNC_3(VAR_16);
    VAR_10->connectionId = VAR_6;
   }


   VAR_10->connectPollCount++;
   if (VAR_17 == VAR_2 ||
    VAR_17 == VAR_3)
   {
    uint32 VAR_18 =
     FUNC_4(VAR_7 * 1.0f / VAR_8);
    uint32 VAR_19 = VAR_10->connectPollCount;
    if (VAR_19 >= VAR_18)
    {
     FUNC_5(VAR_9, (FUNC_6("could not establish asynchronous "
            "connection after %u ms",
            VAR_7)));

     VAR_10->trackerStatus = 130;

     FUNC_3(VAR_16);
     VAR_10->connectionId = VAR_6;
    }
   }

   break;
  }

  case 131:
  case 130:
  {

   VAR_10->connectPollCount = 0;
   break;
  }

  default:
  {
   int VAR_20 = (int) VAR_10->trackerStatus;
   FUNC_5(VAR_5, (FUNC_6("invalid task tracker status: %d", VAR_20)));
   break;
  }
 }

 return VAR_10->trackerStatus;
}
