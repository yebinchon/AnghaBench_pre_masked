
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transactionFailed; scalar_t__ transactionCritical; } ;
struct TYPE_5__ {int port; int hostname; TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef TYPE_2__ MultiConnection ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;

void
FUNC_2(MultiConnection *VAR_1, bool VAR_2)
{
 RemoteTransaction *VAR_3 = &VAR_1->remoteTransaction;

 VAR_3->transactionFailed = 1;





 if (VAR_3->transactionCritical && VAR_2)
 {
  FUNC_0(VAR_0, (FUNC_1("failure on connection marked as essential: %s:%d",
          VAR_1->hostname, VAR_1->port)));
 }
}
