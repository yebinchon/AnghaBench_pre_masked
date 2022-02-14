
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {scalar_t__ x; scalar_t__ detachState; scalar_t__ state; int threadId; int cancelLock; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6 (pthread_t VAR_7)
{
   int VAR_8;
   unsigned char VAR_9 = VAR_2;
   pte_thread_t * VAR_10 = (pte_thread_t *) VAR_7;

   FUNC_0 (VAR_6);

   if (((void*)0) == VAR_10
         || ((pte_thread_t*)VAR_7)->x != VAR_10->x)
      VAR_8 = VAR_1;
   else if (VAR_4 == VAR_10->detachState)
      VAR_8 = VAR_0;
   else
   {





      VAR_8 = 0;

      if (FUNC_4 (&VAR_10->cancelLock) == 0)
      {
         if (VAR_10->state != VAR_5)
            VAR_10->detachState = VAR_4;
         else if (VAR_10->detachState != VAR_4)
         {



            VAR_9 = VAR_3;
         }
         (void) FUNC_5 (&VAR_10->cancelLock);
      }
      else
      {

         VAR_8 = VAR_1;
      }
   }

   FUNC_1(VAR_6);

   if (VAR_8 == 0)
   {


      if (VAR_9)
      {



         FUNC_2(VAR_10->threadId);

         FUNC_3 (VAR_7);
      }
   }

   return (VAR_8);
}
