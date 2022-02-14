
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_2__ {int mtxExclusiveAccess; int mtxSharedAccessCompleted; int nCompletedSharedAccessCount; int nSharedAccessCount; } ;


 int FUNC_0 (int *) ;

void
FUNC_1 (void *VAR_0)
{
  pthread_rwlock_t VAR_1 = (pthread_rwlock_t) VAR_0;

  VAR_1->nSharedAccessCount = -VAR_1->nCompletedSharedAccessCount;
  VAR_1->nCompletedSharedAccessCount = 0;

  (void) FUNC_0 (&(VAR_1->mtxSharedAccessCompleted));
  (void) FUNC_0 (&(VAR_1->mtxExclusiveAccess));
}
