
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptw32_mcs_local_node_t ;
typedef TYPE_1__* pthread_barrier_t ;
struct TYPE_3__ {scalar_t__ nCurrentBarrierHeight; int nInitialBarrierHeight; int proxynode; int semBarrierBreeched; int lock; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6 (pthread_barrier_t * VAR_3)
{
  int VAR_4;
  pthread_barrier_t VAR_5;

  ptw32_mcs_local_node_t VAR_6;

  if (VAR_3 == ((void*)0) || *VAR_3 == (pthread_barrier_t) VAR_2)
    {
      return VAR_0;
    }

  FUNC_1(&(*VAR_3)->lock, &VAR_6);

  VAR_5 = *VAR_3;
  if (--VAR_5->nCurrentBarrierHeight == 0)
    {





      FUNC_3(&VAR_5->proxynode, &VAR_6);






      VAR_4 = (VAR_5->nInitialBarrierHeight > 1
                ? FUNC_5 (&(VAR_5->semBarrierBreeched),
         VAR_5->nInitialBarrierHeight - 1) : 0);
    }
  else
    {
      FUNC_2(&VAR_6);
      VAR_4 = FUNC_4 (&(VAR_5->semBarrierBreeched));
    }

  if ((PTW32_INTERLOCKED_LONG)FUNC_0((PTW32_INTERLOCKED_LONGPTR)&VAR_5->nCurrentBarrierHeight)
    == (PTW32_INTERLOCKED_LONG)VAR_5->nInitialBarrierHeight)
    {



      FUNC_2(&VAR_5->proxynode);
      if (0 == VAR_4)
        {
          VAR_4 = VAR_1;
        }
    }

  return (VAR_4);
}
