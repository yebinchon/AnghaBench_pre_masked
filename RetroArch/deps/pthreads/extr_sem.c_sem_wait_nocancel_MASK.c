
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {int value; int sem; int lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int
FUNC_4 (sem_t * VAR_2)
{
   int VAR_3 = 0;
   sem_t VAR_4 = *VAR_2;

   FUNC_3();

   if (VAR_4 == ((void*)0))
   {
      VAR_3 = VAR_0;
   }
   else
   {
      if ((VAR_3 = FUNC_1 (&VAR_4->lock)) == 0)
      {
         int VAR_5;



         if (*VAR_2 == ((void*)0))
         {
            (void) FUNC_2 (&VAR_4->lock);
            VAR_1 = VAR_0;
            return -1;
         }

         VAR_5 = --VAR_4->value;
         (void) FUNC_2 (&VAR_4->lock);

         if (VAR_5 < 0)
         {
            FUNC_0(VAR_4->sem, ((void*)0));
         }
      }

   }

   if (VAR_3 != 0)
   {
      VAR_1 = VAR_3;
      return -1;
   }

   return 0;
}
