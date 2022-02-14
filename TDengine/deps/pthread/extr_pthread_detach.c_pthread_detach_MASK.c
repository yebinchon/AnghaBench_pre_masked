
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x; } ;
struct TYPE_7__ {scalar_t__ detachState; scalar_t__ state; int threadH; int stateLock; TYPE_1__ ptHandle; } ;
typedef TYPE_2__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_8__ {scalar_t__ x; scalar_t__ p; } ;
typedef TYPE_3__ pthread_t ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__) ;
 int VAR_7 ;

int
FUNC_4 (pthread_t VAR_8)
{
  int VAR_9;
  BOOL VAR_10 = VAR_4;
  ptw32_thread_t * VAR_11 = (ptw32_thread_t *) VAR_8.p;
  ptw32_mcs_local_node_t VAR_12;

  FUNC_1(&VAR_7, &VAR_12);

  if (((void*)0) == VAR_11
      || VAR_8.x != VAR_11->ptHandle.x)
    {
      VAR_9 = VAR_1;
    }
  else if (VAR_3 == VAR_11->detachState)
    {
      VAR_9 = VAR_0;
    }
  else
    {
      ptw32_mcs_local_node_t VAR_13;





      VAR_9 = 0;

      FUNC_1 (&VAR_11->stateLock, &VAR_13);
      if (VAR_11->state != VAR_6)
        {
          VAR_11->detachState = VAR_3;
        }
      else if (VAR_11->detachState != VAR_3)
        {



          VAR_10 = VAR_5;
        }
      FUNC_2 (&VAR_13);
    }

  FUNC_2(&VAR_12);

  if (VAR_9 == 0)
    {


      if (VAR_10)
 {



   (void) FUNC_0(VAR_11->threadH, VAR_2);
   FUNC_3 (VAR_8);
 }
    }

  return (VAR_9);

}
