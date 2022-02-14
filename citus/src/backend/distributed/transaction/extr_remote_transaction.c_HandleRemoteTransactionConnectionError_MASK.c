
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transactionFailed; scalar_t__ transactionCritical; } ;
struct TYPE_6__ {TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef TYPE_2__ MultiConnection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;

void
FUNC_1(MultiConnection *VAR_2, bool VAR_3)
{
 RemoteTransaction *VAR_4 = &VAR_2->remoteTransaction;

 VAR_4->transactionFailed = 1;

 if (VAR_4->transactionCritical && VAR_3)
 {
  FUNC_0(VAR_2, VAR_0);
 }
 else
 {
  FUNC_0(VAR_2, VAR_1);
 }
}
