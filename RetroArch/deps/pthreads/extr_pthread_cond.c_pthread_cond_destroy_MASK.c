
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* pthread_cond_t ;
struct TYPE_7__ {scalar_t__ nWaitersBlocked; scalar_t__ nWaitersGone; struct TYPE_7__* prev; struct TYPE_7__* next; int mtxUnblockLock; int semBlockQueue; int semBlockLock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9 (pthread_cond_t * VAR_8)
{
   pthread_cond_t VAR_9;
   int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;




   if (VAR_8 == ((void*)0) || *VAR_8 == ((void*)0))
      return VAR_1;

   if (*VAR_8 != VAR_2)
   {

      FUNC_1 (VAR_5);

      VAR_9 = *VAR_8;






      if (FUNC_8 (&(VAR_9->semBlockLock)) != 0)
         return VAR_3;






      if ((VAR_10 = FUNC_4 (&(VAR_9->mtxUnblockLock))) != 0)
      {
         (void) FUNC_7 (&(VAR_9->semBlockLock));
         return VAR_10;
      }




      if (VAR_9->nWaitersBlocked > VAR_9->nWaitersGone)
      {
         if (FUNC_7 (&(VAR_9->semBlockLock)) != 0)
            VAR_10 = VAR_3;
         VAR_11 = FUNC_5 (&(VAR_9->mtxUnblockLock));
         VAR_12 = VAR_0;
      }
      else
      {



         *VAR_8 = ((void*)0);

         if (FUNC_6 (&(VAR_9->semBlockLock)) != 0)
            VAR_10 = VAR_3;
         if (FUNC_6 (&(VAR_9->semBlockQueue)) != 0)
            VAR_11 = VAR_3;
         if ((VAR_12 = FUNC_5 (&(VAR_9->mtxUnblockLock))) == 0)
            VAR_12 = FUNC_3 (&(VAR_9->mtxUnblockLock));



         if (VAR_4 == VAR_9)
            VAR_4 = VAR_9->next;
         else
            VAR_9->prev->next = VAR_9->next;

         if (VAR_6 == VAR_9)
            VAR_6 = VAR_9->prev;
         else
            VAR_9->next->prev = VAR_9->prev;

         (void) FUNC_0 (VAR_9);
      }

      FUNC_2(VAR_5);

   }
   else
   {




      FUNC_1 (VAR_7);




      if (*VAR_8 == VAR_2)
      {






         *VAR_8 = ((void*)0);
      }
      else
      {




         VAR_10 = VAR_0;
      }

      FUNC_2(VAR_7);
   }

   return ((VAR_10 != 0) ? VAR_10 : ((VAR_11 != 0) ? VAR_11 : VAR_12));
}
