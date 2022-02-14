
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {scalar_t__ value; int lock; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
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
  else if ((VAR_5 = FUNC_2 (&VAR_6->lock)) == 0)
    {


      if (*VAR_4 == ((void*)0))
        {
          (void) FUNC_3 (&VAR_6->lock);
          VAR_5 = VAR_0;
          return -1;
        }

      if (VAR_6->value < VAR_2)
 {
   if (++VAR_6->value <= 0
       && !FUNC_0 (VAR_6->sem, 1, ((void*)0)))
     {
       VAR_6->value--;
       VAR_5 = VAR_0;
     }

 }
      else
 {
   VAR_5 = VAR_1;
 }

      (void) FUNC_3 (&VAR_6->lock);
    }

  if (VAR_5 != 0)
    {
      VAR_3 = VAR_5;
      return -1;
    }

  return 0;

}
