
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pthread_spinlock_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {scalar_t__ interlock; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;

int
FUNC_5 (pthread_spinlock_t * VAR_7)
{
  register pthread_spinlock_t VAR_8;
  int VAR_9 = 0;

  if (VAR_7 == ((void*)0) || *VAR_7 == ((void*)0))
    {
      return VAR_1;
    }

  if ((VAR_8 = *VAR_7) != VAR_5)
    {
      if (VAR_8->interlock == VAR_4)
        {
          VAR_9 = FUNC_4 (&(VAR_8->u.mutex));
        }
      else if (VAR_3 !=
               FUNC_0 (
                 & (VAR_8->interlock),
                 (int) VAR_2,
                 VAR_3))
        {
          VAR_9 = VAR_1;
        }

      if (0 == VAR_9)
        {




          *VAR_7 = ((void*)0);
          (void) FUNC_1 (VAR_8);
        }
    }
  else
    {




      FUNC_2 (VAR_6);




      if (*VAR_7 == VAR_5)
        {






          *VAR_7 = ((void*)0);
        }
      else
        {




          VAR_9 = VAR_0;
        }

      FUNC_3(VAR_6);

    }

  return (VAR_9);
}
