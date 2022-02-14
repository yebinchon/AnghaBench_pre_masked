
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
typedef scalar_t__ pte_osResult ;
struct TYPE_3__ {scalar_t__ value; int lock; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (sem_t * VAR_5)
{
   int VAR_6 = 0;
   sem_t VAR_7 = *VAR_5;

   if (VAR_7 == ((void*)0))
      VAR_6 = VAR_0;
   else if ((VAR_6 = FUNC_1 (&VAR_7->lock)) == 0)
   {


      if (*VAR_5 == ((void*)0))
      {
         (void) FUNC_2 (&VAR_7->lock);
         VAR_6 = VAR_0;
         return -1;
      }

      if (VAR_7->value < VAR_3)
      {
         pte_osResult VAR_8 = FUNC_0(VAR_7->sem, 1);

         if (++VAR_7->value <= 0
               && (VAR_8 != VAR_2))
         {
            VAR_7->value--;
            VAR_6 = VAR_0;
         }

      }
      else
         VAR_6 = VAR_1;

      (void) FUNC_2 (&VAR_7->lock);
   }

   if (VAR_6 != 0)
   {
      VAR_4 = VAR_6;
      return -1;
   }

   return 0;
}
