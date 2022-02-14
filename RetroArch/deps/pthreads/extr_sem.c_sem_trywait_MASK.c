
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {scalar_t__ value; int lock; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2 (sem_t * VAR_3)
{
   int VAR_4 = 0;
   sem_t VAR_5 = *VAR_3;

   if (VAR_5 == ((void*)0))
      VAR_4 = VAR_1;
   else if ((VAR_4 = FUNC_0 (&VAR_5->lock)) == 0)
   {


      if (*VAR_3 == ((void*)0))
      {
         (void) FUNC_1 (&VAR_5->lock);
         VAR_2 = VAR_1;
         return -1;
      }

      if (VAR_5->value > 0)
         VAR_5->value--;
      else
         VAR_4 = VAR_0;

      (void) FUNC_1 (&VAR_5->lock);
   }

   if (VAR_4 != 0)
   {
      VAR_2 = VAR_4;
      return -1;
   }

   return 0;
}
