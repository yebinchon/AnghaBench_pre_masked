
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* backends; } ;
struct TYPE_6__ {scalar_t__ transactionNumber; } ;
struct TYPE_8__ {int cancelledDueToDeadlock; int mutex; TYPE_1__ transactionId; } ;
struct TYPE_7__ {size_t pgprocno; int pid; } ;
typedef TYPE_2__ PGPROC ;
typedef TYPE_3__ BackendData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void
FUNC_5(PGPROC *VAR_3)
{
 BackendData *VAR_4 = &VAR_2->backends[VAR_3->pgprocno];


 if (!VAR_4)
 {
  return;
 }

 FUNC_0(&VAR_4->mutex);


 if (VAR_4->transactionId.transactionNumber != 0)
 {
  VAR_4->cancelledDueToDeadlock = 1;
  FUNC_1(&VAR_4->mutex);

  if (FUNC_4(VAR_3->pid, VAR_0) != 0)
  {
   FUNC_2(VAR_1,
     (FUNC_3("attempted to cancel this backend (pid: %d) to resolve a "
       "distributed deadlock but the backend could not "
       "be cancelled", VAR_3->pid)));
  }
 }
 else
 {
  FUNC_1(&VAR_4->mutex);
 }
}
