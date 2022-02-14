
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef int int64 ;
typedef int TimestampTz ;
struct TYPE_2__ {int timestamp; int transactionNumber; int initiatorNodeIdentifier; } ;
typedef int Size ;
typedef TYPE_1__ DistributedTransactionId ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32
FUNC_3(const void *VAR_0, Size VAR_1)
{
 DistributedTransactionId *VAR_2 = (DistributedTransactionId *) VAR_0;
 uint32 VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_2->initiatorNodeIdentifier);
 VAR_3 = FUNC_1(VAR_3, FUNC_0((unsigned char *) &VAR_2->transactionNumber,
            sizeof(int64)));
 VAR_3 = FUNC_1(VAR_3, FUNC_0((unsigned char *) &VAR_2->timestamp,
            sizeof(TimestampTz)));

 return VAR_3;
}
