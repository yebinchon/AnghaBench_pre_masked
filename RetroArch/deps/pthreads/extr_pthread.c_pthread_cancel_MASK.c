
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * pthread_t ;
struct TYPE_2__ {scalar_t__ cancelType; scalar_t__ cancelState; scalar_t__ state; int cancelLock; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;

int FUNC_7 (pthread_t VAR_10)
{
   int VAR_11;
   int VAR_12;
   pthread_t VAR_13;
   pte_thread_t * VAR_14;

   VAR_11 = FUNC_3 (VAR_10, 0);

   if (0 != VAR_11)
      return VAR_11;

   if ((VAR_13 = FUNC_6 ()) == ((void*)0))
      return VAR_0;
   VAR_12 = FUNC_2 (VAR_10, VAR_13);

   VAR_14 = (pte_thread_t *) VAR_10;




   (void) FUNC_4 (&VAR_14->cancelLock);

   if (VAR_14->cancelType == VAR_5
         && VAR_14->cancelState == VAR_7
         && VAR_14->state < VAR_9)
   {
      if (VAR_12)
      {
         VAR_14->state = VAR_9;
         VAR_14->cancelState = VAR_6;

         (void) FUNC_5 (&VAR_14->cancelLock);
         FUNC_1 (VAR_3);


      }
      else
      {
         (void) FUNC_5 (&VAR_14->cancelLock);

         VAR_11 = VAR_1;

      }
   }
   else
   {



      if (VAR_14->state < VAR_8)
      {
         VAR_14->state = VAR_8;

         if (FUNC_0(VAR_14->threadId) != VAR_4)
            VAR_11 = VAR_2;
      }
      else if (VAR_14->state >= VAR_9)
         VAR_11 = VAR_2;

      (void) FUNC_5 (&VAR_14->cancelLock);
   }

   return (VAR_11);
}
