
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_5__ {scalar_t__ nMagic; scalar_t__ nExclusiveAccessCount; int nSharedAccessCount; int mtxSharedAccessCompleted; int cndSharedAccessCompleted; int nCompletedSharedAccessCount; int mtxExclusiveAccess; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6 (pthread_rwlock_t * VAR_5)
{
   int VAR_6;
   pthread_rwlock_t VAR_7;

   if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
      return VAR_1;







   if (*VAR_5 == VAR_3)
   {
      VAR_6 = FUNC_0 (VAR_5);

      if (VAR_6 != 0 && VAR_6 != VAR_0)
         return VAR_6;
   }

   VAR_7 = *VAR_5;

   if (VAR_7->nMagic != VAR_2)
      return VAR_1;

   if ((VAR_6 = FUNC_4 (&(VAR_7->mtxExclusiveAccess))) != 0)
      return VAR_6;

   if ((VAR_6 = FUNC_4 (&(VAR_7->mtxSharedAccessCompleted))) != 0)
   {
      (void) FUNC_5 (&(VAR_7->mtxExclusiveAccess));
      return VAR_6;
   }

   if (VAR_7->nExclusiveAccessCount == 0)
   {
      if (VAR_7->nCompletedSharedAccessCount > 0)
      {
         VAR_7->nSharedAccessCount -= VAR_7->nCompletedSharedAccessCount;
         VAR_7->nCompletedSharedAccessCount = 0;
      }

      if (VAR_7->nSharedAccessCount > 0)
      {
         VAR_7->nCompletedSharedAccessCount = -VAR_7->nSharedAccessCount;





         FUNC_2 (VAR_4, (void *) VAR_7);

         do
         {
            VAR_6 = FUNC_3 (&(VAR_7->cndSharedAccessCompleted),
                  &(VAR_7->mtxSharedAccessCompleted));
         }
         while (VAR_6 == 0 && VAR_7->nCompletedSharedAccessCount < 0);

         FUNC_1 ((VAR_6 != 0) ? 1 : 0);

         if (VAR_6 == 0)
            VAR_7->nSharedAccessCount = 0;
      }
   }

   if (VAR_6 == 0)
      VAR_7->nExclusiveAccessCount++;

   return VAR_6;
}
