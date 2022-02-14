
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* pthread_barrierattr_t ;
typedef TYPE_2__* pthread_barrier_t ;
struct TYPE_7__ {unsigned int nCurrentBarrierHeight; unsigned int nInitialBarrierHeight; int pshared; int semBarrierBreeched; scalar_t__ lock; } ;
struct TYPE_6__ {int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;

int
FUNC_3 (pthread_barrier_t * VAR_3,
        const pthread_barrierattr_t * VAR_4, unsigned int VAR_5)
{
  pthread_barrier_t VAR_6;

  if (VAR_3 == ((void*)0) || VAR_5 == 0)
    {
      return VAR_0;
    }

  if (((void*)0) != (VAR_6 = (pthread_barrier_t) FUNC_0 (1, sizeof (*VAR_6))))
    {
      VAR_6->pshared = (VAR_4 != ((void*)0) && *VAR_4 != ((void*)0)
      ? (*VAR_4)->pshared : VAR_2);

      VAR_6->nCurrentBarrierHeight = VAR_6->nInitialBarrierHeight = VAR_5;
      VAR_6->lock = 0;

      if (0 == FUNC_2 (&(VAR_6->semBarrierBreeched), VAR_6->pshared, 0))
     {
       *VAR_3 = VAR_6;
       return 0;
     }
      (void) FUNC_1 (VAR_6);
    }

  return VAR_1;
}
