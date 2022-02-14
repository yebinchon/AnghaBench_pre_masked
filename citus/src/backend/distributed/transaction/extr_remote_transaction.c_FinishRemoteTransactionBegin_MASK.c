
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transactionState; int transactionFailed; int lastQueuedSubXact; int lastSuccessfulSubXact; } ;
struct MultiConnection {int pgConn; TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MultiConnection*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_3(struct MultiConnection *VAR_3)
{
 RemoteTransaction *VAR_4 = &VAR_3->remoteTransaction;
 bool VAR_5 = 1;
 bool VAR_6 = 1;

 FUNC_0(VAR_4->transactionState == VAR_2);

 VAR_5 = FUNC_1(VAR_3, VAR_6);
 if (VAR_5)
 {
  VAR_4->transactionState = VAR_1;
  VAR_4->lastSuccessfulSubXact = VAR_4->lastQueuedSubXact;
 }

 if (!VAR_4->transactionFailed)
 {
  FUNC_0(FUNC_2(VAR_3->pgConn) == VAR_0);
 }
}
