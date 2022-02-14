
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
typedef scalar_t__ pte_osResult ;
struct TYPE_4__ {unsigned int value; int lock; int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

int
FUNC_5 (sem_t * VAR_7, int VAR_8, unsigned int VAR_9)
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
      VAR_11 = (sem_t) FUNC_0 (1, sizeof (*VAR_11));

      if (((void*)0) == VAR_11)
      {
         VAR_10 = VAR_1;
      }
      else
      {

         VAR_11->value = VAR_9;
         if (FUNC_4(&VAR_11->lock, ((void*)0)) == 0)
         {

            pte_osResult VAR_12 = FUNC_2(0, &VAR_11->sem);



            if (VAR_12 != VAR_4)
            {
               (void) FUNC_3(&VAR_11->lock);
               VAR_10 = VAR_2;
            }

         }
         else
         {
            VAR_10 = VAR_2;
         }

         if (VAR_10 != 0)
         {
            FUNC_1(VAR_11);
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
