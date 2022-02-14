
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_cond_t ;
struct TYPE_4__ {int nWaitersToUnblock; int nWaitersBlocked; int nWaitersGone; int semBlockQueue; int mtxUnblockLock; int semBlockLock; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (pthread_cond_t * VAR_3, int VAR_4)
{
   int VAR_5;
   pthread_cond_t VAR_6;
   int VAR_7;

   if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0))
      return VAR_0;

   VAR_6 = *VAR_3;





   if (VAR_6 == VAR_1)
      return 0;

   if ((VAR_5 = FUNC_0 (&(VAR_6->mtxUnblockLock))) != 0)
      return VAR_5;

   if (0 != VAR_6->nWaitersToUnblock)
   {
      if (0 == VAR_6->nWaitersBlocked)
         return FUNC_1 (&(VAR_6->mtxUnblockLock));

      if (VAR_4)
      {
         VAR_6->nWaitersToUnblock += (VAR_7 = VAR_6->nWaitersBlocked);
         VAR_6->nWaitersBlocked = 0;
      }
      else
      {
         VAR_7 = 1;
         VAR_6->nWaitersToUnblock++;
         VAR_6->nWaitersBlocked--;
      }
   }
   else if (VAR_6->nWaitersBlocked > VAR_6->nWaitersGone)
   {


      if (FUNC_3 (&(VAR_6->semBlockLock)) != 0)
      {
         VAR_5 = VAR_2;
         (void) FUNC_1 (&(VAR_6->mtxUnblockLock));
         return VAR_5;
      }
      if (0 != VAR_6->nWaitersGone)
      {
         VAR_6->nWaitersBlocked -= VAR_6->nWaitersGone;
         VAR_6->nWaitersGone = 0;
      }
      if (VAR_4)
      {
         VAR_7 = VAR_6->nWaitersToUnblock = VAR_6->nWaitersBlocked;
         VAR_6->nWaitersBlocked = 0;
      }
      else
      {
         VAR_7 = VAR_6->nWaitersToUnblock = 1;
         VAR_6->nWaitersBlocked--;
      }
   }
   else
      return FUNC_1 (&(VAR_6->mtxUnblockLock));

   if ((VAR_5 = FUNC_1 (&(VAR_6->mtxUnblockLock))) == 0)
   {
      if (FUNC_2 (&(VAR_6->semBlockQueue), VAR_7) != 0)
         VAR_5 = VAR_2;
   }

   return VAR_5;
}
