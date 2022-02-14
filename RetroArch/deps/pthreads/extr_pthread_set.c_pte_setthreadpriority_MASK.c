
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {int sched_priority; int threadLock; int threadId; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int
FUNC_5 (pthread_t VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4;
   int VAR_5;
   pte_thread_t * VAR_6 = (pte_thread_t *) VAR_1;

   VAR_4 = VAR_3;


   if (VAR_4 < FUNC_4 (VAR_2) ||
         VAR_4 > FUNC_3 (VAR_2))
      return VAR_0;

   VAR_5 = FUNC_1 (&VAR_6->threadLock);

   if (0 == VAR_5)
   {


      if (0 != FUNC_0(VAR_6->threadId, VAR_4))
         VAR_5 = VAR_0;
      else
      {




         VAR_6->sched_priority = VAR_3;
      }

      (void) FUNC_2 (&VAR_6->threadLock);
   }

   return VAR_5;
}
