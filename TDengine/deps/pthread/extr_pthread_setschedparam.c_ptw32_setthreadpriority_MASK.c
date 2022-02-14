
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sched_priority; int threadH; int threadLock; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_5__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int
FUNC_5 (pthread_t VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8;
  ptw32_mcs_local_node_t VAR_9;
  int VAR_10 = 0;
  ptw32_thread_t * VAR_11 = (ptw32_thread_t *) VAR_5.p;

  VAR_8 = VAR_7;


  if (VAR_8 < FUNC_4 (VAR_6) ||
      VAR_8 > FUNC_3 (VAR_6))
    {
      return VAR_0;
    }






  if (VAR_2 < VAR_8 && VAR_3 > VAR_8)
    {
      VAR_8 = VAR_3;
    }
  else if (VAR_4 > VAR_8
    && VAR_1 < VAR_8)
    {
      VAR_8 = VAR_1;
    }



  FUNC_1 (&VAR_11->threadLock, &VAR_9);


  if (0 == FUNC_0 (VAR_11->threadH, VAR_8))
    {
      VAR_10 = VAR_0;
    }
  else
    {




      VAR_11->sched_priority = VAR_7;
    }

  FUNC_2 (&VAR_9);

  return VAR_10;
}
