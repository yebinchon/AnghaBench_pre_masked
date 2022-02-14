
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ poolStartTime; int activeConnectionCount; int checkForPoolTimeout; int nodePort; int nodeName; int sessionList; TYPE_2__* distributedExecution; } ;
typedef TYPE_1__ WorkerPool ;
typedef scalar_t__ TimestampTz ;
struct TYPE_6__ {scalar_t__ failed; scalar_t__ errorOnAnyFailure; } ;
typedef TYPE_2__ DistributedExecution ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(WorkerPool *VAR_4)
{
 DistributedExecution *VAR_5 = VAR_4->distributedExecution;
 TimestampTz VAR_6 = VAR_4->poolStartTime;
 TimestampTz VAR_7 = FUNC_1();

 int VAR_8 = FUNC_8(VAR_4->sessionList);
 int VAR_9 = VAR_4->activeConnectionCount;
 int VAR_10 = 1;

 if (VAR_8 == 0)
 {

  FUNC_0(VAR_6 == 0);
  return;
 }







 if (FUNC_3())
 {
  VAR_10 = VAR_8;
 }

 if (FUNC_2(VAR_6, VAR_7, VAR_2))
 {
  if (VAR_9 < VAR_10)
  {
   int VAR_11 = VAR_3;





   FUNC_4(VAR_4);






   if (VAR_5->errorOnAnyFailure || VAR_5->failed)
   {
    VAR_11 = VAR_1;
   }

   FUNC_5(VAR_11, (FUNC_6(VAR_0),
          FUNC_7("could not establish any connections to the node "
           "%s:%d after %u ms", VAR_4->nodeName,
           VAR_4->nodePort,
           VAR_2)));
  }
  else
  {

   VAR_4->checkForPoolTimeout = 0;
  }
 }
}
