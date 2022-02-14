
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_t ;
struct TYPE_5__ {void* threadLock; void* cancelLock; int cancelType; int cancelState; int detachState; int sched_priority; scalar_t__ x; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;

pthread_t FUNC_3 (void)
{
   pthread_t VAR_4 = ((void*)0);
   pte_thread_t * VAR_5 = ((void*)0);




   pthread_t VAR_6 = FUNC_2 ();

   if (((void*)0) != VAR_6)
      VAR_5 = (pte_thread_t *) VAR_6;
   else
   {

      VAR_5 = (pte_thread_t *) FUNC_0 (1, sizeof(pte_thread_t));

      if (VAR_5 == ((void*)0))
         return VAR_4;


      VAR_6 = VAR_5;
      VAR_5->x = 0;
   }


   VAR_5->sched_priority = FUNC_1();

   VAR_5->detachState = VAR_2;
   VAR_5->cancelState = VAR_1;
   VAR_5->cancelType = VAR_0;
   VAR_5->cancelLock = VAR_3;
   VAR_5->threadLock = VAR_3;

   return VAR_6;

}
