
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ transactionState; int preparedName; int transactionFailed; } ;
struct MultiConnection {int port; int hostname; TYPE_3__ remoteTransaction; } ;
struct TYPE_7__ {int groupId; } ;
typedef TYPE_1__ WorkerNode ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ StringInfoData ;
typedef TYPE_3__ RemoteTransaction ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MultiConnection*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct MultiConnection*,int const) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct MultiConnection*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct MultiConnection *VAR_2)
{
 RemoteTransaction *VAR_3 = &VAR_2->remoteTransaction;
 StringInfoData VAR_4;
 const bool VAR_5 = 1;
 WorkerNode *VAR_6 = ((void*)0);


 FUNC_0(VAR_3->transactionState != VAR_0);


 FUNC_0(!VAR_3->transactionFailed);


 FUNC_0(VAR_3->transactionState < VAR_1);

 FUNC_1(VAR_2);


 VAR_6 = FUNC_2(VAR_2->hostname, VAR_2->port);
 if (VAR_6 != ((void*)0))
 {
  FUNC_4(VAR_6->groupId, VAR_3->preparedName);
 }

 FUNC_7(&VAR_4);
 FUNC_6(&VAR_4, "PREPARE TRANSACTION %s",
      FUNC_8(VAR_3->preparedName));

 if (!FUNC_5(VAR_2, VAR_4.data))
 {
  FUNC_3(VAR_2, VAR_5);
 }
 else
 {
  VAR_3->transactionState = VAR_1;
 }
}
