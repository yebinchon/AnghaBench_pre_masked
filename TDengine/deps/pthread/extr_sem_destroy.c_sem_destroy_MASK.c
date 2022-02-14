
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_4__ {scalar_t__ value; int lock; int sem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6 (sem_t * VAR_4)
{
  int VAR_5 = 0;
  sem_t VAR_6 = ((void*)0);

  if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
    {
      VAR_5 = VAR_1;
    }
  else
    {
      VAR_6 = *VAR_4;

      if ((VAR_5 = FUNC_4 (&VAR_6->lock)) == 0)
        {
          if (VAR_6->value < 0)
            {
              (void) FUNC_5 (&VAR_6->lock);
              VAR_5 = VAR_0;
            }
          else
            {


              if (!FUNC_0 (VAR_6->sem))
         {
                  (void) FUNC_5 (&VAR_6->lock);
           VAR_5 = VAR_1;
         }
       else
         {
                  *VAR_4 = ((void*)0);



                  VAR_6->value = VAR_2;

                  (void) FUNC_5 (&VAR_6->lock);

                  do
                    {




                      FUNC_1(0);
                    }
                  while (FUNC_3 (&VAR_6->lock) == VAR_0);
                }
            }
        }
    }

  if (VAR_5 != 0)
    {
      VAR_3 = VAR_5;
      return -1;
    }

  FUNC_2 (VAR_6);

  return 0;

}
