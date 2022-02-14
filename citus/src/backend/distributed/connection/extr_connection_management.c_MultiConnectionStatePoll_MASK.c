
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pgConn; } ;
struct TYPE_4__ {scalar_t__ phase; int pollmode; TYPE_2__* connection; } ;
typedef int PostgresPollingStatusType ;
typedef TYPE_1__ MultiConnectionPollState ;
typedef TYPE_2__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(MultiConnectionPollState *VAR_9)
{
 MultiConnection *VAR_10 = VAR_9->connection;
 ConnStatusType VAR_11 = FUNC_2(VAR_10->pgConn);
 PostgresPollingStatusType VAR_12 = VAR_9->pollmode;

 FUNC_0(VAR_9->phase == VAR_3);

 if (VAR_11 == VAR_1)
 {
  VAR_9->phase = VAR_2;
  return 1;
 }
 else if (VAR_11 == VAR_0)
 {

  VAR_9->phase = VAR_4;
  return 1;
 }
 else
 {
  VAR_9->phase = VAR_3;
 }

 VAR_9->pollmode = FUNC_1(VAR_10->pgConn);




 if (VAR_9->pollmode == VAR_5)
 {
  VAR_9->phase = VAR_4;
  return 1;
 }
 else if (VAR_9->pollmode == VAR_6)
 {
  VAR_9->phase = VAR_2;
  return 1;
 }
 else
 {
  FUNC_0(VAR_9->pollmode == VAR_8 ||
      VAR_9->pollmode == VAR_7);
 }

 return (VAR_12 != VAR_9->pollmode) ? 1 : 0;
}
