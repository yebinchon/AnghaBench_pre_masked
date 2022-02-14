
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * pthread_rwlockattr_t ;
typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_4__ {int mtxExclusiveAccess; int mtxSharedAccessCompleted; int nMagic; int cndSharedAccessCompleted; scalar_t__ nCompletedSharedAccessCount; scalar_t__ nExclusiveAccessCount; scalar_t__ nSharedAccessCount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5 (pthread_rwlock_t * VAR_3,
      const pthread_rwlockattr_t * VAR_4)
{
   int VAR_5;
   pthread_rwlock_t VAR_6 = 0;

   if (VAR_3 == ((void*)0))
      return VAR_0;

   if (VAR_4 != ((void*)0) && *VAR_4 != ((void*)0))
   {
      VAR_5 = VAR_0;
      goto DONE;
   }

   VAR_6 = (pthread_rwlock_t) FUNC_0 (1, sizeof (*VAR_6));

   if (VAR_6 == ((void*)0))
   {
      VAR_5 = VAR_1;
      goto DONE;
   }

   VAR_6->nSharedAccessCount = 0;
   VAR_6->nExclusiveAccessCount = 0;
   VAR_6->nCompletedSharedAccessCount = 0;

   VAR_5 = FUNC_4 (&VAR_6->mtxExclusiveAccess, ((void*)0));
   if (VAR_5 != 0)
   {
      goto FAIL0;
   }

   VAR_5 = FUNC_4 (&VAR_6->mtxSharedAccessCompleted, ((void*)0));
   if (VAR_5 != 0)
   {
      goto FAIL1;
   }

   VAR_5 = FUNC_2 (&VAR_6->cndSharedAccessCompleted, ((void*)0));
   if (VAR_5 != 0)
   {
      goto FAIL2;
   }

   VAR_6->nMagic = VAR_2;

   VAR_5 = 0;
   goto DONE;

FAIL2:
   (void) FUNC_3 (&(VAR_6->mtxSharedAccessCompleted));

FAIL1:
   (void) FUNC_3 (&(VAR_6->mtxExclusiveAccess));

FAIL0:
   (void) FUNC_1 (VAR_6);
   VAR_6 = ((void*)0);

DONE:
   *VAR_3 = VAR_6;

   return VAR_5;
}
