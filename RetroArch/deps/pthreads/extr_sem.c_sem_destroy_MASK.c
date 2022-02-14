
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
typedef scalar_t__ pte_osResult ;
struct TYPE_4__ {scalar_t__ value; int lock; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6 (sem_t * VAR_5)
{
   int VAR_6 = 0;
   sem_t VAR_7 = ((void*)0);

   if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
      VAR_6 = VAR_1;
   else
   {
      VAR_7 = *VAR_5;

      if ((VAR_6 = FUNC_4 (&VAR_7->lock)) == 0)
      {
         if (VAR_7->value < 0)
         {
            (void) FUNC_5 (&VAR_7->lock);
            VAR_6 = VAR_0;
         }
         else
         {

            pte_osResult VAR_8 = FUNC_1(VAR_7->sem);

            if (VAR_8 != VAR_2)
            {
               (void) FUNC_5 (&VAR_7->lock);
               VAR_6 = VAR_1;
            }
            else
            {
               *VAR_5 = ((void*)0);



               VAR_7->value = VAR_3;

               (void) FUNC_5 (&VAR_7->lock);

               do
               {




                  FUNC_2(1);
               }
               while (FUNC_3 (&VAR_7->lock) == VAR_0);
            }
         }
      }
   }

   if (VAR_6 != 0)
   {
      VAR_4 = VAR_6;
      return -1;
   }

   FUNC_0 (VAR_7);

   return 0;
}
