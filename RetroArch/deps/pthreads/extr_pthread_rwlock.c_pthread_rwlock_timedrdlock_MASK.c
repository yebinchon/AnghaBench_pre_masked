
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_5__ {scalar_t__ nMagic; scalar_t__ nSharedAccessCount; scalar_t__ nCompletedSharedAccessCount; int mtxExclusiveAccess; int mtxSharedAccessCompleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *,struct timespec const*) ;
 int FUNC_2 (int *) ;

int FUNC_3 (pthread_rwlock_t * VAR_6,
                            const struct timespec *VAR_7)
{
   int VAR_8;
   pthread_rwlock_t VAR_9;

   if (VAR_6 == ((void*)0) || *VAR_6 == ((void*)0))
      return VAR_1;







   if (*VAR_6 == VAR_5)
   {
      VAR_8 = FUNC_0 (VAR_6);

      if (VAR_8 != 0 && VAR_8 != VAR_0)
      {
         return VAR_8;
      }
   }

   VAR_9 = *VAR_6;

   if (VAR_9->nMagic != VAR_4)
   {
      return VAR_1;
   }

   if ((VAR_8 =
            FUNC_1 (&(VAR_9->mtxExclusiveAccess), VAR_7)) != 0)
   {
      return VAR_8;
   }

   if (++VAR_9->nSharedAccessCount == VAR_3)
   {
      if ((VAR_8 =
               FUNC_1 (&(VAR_9->mtxSharedAccessCompleted),
                  VAR_7)) != 0)
      {
         if (VAR_8 == VAR_2)
         {
            ++VAR_9->nCompletedSharedAccessCount;
         }
         (void) FUNC_2 (&(VAR_9->mtxExclusiveAccess));
         return VAR_8;
      }

      VAR_9->nSharedAccessCount -= VAR_9->nCompletedSharedAccessCount;
      VAR_9->nCompletedSharedAccessCount = 0;

      if ((VAR_8 =
               FUNC_2 (&(VAR_9->mtxSharedAccessCompleted))) != 0)
      {
         (void) FUNC_2 (&(VAR_9->mtxExclusiveAccess));
         return VAR_8;
      }
   }

   return (FUNC_2 (&(VAR_9->mtxExclusiveAccess)));
}
