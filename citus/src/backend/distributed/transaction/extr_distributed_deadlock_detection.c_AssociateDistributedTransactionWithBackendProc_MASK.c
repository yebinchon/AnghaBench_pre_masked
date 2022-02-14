
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ transactionNumber; } ;
struct TYPE_12__ {TYPE_3__* initiatorProc; TYPE_1__ transactionId; } ;
typedef TYPE_2__ TransactionNode ;
struct TYPE_16__ {TYPE_3__* allProcs; } ;
struct TYPE_14__ {scalar_t__ transactionNumber; scalar_t__ initiatorNodeIdentifier; int transactionOriginator; } ;
struct TYPE_15__ {TYPE_4__ transactionId; } ;
struct TYPE_13__ {scalar_t__ pid; } ;
typedef TYPE_3__ PGPROC ;
typedef TYPE_4__ DistributedTransactionId ;
typedef TYPE_5__ BackendData ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;

__attribute__((used)) static bool
FUNC_4(TransactionNode *VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
 {
  PGPROC *VAR_4 = &VAR_1->allProcs[VAR_3];
  BackendData VAR_5;
  DistributedTransactionId *VAR_6 = ((void*)0);


  if (VAR_4->pid <= 0)
  {
   continue;
  }

  FUNC_1(VAR_4, &VAR_5);


  if (!FUNC_3(&VAR_5))
  {
   continue;
  }

  VAR_6 = &VAR_5.transactionId;

  if (VAR_6->transactionNumber !=
   VAR_2->transactionId.transactionNumber)
  {
   continue;
  }


  if (!VAR_6->transactionOriginator)
  {
   continue;
  }


  FUNC_0(VAR_6->initiatorNodeIdentifier == FUNC_2());

  VAR_2->initiatorProc = VAR_4;

  return 1;
 }

 return 0;
}
