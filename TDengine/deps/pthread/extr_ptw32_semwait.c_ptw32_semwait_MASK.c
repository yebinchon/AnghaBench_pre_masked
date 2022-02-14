
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {int value; scalar_t__ leftToUnblock; int lock; int sem; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4 (sem_t * VAR_4)
{
  int VAR_5 = 0;
  sem_t VAR_6 = *VAR_4;

  if (VAR_6 == ((void*)0))
    {
      VAR_5 = VAR_0;
    }
  else
    {
      if ((VAR_5 = FUNC_2 (&VAR_6->lock)) == 0)
        {
          int VAR_7;



   if (*VAR_4 == ((void*)0))
     {
       (void) FUNC_3 (&VAR_6->lock);
       VAR_3 = VAR_0;
       return -1;
     }

          VAR_7 = --VAR_6->value;
          (void) FUNC_3 (&VAR_6->lock);

          if (VAR_7 < 0)
            {

              if (FUNC_1 (VAR_6->sem, VAR_1) == VAR_2)
  {
    return 0;
  }
            }
          else
     {
       return 0;
     }
        }
    }

  if (VAR_5 != 0)
    {
      VAR_3 = VAR_5;
      return -1;
    }

  return 0;

}
