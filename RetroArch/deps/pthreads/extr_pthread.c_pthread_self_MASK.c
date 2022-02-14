
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_t ;
struct TYPE_5__ {int implicit; scalar_t__ sched_priority; int threadId; int detachState; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

pthread_t FUNC_4 (void)
{
   pthread_t VAR_2;
   pte_thread_t * VAR_3;

   VAR_3 = (pte_thread_t *) FUNC_2 (VAR_1);

   if (VAR_3 != ((void*)0))
      VAR_2 = VAR_3;
   else
   {
      VAR_2 = FUNC_0 ();
      VAR_3 = (pte_thread_t *) VAR_2;

      if (VAR_3 != ((void*)0))
      {






         VAR_3->implicit = 1;
         VAR_3->detachState = VAR_0;

         VAR_3->threadId = FUNC_1();




         VAR_3->sched_priority = 0;

         FUNC_3 (VAR_1, (void *) VAR_3);
      }
   }

   return (VAR_2);
}
