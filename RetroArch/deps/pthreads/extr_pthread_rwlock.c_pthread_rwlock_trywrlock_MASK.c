
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_5__ {scalar_t__ nMagic; int nExclusiveAccessCount; scalar_t__ nCompletedSharedAccessCount; scalar_t__ nSharedAccessCount; int mtxExclusiveAccess; int mtxSharedAccessCompleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (pthread_rwlock_t * VAR_4)
{
   int VAR_5, VAR_6;
   pthread_rwlock_t VAR_7;

   if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
      return VAR_1;







   if (*VAR_4 == VAR_3)
   {
      VAR_5 = FUNC_0 (VAR_4);

      if (VAR_5 != 0 && VAR_5 != VAR_0)
      {
         return VAR_5;
      }
   }

   VAR_7 = *VAR_4;

   if (VAR_7->nMagic != VAR_2)
   {
      return VAR_1;
   }

   if ((VAR_5 = FUNC_1 (&(VAR_7->mtxExclusiveAccess))) != 0)
   {
      return VAR_5;
   }

   if ((VAR_5 =
            FUNC_1 (&(VAR_7->mtxSharedAccessCompleted))) != 0)
   {
      VAR_6 = FUNC_2 (&(VAR_7->mtxExclusiveAccess));
      return ((VAR_6 != 0) ? VAR_6 : VAR_5);
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
         if ((VAR_5 =
                  FUNC_2 (&(VAR_7->mtxSharedAccessCompleted))) != 0)
         {
            (void) FUNC_2 (&(VAR_7->mtxExclusiveAccess));
            return VAR_5;
         }

         if ((VAR_5 =
                  FUNC_2 (&(VAR_7->mtxExclusiveAccess))) == 0)
         {
            VAR_5 = VAR_0;
         }
      }
      else
      {
         VAR_7->nExclusiveAccessCount = 1;
      }
   }
   else
   {
      VAR_5 = VAR_0;
   }

   return VAR_5;
}
