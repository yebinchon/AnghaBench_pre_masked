
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int latestUnconsumedWaitEvents; TYPE_2__* connection; } ;
typedef TYPE_1__ WorkerSession ;
struct TYPE_6__ {int pgConn; void* connectionState; } ;
typedef TYPE_2__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_5(WorkerSession *VAR_4)
{
 int VAR_5 = 0;
 MultiConnection *VAR_6 = VAR_4->connection;
 int VAR_7 = VAR_2;
 bool VAR_8 = 0;

 ConnStatusType VAR_9 = FUNC_3(VAR_6->pgConn);
 if (VAR_9 == VAR_0)
 {
  VAR_6->connectionState = VAR_1;
  return 0;
 }


 VAR_5 = FUNC_1(VAR_6->pgConn);
 if (VAR_5 == -1)
 {
  VAR_6->connectionState = VAR_1;
  return 0;
 }
 else if (VAR_5 == 1)
 {

  VAR_7 = VAR_7 | VAR_3;
 }

 if ((VAR_4->latestUnconsumedWaitEvents & VAR_2) != 0)
 {
  if (FUNC_0(VAR_6->pgConn) == 0)
  {
   VAR_6->connectionState = VAR_1;
   return 0;
  }
 }

 if (!FUNC_2(VAR_6->pgConn))
 {
  VAR_8 = 1;
 }

 FUNC_4(VAR_4, VAR_7);


 VAR_4->latestUnconsumedWaitEvents = 0;

 return VAR_8;
}
