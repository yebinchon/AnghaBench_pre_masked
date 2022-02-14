
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x; scalar_t__ p; } ;
struct TYPE_8__ {struct TYPE_8__* prevReuse; int state; TYPE_2__ ptHandle; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
typedef TYPE_2__ pthread_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void
FUNC_3 (pthread_t VAR_6)
{
  ptw32_thread_t * VAR_7 = (ptw32_thread_t *) VAR_6.p;
  pthread_t VAR_8;
  ptw32_mcs_local_node_t VAR_9;

  FUNC_1(&VAR_5, &VAR_9);

  VAR_8 = VAR_7->ptHandle;
  FUNC_0(VAR_7, 0, sizeof(ptw32_thread_t));


  VAR_7->ptHandle = VAR_8;





  VAR_7->ptHandle.x++;


  VAR_7->state = VAR_2;

  VAR_7->prevReuse = VAR_1;

  if (VAR_1 != VAR_3)
    {
      VAR_3->prevReuse = VAR_7;
    }
  else
    {
      VAR_4 = VAR_7;
    }

  VAR_3 = VAR_7;

  FUNC_2(&VAR_9);
}
