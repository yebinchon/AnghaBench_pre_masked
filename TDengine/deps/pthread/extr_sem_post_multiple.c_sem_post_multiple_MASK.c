
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {int value; int leftToUnblock; int lock; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,long,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4 (sem_t * VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  long VAR_7;
  sem_t VAR_8 = *VAR_4;

  if (VAR_8 == ((void*)0) || VAR_5 <= 0)
    {
      VAR_6 = VAR_0;
    }
  else if ((VAR_6 = FUNC_2 (&VAR_8->lock)) == 0)
    {


      if (*VAR_4 == ((void*)0))
        {
          (void) FUNC_3 (&VAR_8->lock);
          VAR_6 = VAR_0;
          return -1;
        }

      if (VAR_8->value <= (VAR_2 - VAR_5))
 {
   VAR_7 = -VAR_8->value;
   VAR_8->value += VAR_5;
   if (VAR_7 > 0)
     {
       if (FUNC_0 (VAR_8->sem, (VAR_7<=VAR_5)?VAR_7:VAR_5, 0))
  {

  }

       else
  {
    VAR_8->value -= VAR_5;
    VAR_6 = VAR_0;
  }
     }
 }
      else
 {
   VAR_6 = VAR_1;
 }
      (void) FUNC_3 (&VAR_8->lock);
    }

  if (VAR_6 != 0)
    {
      VAR_3 = VAR_6;
      return -1;
    }

  return 0;

}
