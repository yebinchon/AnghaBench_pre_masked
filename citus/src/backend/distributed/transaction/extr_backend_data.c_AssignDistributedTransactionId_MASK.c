
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int pg_atomic_uint64 ;
typedef int TimestampTz ;
struct TYPE_6__ {int initiatorNodeIdentifier; int transactionOriginator; } ;
struct TYPE_5__ {int initiatorNodeIdentifier; int transactionOriginator; int timestamp; int transactionNumber; } ;
struct TYPE_8__ {int mutex; TYPE_2__ citusBackend; TYPE_1__ transactionId; int userId; int databaseId; } ;
struct TYPE_7__ {int nextTransactionNumber; } ;
typedef int Oid ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_5 (int *,int) ;

void
FUNC_6(void)
{
 pg_atomic_uint64 *VAR_3 =
  &VAR_2->nextTransactionNumber;

 uint64 VAR_4 = FUNC_5(VAR_3, 1);
 int VAR_5 = FUNC_1();
 TimestampTz VAR_6 = FUNC_0();
 Oid VAR_7 = FUNC_2();

 FUNC_3(&VAR_0->mutex);

 VAR_0->databaseId = VAR_1;
 VAR_0->userId = VAR_7;

 VAR_0->transactionId.initiatorNodeIdentifier = VAR_5;
 VAR_0->transactionId.transactionOriginator = 1;
 VAR_0->transactionId.transactionNumber = VAR_4;
 VAR_0->transactionId.timestamp = VAR_6;

 VAR_0->citusBackend.initiatorNodeIdentifier = VAR_5;
 VAR_0->citusBackend.transactionOriginator = 1;

 FUNC_4(&VAR_0->mutex);
}
