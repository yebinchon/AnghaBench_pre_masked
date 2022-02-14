
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {long tv_sec; long tv_nsec; } ;
typedef int * pthread_t ;
struct TYPE_2__ {scalar_t__ cancelState; scalar_t__ state; int cancelLock; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;
typedef scalar_t__ pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7 (struct timespec *VAR_9)
{
   unsigned int VAR_10;
   unsigned int VAR_11;
   unsigned int VAR_12;
   pthread_t VAR_13;
   pte_thread_t * VAR_14;

   if (VAR_9 == ((void*)0))
      return VAR_0;

   if (VAR_9->tv_sec == 0L && VAR_9->tv_nsec == 0L)
   {
      FUNC_6 ();
      FUNC_1 (1);
      FUNC_6 ();
      return (0);
   }


   VAR_11 = VAR_9->tv_sec * 1000L;


   VAR_12 = (VAR_9->tv_nsec + 999999L) / 1000000L;

   VAR_10 = VAR_11 + VAR_12;

   if (((void*)0) == (VAR_13 = FUNC_5 ()))
      return VAR_1;

   VAR_14 = (pte_thread_t *) VAR_13;

   if (VAR_14->cancelState == VAR_7)
   {
      pte_osResult VAR_15;




      VAR_15 = FUNC_0(VAR_14->threadId);

      if (VAR_15 == VAR_4)
      {



         (void) FUNC_3 (&VAR_14->cancelLock);
         if (VAR_14->state < VAR_8)
         {
            VAR_14->state = VAR_8;
            VAR_14->cancelState = VAR_6;
            (void) FUNC_4 (&VAR_14->cancelLock);

            FUNC_2 (VAR_3);
         }

         (void) FUNC_4 (&VAR_14->cancelLock);
         return VAR_2;
      }
      else if (VAR_15 != VAR_5)
         return VAR_0;
   }
   else

      FUNC_1 (VAR_10);

   return (0);
}
