
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transactionState; } ;
struct MultiConnection {int transactionNode; TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct MultiConnection *VAR_1)
{
 RemoteTransaction *VAR_2 = &VAR_1->remoteTransaction;


 if (VAR_2->transactionState != VAR_0)
 {


  FUNC_0(&VAR_1->transactionNode);
 }
}
