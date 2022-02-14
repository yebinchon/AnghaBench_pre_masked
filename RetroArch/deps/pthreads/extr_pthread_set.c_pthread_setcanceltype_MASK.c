
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {int cancelType; scalar_t__ cancelState; int cancelLock; int state; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5 (int VAR_9, int *VAR_10)
{
   int VAR_11 = 0;
   pthread_t VAR_12 = FUNC_4 ();
   pte_thread_t * VAR_13 = (pte_thread_t *) VAR_12;


   if (VAR_9 == VAR_4)
   {



      return VAR_1;
   }


   if (VAR_13 == ((void*)0)
         || (VAR_9 != VAR_5
            && VAR_9 != VAR_4))
      return VAR_0;




   (void) FUNC_2 (&VAR_13->cancelLock);

   if (VAR_10 != ((void*)0))
      *VAR_10 = VAR_13->cancelType;

   VAR_13->cancelType = VAR_9;





   if (VAR_13->cancelState == VAR_7
         && (VAR_9 == VAR_4)
         && (FUNC_0(VAR_13->threadId) == VAR_3) )
   {
      VAR_13->state = VAR_8;
      VAR_13->cancelState = VAR_6;
      (void) FUNC_3 (&VAR_13->cancelLock);
      FUNC_1 (VAR_2);


   }

   (void) FUNC_3 (&VAR_13->cancelLock);

   return (VAR_11);
}
