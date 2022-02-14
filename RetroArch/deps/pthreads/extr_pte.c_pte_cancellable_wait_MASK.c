
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {scalar_t__ cancelState; int cancelLock; int state; } ;
typedef TYPE_1__ pte_thread_t ;
typedef int pte_osSemaphoreHandle ;
typedef int pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;

int FUNC_6 (pte_osSemaphoreHandle VAR_6, unsigned int* VAR_7)
{
   pte_osResult VAR_8;
   int VAR_9 = VAR_0;
   int VAR_10 = 0;
   pthread_t VAR_11 = FUNC_5();
   pte_thread_t *VAR_12 = (pte_thread_t *) VAR_11;

   if (VAR_12)
   {



      if (VAR_12->cancelState == VAR_4)
         VAR_10 = 1;
   }


   if (VAR_10)
      VAR_8 = FUNC_0(VAR_6, VAR_7);
   else
      VAR_8 = FUNC_1(VAR_6, VAR_7);

   switch (VAR_8)
   {
      case 129:
         VAR_9 = 0;
         break;

      case 128:
         VAR_9 = VAR_1;
         break;

      case 130:
         if (VAR_12)
         {




            (void) FUNC_3 (&VAR_12->cancelLock);
            if (VAR_12->state < VAR_5)
            {
               VAR_12->state = VAR_5;
               VAR_12->cancelState = VAR_3;
               (void) FUNC_4 (&VAR_12->cancelLock);
               FUNC_2 (VAR_2);


            }
            (void) FUNC_4 (&VAR_12->cancelLock);
         }
         break;
      default:
         VAR_9 = VAR_0;
   }

   return (VAR_9);
}
