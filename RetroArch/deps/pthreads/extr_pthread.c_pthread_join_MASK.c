
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * pthread_t ;
struct TYPE_2__ {scalar_t__ x; scalar_t__ detachState; void* exitStatus; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;

int FUNC_6 (pthread_t VAR_8, void **VAR_9)
{
   int VAR_10;
   pthread_t VAR_11;
   pte_thread_t * VAR_12 = (pte_thread_t *) VAR_8;

   FUNC_0 (VAR_7);

   if (((void*)0) == VAR_12
         || ((pte_thread_t*)VAR_8)->x != VAR_12->x)
      VAR_10 = VAR_3;
   else if (VAR_6 == VAR_12->detachState)
      VAR_10 = VAR_1;
   else
      VAR_10 = 0;

   FUNC_1(VAR_7);

   if (VAR_10 == 0)
   {



      VAR_11 = FUNC_5();

      if (((void*)0) == VAR_11)
         VAR_10 = VAR_2;
      else if (FUNC_4 (VAR_11, VAR_8))
         VAR_10 = VAR_0;
      else
      {
         VAR_10 = FUNC_2(VAR_12->threadId);

         if (VAR_5 == VAR_10)
         {
            if (VAR_9 != ((void*)0))
               *VAR_9 = VAR_12->exitStatus;






            VAR_10 = FUNC_3 (VAR_8);
         }

         else if (VAR_10 == VAR_4)
            VAR_10 = 0;
         else
            VAR_10 = VAR_3;
      }
   }

   return (VAR_10);
}
