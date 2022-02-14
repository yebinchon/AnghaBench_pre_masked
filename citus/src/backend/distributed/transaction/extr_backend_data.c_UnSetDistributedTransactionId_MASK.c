
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int initiatorNodeIdentifier; int transactionOriginator; } ;
struct TYPE_4__ {int transactionOriginator; scalar_t__ timestamp; scalar_t__ transactionNumber; scalar_t__ initiatorNodeIdentifier; } ;
struct TYPE_6__ {int mutex; TYPE_2__ citusBackend; TYPE_1__ transactionId; scalar_t__ userId; scalar_t__ databaseId; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void)
{

 if (VAR_0)
 {
  FUNC_0(&VAR_0->mutex);

  VAR_0->databaseId = 0;
  VAR_0->userId = 0;
  VAR_0->transactionId.initiatorNodeIdentifier = 0;
  VAR_0->transactionId.transactionOriginator = 0;
  VAR_0->transactionId.transactionNumber = 0;
  VAR_0->transactionId.timestamp = 0;

  VAR_0->citusBackend.initiatorNodeIdentifier = -1;
  VAR_0->citusBackend.transactionOriginator = 0;

  FUNC_1(&VAR_0->mutex);
 }
}
