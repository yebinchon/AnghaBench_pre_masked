
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transactionState; int preparedName; } ;
struct MultiConnection {int port; int hostname; TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MultiConnection*,int const) ;
 int VAR_0 ;
 int * FUNC_2 (struct MultiConnection*,int const) ;
 int FUNC_3 (struct MultiConnection*,int *,int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int ,int ) ;

void
FUNC_9(struct MultiConnection *VAR_4)
{
 RemoteTransaction *VAR_5 = &VAR_4->remoteTransaction;
 PGresult *VAR_6 = ((void*)0);
 const bool VAR_7 = 1;

 FUNC_0(VAR_5->transactionState == VAR_3);

 VAR_6 = FUNC_2(VAR_4, VAR_7);

 if (!FUNC_4(VAR_6))
 {
  VAR_5->transactionState = VAR_1;
  FUNC_3(VAR_4, VAR_6, VAR_7);
 }
 else
 {
  VAR_5->transactionState = VAR_2;
 }

 FUNC_5(VAR_6);
 if (!FUNC_1(VAR_4, VAR_7))
 {
  FUNC_6(VAR_0, (FUNC_8("failed to prepare transaction '%s' on host %s:%d",
          VAR_5->preparedName, VAR_4->hostname,
          VAR_4->port),
      FUNC_7("Try re-running the command.")));
 }
}
