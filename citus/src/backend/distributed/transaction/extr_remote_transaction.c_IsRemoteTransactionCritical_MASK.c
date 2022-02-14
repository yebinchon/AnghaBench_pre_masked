
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transactionCritical; } ;
struct MultiConnection {TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;



bool
FUNC_0(struct MultiConnection *VAR_0)
{
 RemoteTransaction *VAR_1 = &VAR_0->remoteTransaction;

 return VAR_1->transactionCritical;
}
