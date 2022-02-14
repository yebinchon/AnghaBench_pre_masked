
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int transactionRecovering; int transactionFailed; int transactionState; } ;
struct TYPE_8__ {TYPE_1__ remoteTransaction; } ;
typedef int SubTransactionId ;
typedef TYPE_1__ RemoteTransaction ;
typedef int PGresult ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*,int const) ;
 int FUNC_2 (TYPE_2__*,int *,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(MultiConnection *VAR_1, SubTransactionId
           VAR_2)
{
 const bool VAR_3 = 0;
 RemoteTransaction *VAR_4 = &VAR_1->remoteTransaction;

 PGresult *VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (!FUNC_3(VAR_5))
 {
  FUNC_2(VAR_1, VAR_5, VAR_3);
 }


 else if (VAR_4->transactionRecovering)
 {
  VAR_4->transactionFailed = 0;
  VAR_4->transactionRecovering = 0;
 }

 FUNC_4(VAR_5);
 FUNC_0(VAR_1);


 VAR_4->transactionState = VAR_0;
}
