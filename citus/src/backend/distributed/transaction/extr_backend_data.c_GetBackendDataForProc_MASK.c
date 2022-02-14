
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* backends; } ;
struct TYPE_11__ {int mutex; } ;
struct TYPE_10__ {int pgprocno; TYPE_1__* lockGroupLeader; } ;
struct TYPE_9__ {int pgprocno; } ;
typedef TYPE_2__ PGPROC ;
typedef TYPE_3__ BackendData ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

void
FUNC_3(PGPROC *VAR_1, BackendData *VAR_2)
{
 BackendData *VAR_3 = ((void*)0);
 int VAR_4 = VAR_1->pgprocno;

 if (VAR_1->lockGroupLeader != ((void*)0))
 {
  VAR_4 = VAR_1->lockGroupLeader->pgprocno;
 }

 VAR_3 = &VAR_0->backends[VAR_4];

 FUNC_0(&VAR_3->mutex);

 FUNC_2(VAR_2, VAR_3, sizeof(BackendData));

 FUNC_1(&VAR_3->mutex);
}
