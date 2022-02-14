
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transactionState; } ;
struct TYPE_9__ {int port; int hostname; TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef int PGresult ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int const) ;
 int FUNC_3 (TYPE_2__*,int *,int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int const) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,int ) ;

void
FUNC_9(MultiConnection *VAR_7)
{
 RemoteTransaction *VAR_8 = &VAR_7->remoteTransaction;
 PGresult *VAR_9 = ((void*)0);
 const bool VAR_10 = 0;
 const bool VAR_11 = 1;

 FUNC_0(VAR_8->transactionState == VAR_0 ||
     VAR_8->transactionState == VAR_1 ||
     VAR_8->transactionState == VAR_3);

 VAR_9 = FUNC_2(VAR_7, VAR_10);

 if (!FUNC_4(VAR_9))
 {
  FUNC_3(VAR_7, VAR_9, VAR_10);
  if (VAR_8->transactionState == VAR_1)
  {
   FUNC_7(VAR_6, (FUNC_8("failed to commit transaction on %s:%d",
          VAR_7->hostname, VAR_7->port)));
  }
  else if (VAR_8->transactionState == VAR_3)
  {
   FUNC_7(VAR_6, (FUNC_8("failed to commit transaction on %s:%d",
          VAR_7->hostname, VAR_7->port)));
   FUNC_6(VAR_7, VAR_11);
  }
 }
 else if (VAR_8->transactionState == VAR_0 ||
    VAR_8->transactionState == VAR_2)
 {
  VAR_8->transactionState = VAR_4;
 }
 else
 {
  VAR_8->transactionState = VAR_5;
 }

 FUNC_5(VAR_9);

 FUNC_1(VAR_7);
}
