
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * pthread_t ;
typedef TYPE_2__* pthread_attr_t ;
struct TYPE_10__ {int sched_priority; scalar_t__ threadId; int threadLock; int * keys; int state; int detachState; } ;
typedef TYPE_3__ pte_thread_t ;
typedef scalar_t__ pte_osResult ;
struct TYPE_11__ {void* (* start ) (void*) ;void* arg; int * tid; } ;
typedef TYPE_4__ ThreadParms ;
struct TYPE_8__ {int sched_priority; } ;
struct TYPE_9__ {long stacksize; scalar_t__ inheritsched; TYPE_1__ param; int detachstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,long,int,TYPE_4__*,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;

int FUNC_11 (pthread_t * VAR_9,
                const pthread_attr_t * VAR_10,
                void *(*VAR_11) (void *), void *VAR_12)
{
   pthread_t VAR_13;
   pte_thread_t * VAR_14;
   int VAR_15 = VAR_0;
   int VAR_16 = VAR_3;
   ThreadParms *VAR_17 = ((void*)0);
   long VAR_18;
   int VAR_19 = 0;
   pthread_t VAR_20;
   pte_osResult VAR_21;
   register pthread_attr_t VAR_22 = ((void*)0);
   if (VAR_10 != ((void*)0))
      VAR_22 = *VAR_10;

   if ((VAR_13 = FUNC_2 ()) == ((void*)0))
      goto FAIL0;

   VAR_14 = (pte_thread_t *) VAR_13;

   VAR_19 = VAR_14->sched_priority;

   if ((VAR_17 = (ThreadParms *) FUNC_1 (sizeof (*VAR_17))) == ((void*)0))
      goto FAIL0;

   VAR_17->tid = VAR_13;
   VAR_17->start = VAR_11;
   VAR_17->arg = VAR_12;

   if (VAR_22 != ((void*)0))
   {
      VAR_18 = VAR_22->stacksize;
      VAR_14->detachState = VAR_22->detachstate;
      VAR_19 = VAR_22->param.sched_priority;

      if ( (VAR_19 > FUNC_4()) ||
            (VAR_19 < FUNC_5()) )
      {
         VAR_15 = VAR_1;
         goto FAIL0;
      }
      if (VAR_4 == VAR_22->inheritsched)
      {





         VAR_20 = FUNC_10 ();
         VAR_19 = ((pte_thread_t *) VAR_20)->sched_priority;
      }


   }
   else
   {



      VAR_18 = VAR_5;

   }

   VAR_14->state = VAR_16 ? VAR_6 : VAR_7;

   VAR_14->keys = ((void*)0);
   VAR_15 = FUNC_8 (&VAR_14->threadLock);

   if (VAR_15 == 0)
   {




      VAR_14->sched_priority = VAR_19;

      (void) FUNC_9 (&VAR_14->threadLock);
   }

   VAR_21 = FUNC_3(VAR_8,
         VAR_18,
         VAR_19,
         VAR_17,
         &(VAR_14->threadId));

   if (VAR_21 == VAR_2)
   {
      FUNC_6(VAR_14->threadId);
      VAR_15 = 0;
   }
   else
   {
      VAR_14->threadId = 0;
      VAR_15 = VAR_0;
      goto FAIL0;
   }
FAIL0:
   if (VAR_15 != 0)
   {

      FUNC_7 (VAR_13);
      VAR_14 = ((void*)0);

      if (VAR_17 != ((void*)0))
         FUNC_0 (VAR_17);
   }
   else
   {
      if (VAR_9 != ((void*)0))
         *VAR_9 = VAR_13;
   }

   return (VAR_15);
}
