
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WaitGraph ;
struct TYPE_15__ {scalar_t__ next; } ;
struct TYPE_17__ {int size; TYPE_1__ links; } ;
struct TYPE_20__ {TYPE_3__ waitProcs; } ;
struct TYPE_19__ {int* conflictTab; } ;
struct TYPE_16__ {scalar_t__ next; } ;
struct TYPE_18__ {size_t waitLockMode; TYPE_2__ links; TYPE_6__* waitLock; } ;
typedef TYPE_3__ PROC_QUEUE ;
typedef int PROCStack ;
typedef TYPE_4__ PGPROC ;
typedef TYPE_5__* LockMethod ;
typedef TYPE_6__ LOCK ;


 int FUNC_0 (int *,TYPE_4__*,TYPE_4__*,int *) ;
 TYPE_5__* FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(WaitGraph *VAR_0, PGPROC *VAR_1, PROCStack *VAR_2)
{

 LOCK *VAR_3 = VAR_1->waitLock;


 LockMethod VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_4->conflictTab[VAR_1->waitLockMode];


 PROC_QUEUE *VAR_6 = &(VAR_3->waitProcs);
 int VAR_7 = VAR_6->size;
 PGPROC *VAR_8 = (PGPROC *) VAR_6->links.next;





 while (VAR_7-- > 0 && VAR_8 != VAR_1)
 {
  int VAR_9 = FUNC_5(VAR_8->waitLockMode);





  if (!FUNC_4(VAR_1, VAR_8) &&
   FUNC_2(VAR_9, VAR_5) &&
   !FUNC_3(VAR_8))
  {
   FUNC_0(VAR_0, VAR_1, VAR_8, VAR_2);
  }

  VAR_8 = (PGPROC *) VAR_8->links.next;
 }
}
