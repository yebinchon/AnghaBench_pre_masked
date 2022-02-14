
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timestamp; int transactionNumber; int transactionOriginator; int initiatorNodeIdentifier; } ;
struct TYPE_8__ {TYPE_1__ transactionId; } ;
struct TYPE_7__ {int timestamp; int transactionNumber; int transactionOriginator; int initiatorNodeIdentifier; } ;
typedef TYPE_2__ DistributedTransactionId ;
typedef TYPE_3__ BackendData ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

DistributedTransactionId *
FUNC_2(void)
{
 DistributedTransactionId *VAR_1 =
  (DistributedTransactionId *) FUNC_1(sizeof(DistributedTransactionId));
 BackendData VAR_2;

 FUNC_0(VAR_0, &VAR_2);

 VAR_1->initiatorNodeIdentifier =
  VAR_2.transactionId.initiatorNodeIdentifier;
 VAR_1->transactionOriginator =
  VAR_2.transactionId.transactionOriginator;
 VAR_1->transactionNumber =
  VAR_2.transactionId.transactionNumber;
 VAR_1->timestamp =
  VAR_2.transactionId.timestamp;

 return VAR_1;
}
