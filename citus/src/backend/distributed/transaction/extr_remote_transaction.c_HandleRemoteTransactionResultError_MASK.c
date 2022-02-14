
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transactionFailed; scalar_t__ transactionCritical; } ;
struct TYPE_6__ {TYPE_1__ remoteTransaction; } ;
typedef TYPE_1__ RemoteTransaction ;
typedef int PGresult ;
typedef TYPE_2__ MultiConnection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_1 ;

void
FUNC_1(MultiConnection *VAR_2, PGresult *VAR_3, bool
           VAR_4)
{
 RemoteTransaction *VAR_5 = &VAR_2->remoteTransaction;

 VAR_5->transactionFailed = 1;

 if (VAR_5->transactionCritical && VAR_4)
 {
  FUNC_0(VAR_2, VAR_3, VAR_0);
 }
 else
 {
  FUNC_0(VAR_2, VAR_3, VAR_1);
 }
}
