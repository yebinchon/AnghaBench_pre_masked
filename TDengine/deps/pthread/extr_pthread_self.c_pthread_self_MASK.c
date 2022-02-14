
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ p; int member_1; int * member_0; } ;
struct TYPE_6__ {int implicit; int threadH; int sched_priority; int thread; int detachState; TYPE_2__ ptHandle; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef TYPE_2__ pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,void*) ;
 TYPE_2__ FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 (TYPE_2__) ;

pthread_t
FUNC_9 (void)
{
  pthread_t VAR_4;
  pthread_t VAR_5 = {((void*)0), 0};
  ptw32_thread_t * VAR_6;






  VAR_6 = (ptw32_thread_t *) FUNC_5 (VAR_3);

  if (VAR_6 != ((void*)0))
    {
      VAR_4 = VAR_6->ptHandle;
    }
  else
    {




      VAR_4 = FUNC_7 ();
      VAR_6 = (ptw32_thread_t *) VAR_4.p;

      if (VAR_6 != ((void*)0))
 {






   VAR_6->implicit = 1;
   VAR_6->detachState = VAR_2;
   VAR_6->thread = FUNC_3 ();
   if (!FUNC_0 (FUNC_1 (),
    FUNC_2 (),
    FUNC_1 (),
    &VAR_6->threadH,
    0, VAR_1, VAR_0))
     {





       FUNC_8 (VAR_4);




       return VAR_5;
     }






   VAR_6->sched_priority = FUNC_4 (VAR_6->threadH);
   FUNC_6 (VAR_3, (void *) VAR_6);
 }
    }

  return (VAR_4);

}
