
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cancelState; scalar_t__ cancelType; int cancelEvent; int state; int stateLock; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
struct TYPE_5__ {scalar_t__ p; } ;
typedef TYPE_2__ pthread_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_2__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6 (int VAR_7, int *VAR_8)
{
  ptw32_mcs_local_node_t VAR_9;
  int VAR_10 = 0;
  pthread_t VAR_11 = FUNC_2 ();
  ptw32_thread_t * VAR_12 = (ptw32_thread_t *) VAR_11.p;

  if (VAR_12 == ((void*)0)
      || (VAR_7 != VAR_3 && VAR_7 != VAR_2))
    {
      return VAR_0;
    }




  FUNC_3 (&VAR_12->stateLock, &VAR_9);

  if (VAR_8 != ((void*)0))
    {
      *VAR_8 = VAR_12->cancelState;
    }

  VAR_12->cancelState = VAR_7;




  if (VAR_7 == VAR_3
      && VAR_12->cancelType == VAR_1
      && FUNC_1 (VAR_12->cancelEvent, 0) == VAR_6)
    {
      VAR_12->state = VAR_5;
      VAR_12->cancelState = VAR_2;
      FUNC_0 (VAR_12->cancelEvent);
      FUNC_4 (&VAR_9);
      FUNC_5 (VAR_4);


    }

  FUNC_4 (&VAR_9);

  return (VAR_10);

}
