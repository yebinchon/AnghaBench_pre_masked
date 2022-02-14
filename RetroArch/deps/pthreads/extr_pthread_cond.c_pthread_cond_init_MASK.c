
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* pthread_condattr_t ;
typedef TYPE_2__* pthread_cond_t ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* prev; int semBlockLock; int semBlockQueue; int mtxUnblockLock; scalar_t__ nWaitersGone; scalar_t__ nWaitersToUnblock; scalar_t__ nWaitersBlocked; } ;
struct TYPE_8__ {scalar_t__ pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;

int FUNC_7 (pthread_cond_t * VAR_8, const pthread_condattr_t * VAR_9)
{
   int VAR_10;
   pthread_cond_t VAR_11 = ((void*)0);

   if (VAR_8 == ((void*)0))
      return VAR_0;

   if ((VAR_9 != ((void*)0) && *VAR_9 != ((void*)0)) &&
         ((*VAR_9)->pshared == VAR_3))
   {




      VAR_10 = VAR_2;
      goto DONE;
   }

   VAR_11 = (pthread_cond_t) FUNC_0 (1, sizeof (*VAR_11));

   if (VAR_11 == ((void*)0))
   {
      VAR_10 = VAR_1;
      goto DONE;
   }

   VAR_11->nWaitersBlocked = 0;
   VAR_11->nWaitersToUnblock = 0;
   VAR_11->nWaitersGone = 0;

   if (FUNC_6 (&(VAR_11->semBlockLock), 0, 1) != 0)
   {
      VAR_10 = VAR_4;
      goto FAIL0;
   }

   if (FUNC_6 (&(VAR_11->semBlockQueue), 0, 0) != 0)
   {
      VAR_10 = VAR_4;
      goto FAIL1;
   }

   if ((VAR_10 = FUNC_4 (&(VAR_11->mtxUnblockLock), 0)) != 0)
   {
      goto FAIL2;
   }

   VAR_10 = 0;

   goto DONE;






FAIL2:
   (void) FUNC_5 (&(VAR_11->semBlockQueue));

FAIL1:
   (void) FUNC_5 (&(VAR_11->semBlockLock));

FAIL0:
   (void) FUNC_1 (VAR_11);
   VAR_11 = ((void*)0);

DONE:
   if (0 == VAR_10)
   {

      FUNC_2 (VAR_6);

      VAR_11->next = ((void*)0);
      VAR_11->prev = VAR_7;

      if (VAR_7 != ((void*)0))
         VAR_7->next = VAR_11;

      VAR_7 = VAR_11;

      if (VAR_5 == ((void*)0))
         VAR_5 = VAR_11;

      FUNC_3(VAR_6);
   }

   *VAR_8 = VAR_11;

   return VAR_10;
}
