
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* allPgXact; } ;
struct TYPE_10__ {scalar_t__ locktag_type; } ;
struct TYPE_14__ {TYPE_2__ tag; } ;
struct TYPE_13__ {scalar_t__ waitStatus; size_t pgprocno; TYPE_3__* waitProcLock; } ;
struct TYPE_12__ {int vacuumFlags; } ;
struct TYPE_9__ {TYPE_6__* myLock; } ;
struct TYPE_11__ {TYPE_1__ tag; } ;
typedef TYPE_3__ PROCLOCK ;
typedef TYPE_4__ PGXACT ;
typedef TYPE_5__ PGPROC ;
typedef TYPE_6__ LOCK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_0(PGPROC *VAR_6)
{
 PROCLOCK *VAR_7 = ((void*)0);
 LOCK *VAR_8 = ((void*)0);
 PGXACT *VAR_9 = ((void*)0);

 if (VAR_6->waitStatus != VAR_5)
 {
  return 0;
 }


 VAR_9 = &VAR_4->allPgXact[VAR_6->pgprocno];
 if (VAR_9->vacuumFlags & VAR_3)
 {
  return 1;
 }

 VAR_7 = VAR_6->waitProcLock;
 VAR_8 = VAR_7->tag.myLock;

 return VAR_8->tag.locktag_type == VAR_1 ||
     VAR_8->tag.locktag_type == VAR_0 ||
     VAR_8->tag.locktag_type == VAR_2;
}
