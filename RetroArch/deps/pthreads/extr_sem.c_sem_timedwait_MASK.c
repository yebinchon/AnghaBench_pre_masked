
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_4__ {int* resultPtr; TYPE_2__* sem; } ;
typedef TYPE_1__ sem_timedwait_cleanup_args_t ;
typedef TYPE_2__* sem_t ;
struct TYPE_5__ {int value; int sem; int lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int*) ;
 unsigned int FUNC_1 (struct timespec const*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

int
FUNC_7 (sem_t * VAR_3, const struct timespec *VAR_4)
{
   int VAR_5 = 0;
   sem_t VAR_6 = *VAR_3;

   FUNC_6();

   if (VAR_3 == ((void*)0))
      VAR_5 = VAR_0;
   else
   {
      unsigned int VAR_7;
      unsigned int *VAR_8;

      if (VAR_4 == ((void*)0))
      {
         VAR_8 = ((void*)0);
      }
      else
      {



         VAR_7 = FUNC_1 (VAR_4);
         VAR_8 = &VAR_7;
      }

      if ((VAR_5 = FUNC_4 (&VAR_6->lock)) == 0)
      {
         int VAR_9;



         if (*VAR_3 == ((void*)0))
         {
            (void) FUNC_5 (&VAR_6->lock);
            VAR_1 = VAR_0;
            return -1;
         }

         VAR_9 = --VAR_6->value;
         (void) FUNC_5 (&VAR_6->lock);

         if (VAR_9 < 0)
         {

            {
               sem_timedwait_cleanup_args_t VAR_10;

               VAR_10.sem = VAR_6;
               VAR_10.resultPtr = &VAR_5;


               FUNC_3(VAR_2, (void *) &VAR_10);

               VAR_5 = FUNC_0(VAR_6->sem,VAR_8);

               FUNC_2(VAR_5);
            }
         }
      }

   }

   if (VAR_5 != 0)
   {

      VAR_1 = VAR_5;
      return -1;

   }

   return 0;
}
