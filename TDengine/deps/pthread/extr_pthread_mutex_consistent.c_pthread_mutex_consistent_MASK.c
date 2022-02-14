
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* pthread_mutex_t ;
struct TYPE_5__ {scalar_t__ kind; TYPE_1__* robustNode; } ;
struct TYPE_4__ {int stateInconsistent; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_1 (pthread_mutex_t* VAR_3)
{
  pthread_mutex_t VAR_4 = *VAR_3;
  int VAR_5 = 0;




  if (VAR_4 == ((void*)0))
    {
      return VAR_0;
    }

  if (VAR_4->kind >= 0
        || (PTW32_INTERLOCKED_LONG)VAR_2 != FUNC_0(
                                                (PTW32_INTERLOCKED_LONGPTR)&VAR_4->robustNode->stateInconsistent,
                                                (PTW32_INTERLOCKED_LONG)VAR_1,
                                                (PTW32_INTERLOCKED_LONG)VAR_2))
    {
      VAR_5 = VAR_0;
    }

  return (VAR_5);
}
