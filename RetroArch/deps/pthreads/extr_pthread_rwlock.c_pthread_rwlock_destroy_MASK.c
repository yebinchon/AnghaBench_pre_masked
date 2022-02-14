
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlock_t ;
struct TYPE_5__ {scalar_t__ nMagic; scalar_t__ nExclusiveAccessCount; scalar_t__ nSharedAccessCount; scalar_t__ nCompletedSharedAccessCount; int mtxExclusiveAccess; int mtxSharedAccessCompleted; int cndSharedAccessCompleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7 (pthread_rwlock_t * VAR_5)
{
   pthread_rwlock_t VAR_6;
   int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

   if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
      return VAR_1;

   if (*VAR_5 != VAR_3)
   {
      VAR_6 = *VAR_5;

      if (VAR_6->nMagic != VAR_2)
         return VAR_1;

      if ((VAR_7 = FUNC_5 (&(VAR_6->mtxExclusiveAccess))) != 0)
         return VAR_7;

      if ((VAR_7 =
               FUNC_5 (&(VAR_6->mtxSharedAccessCompleted))) != 0)
      {
         (void) FUNC_6 (&(VAR_6->mtxExclusiveAccess));
         return VAR_7;
      }





      if (VAR_6->nExclusiveAccessCount > 0
            || VAR_6->nSharedAccessCount > VAR_6->nCompletedSharedAccessCount)
      {
         VAR_7 = FUNC_6 (&(VAR_6->mtxSharedAccessCompleted));
         VAR_8 = FUNC_6 (&(VAR_6->mtxExclusiveAccess));
         VAR_9 = VAR_0;
      }
      else
      {
         VAR_6->nMagic = 0;

         if ((VAR_7 =
                  FUNC_6 (&(VAR_6->mtxSharedAccessCompleted))) != 0)
         {
            FUNC_6 (&VAR_6->mtxExclusiveAccess);
            return VAR_7;
         }

         if ((VAR_7 =
                  FUNC_6 (&(VAR_6->mtxExclusiveAccess))) != 0)
            return VAR_7;

         *VAR_5 = ((void*)0);
         VAR_7 = FUNC_3 (&(VAR_6->cndSharedAccessCompleted));
         VAR_8 = FUNC_4 (&(VAR_6->mtxSharedAccessCompleted));
         VAR_9 = FUNC_4 (&(VAR_6->mtxExclusiveAccess));
         (void) FUNC_0 (VAR_6);
      }
   }
   else
   {




      FUNC_1 (VAR_4);




      if (*VAR_5 == VAR_3)
      {






         *VAR_5 = ((void*)0);
      }




      else
         VAR_7 = VAR_0;

      FUNC_2(VAR_4);

   }

   return ((VAR_7 != 0) ? VAR_7 : ((VAR_8 != 0) ? VAR_8 : VAR_9));
}
