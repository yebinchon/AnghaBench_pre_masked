
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {scalar_t__ interlock; TYPE_1__ u; } ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**) ;

int
FUNC_3 (pthread_spinlock_t * VAR_5)
{
  register pthread_spinlock_t VAR_6;

  if (((void*)0) == VAR_5 || ((void*)0) == *VAR_5)
    {
      return (VAR_0);
    }

  if (*VAR_5 == VAR_1)
    {
      int VAR_7;

      if ((VAR_7 = FUNC_2 (VAR_5)) != 0)
 {
   return (VAR_7);
 }
    }

  VAR_6 = *VAR_5;

  while ((PTW32_INTERLOCKED_LONG) VAR_2 ==
  FUNC_0 ((PTW32_INTERLOCKED_LONGPTR) &VAR_6->interlock,
               (PTW32_INTERLOCKED_LONG) VAR_2,
               (PTW32_INTERLOCKED_LONG) VAR_3))
    {
    }

  if (VAR_6->interlock == VAR_2)
    {
      return 0;
    }
  else if (VAR_6->interlock == VAR_4)
    {
      return FUNC_1 (&(VAR_6->u.mutex));
    }

  return VAR_0;
}
