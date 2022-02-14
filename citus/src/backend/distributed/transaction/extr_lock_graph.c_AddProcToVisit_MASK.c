
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t pgprocno; } ;
struct TYPE_5__ {int* procAdded; scalar_t__ procCount; TYPE_2__** procs; } ;
typedef TYPE_1__ PROCStack ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(PROCStack *VAR_0, PGPROC *VAR_1)
{
 if (VAR_0->procAdded[VAR_1->pgprocno])
 {
  return;
 }

 FUNC_0(VAR_0->procCount < FUNC_1());

 VAR_0->procs[VAR_0->procCount++] = VAR_1;
 VAR_0->procAdded[VAR_1->pgprocno] = 1;
}
