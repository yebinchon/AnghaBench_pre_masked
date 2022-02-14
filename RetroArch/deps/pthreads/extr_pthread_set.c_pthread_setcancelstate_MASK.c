
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {int cancelState; scalar_t__ cancelType; int cancelLock; int state; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5 (int VAR_7, int *VAR_8)
{
   int VAR_9 = 0;
   pthread_t VAR_10 = FUNC_4 ();
   pte_thread_t * VAR_11 = (pte_thread_t *) VAR_10;

   if (VAR_11 == ((void*)0)
         || (VAR_7 != VAR_5 && VAR_7 != VAR_4))
      return VAR_0;




   (void) FUNC_2 (&VAR_11->cancelLock);

   if (VAR_8 != ((void*)0))
      *VAR_8 = VAR_11->cancelState;

   VAR_11->cancelState = VAR_7;




   if (VAR_7 == VAR_5
         && (VAR_11->cancelType == VAR_3)
         && (FUNC_0(VAR_11->threadId) == VAR_2) )
   {
      VAR_11->state = VAR_6;
      VAR_11->cancelState = VAR_4;
      (void) FUNC_3 (&VAR_11->cancelLock);
      FUNC_1 (VAR_1);


   }

   (void) FUNC_3 (&VAR_11->cancelLock);

   return (VAR_9);
}
