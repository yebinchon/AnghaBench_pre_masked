
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
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

int FUNC_6 (sem_t * VAR_3)
{
   int VAR_4 = 0;
   sem_t VAR_5 = *VAR_3;

   FUNC_5();

   if (VAR_5 == ((void*)0))
   {
      VAR_4 = VAR_0;
   }
   else
   {
      if ((VAR_4 = FUNC_3 (&VAR_5->lock)) == 0)
      {
         int VAR_6;



         if (*VAR_3 == ((void*)0))
         {
            (void) FUNC_4 (&VAR_5->lock);
            VAR_1 = VAR_0;
            return -1;
         }

         VAR_6 = --VAR_5->value;
         (void) FUNC_4 (&VAR_5->lock);

         if (VAR_6 < 0)
         {

            FUNC_2(VAR_2, (void *) VAR_5);
            VAR_4 = FUNC_0(VAR_5->sem,((void*)0));

            FUNC_1(VAR_4);
         }
      }

   }

   if (VAR_4 != 0)
   {
      VAR_1 = VAR_4;
      return -1;
   }

   return 0;

}
