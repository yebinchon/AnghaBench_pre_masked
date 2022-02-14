
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; scalar_t__ semaphore; int numSemaphoreUsers; } ;
typedef TYPE_1__ pthread_once_t ;
typedef scalar_t__ pte_osSemaphoreHandle ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int*,long) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,void*) ;
 void FUNC_11 () ;

int FUNC_12 (pthread_once_t * VAR_5, void (*VAR_6) (void))
{
   int VAR_7;
   int VAR_8;
   pte_osSemaphoreHandle VAR_9;

   if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
   {
      VAR_7 = VAR_0;
      goto FAIL0;
   }
   else
   {
      VAR_7 = 0;
   }

   while ((VAR_8 =
            FUNC_0(&VAR_5->state,
               VAR_3,
               VAR_2))
         != VAR_1)
   {
      if (VAR_2 == VAR_8)
      {


         FUNC_10(VAR_4, (void *) VAR_5);
         (*VAR_6)();
         FUNC_9(0);

         (void) FUNC_2(&VAR_5->state,VAR_1);





         if (FUNC_3((int*)&VAR_5->semaphore, 0L))
            FUNC_8((pte_osSemaphoreHandle) VAR_5->semaphore,VAR_5->numSemaphoreUsers);
      }
      else
      {
         FUNC_4(&VAR_5->numSemaphoreUsers);

         if (!FUNC_3((int*)&VAR_5->semaphore, 0L))
         {
            FUNC_5(0, (pte_osSemaphoreHandle*) &VAR_9);

            if (FUNC_0((int *) &VAR_5->semaphore,
                     (int) VAR_9,
                     0))
               FUNC_6((pte_osSemaphoreHandle)VAR_9);
         }





         if (FUNC_3(&VAR_5->state, 0L) == VAR_3)
            FUNC_7((pte_osSemaphoreHandle) VAR_5->semaphore,((void*)0));

         if (0 == FUNC_1(&VAR_5->numSemaphoreUsers))
         {

            if ((VAR_9 =
                     (pte_osSemaphoreHandle) FUNC_2((int *) &VAR_5->semaphore,0)))
               FUNC_6(VAR_9);
         }
      }
   }






FAIL0:
   return (VAR_7);
}
