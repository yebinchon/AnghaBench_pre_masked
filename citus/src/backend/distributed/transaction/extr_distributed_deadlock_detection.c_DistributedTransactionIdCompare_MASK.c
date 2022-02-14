
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ transactionNumber; scalar_t__ initiatorNodeIdentifier; int timestamp; } ;
typedef int Size ;
typedef TYPE_1__ DistributedTransactionId ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, Size VAR_2)
{
 DistributedTransactionId *VAR_3 = (DistributedTransactionId *) VAR_0;
 DistributedTransactionId *VAR_4 = (DistributedTransactionId *) VAR_1;

 if (!FUNC_0(VAR_4->timestamp, VAR_3->timestamp, 0))
 {

  return -1;
 }
 else if (!FUNC_0(VAR_3->timestamp, VAR_4->timestamp, 0))
 {

  return 1;
 }
 else if (VAR_3->transactionNumber < VAR_4->transactionNumber)
 {
  return -1;
 }
 else if (VAR_3->transactionNumber > VAR_4->transactionNumber)
 {
  return 1;
 }
 else if (VAR_3->initiatorNodeIdentifier < VAR_4->initiatorNodeIdentifier)
 {
  return -1;
 }
 else if (VAR_3->initiatorNodeIdentifier > VAR_4->initiatorNodeIdentifier)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
