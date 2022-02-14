
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_cond_t ;
struct TYPE_4__ {int* resultPtr; int * mutexPtr; TYPE_1__* cv; } ;
typedef TYPE_2__ pte_cond_wait_cleanup_args_t ;
struct TYPE_3__ {int nWaitersToUnblock; int nWaitersGone; int nWaitersBlocked; int semBlockLock; int mtxUnblockLock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (void *VAR_2)
{
   pte_cond_wait_cleanup_args_t *VAR_3 =
      (pte_cond_wait_cleanup_args_t *) VAR_2;
   pthread_cond_t VAR_4 = VAR_3->cv;
   int *VAR_5 = VAR_3->resultPtr;
   int VAR_6;
   int VAR_7;







   if ((VAR_7 = FUNC_0 (&(VAR_4->mtxUnblockLock))) != 0)
   {
      *VAR_5 = VAR_7;
      return;
   }

   if (0 != (VAR_6 = VAR_4->nWaitersToUnblock))
   {
      --(VAR_4->nWaitersToUnblock);
   }
   else if (VAR_0 / 2 == ++(VAR_4->nWaitersGone))
   {


      if (FUNC_3 (&(VAR_4->semBlockLock)) != 0)
      {
         *VAR_5 = VAR_1;





         return;
      }
      VAR_4->nWaitersBlocked -= VAR_4->nWaitersGone;
      if (FUNC_2 (&(VAR_4->semBlockLock)) != 0)
      {
         *VAR_5 = VAR_1;





         return;
      }
      VAR_4->nWaitersGone = 0;
   }

   if ((VAR_7 = FUNC_1 (&(VAR_4->mtxUnblockLock))) != 0)
   {
      *VAR_5 = VAR_7;
      return;
   }

   if (1 == VAR_6)
   {
      if (FUNC_2 (&(VAR_4->semBlockLock)) != 0)
      {
         *VAR_5 = VAR_1;
         return;
      }
   }





   if ((VAR_7 = FUNC_0 (VAR_3->mutexPtr)) != 0)
      *VAR_5 = VAR_7;
}
