
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_4__ {unsigned int value; scalar_t__ sem; int lock; scalar_t__ leftToUnblock; } ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,long,long,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

int
FUNC_6 (sem_t * VAR_7, int VAR_8, unsigned int VAR_9)
{
  int VAR_10 = 0;
  sem_t VAR_11 = ((void*)0);

  if (VAR_8 != 0)
    {




      VAR_10 = VAR_3;
    }
  else if (VAR_9 > (unsigned int)VAR_5)
    {
      VAR_10 = VAR_0;
    }
  else
    {
      VAR_11 = (sem_t) FUNC_2 (1, sizeof (*VAR_11));

      if (((void*)0) == VAR_11)
 {
   VAR_10 = VAR_1;
 }
      else
 {

   VAR_11->value = VAR_9;
   if (FUNC_5(&VAR_11->lock, ((void*)0)) == 0)
     {
       if ((VAR_11->sem = FUNC_1 (((void*)0),
          (long) 0,
          (long) VAR_5,
          ((void*)0))) == 0)
  {
    (void) FUNC_4(&VAR_11->lock);
    VAR_10 = VAR_2;
  }



     }
   else
     {
       VAR_10 = VAR_2;
     }

   if (VAR_10 != 0)
     {
       FUNC_3(VAR_11);
     }
 }
    }

  if (VAR_10 != 0)
    {
      VAR_6 = VAR_10;
      return -1;
    }

  *VAR_7 = VAR_11;

  return 0;

}
