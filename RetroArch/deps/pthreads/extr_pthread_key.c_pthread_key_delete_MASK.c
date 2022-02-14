
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* pthread_key_t ;
struct TYPE_8__ {int threadLock; } ;
typedef TYPE_2__ pte_thread_t ;
struct TYPE_9__ {TYPE_2__* thread; } ;
typedef TYPE_3__ ThreadKeyAssoc ;
struct TYPE_7__ {int keyLock; int * destructor; int key; int * threads; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7 (pthread_key_t VAR_1)
{
   int VAR_2 = 0;

   if (VAR_1 != ((void*)0))
   {
      if (VAR_1->threads != ((void*)0) &&
            VAR_1->destructor != ((void*)0) &&
            FUNC_5 (&(VAR_1->keyLock)) == 0)
      {
         ThreadKeyAssoc *VAR_3;
         while ((VAR_3 = (ThreadKeyAssoc *) VAR_1->threads) != ((void*)0))
         {
            pte_thread_t * VAR_4 = VAR_3->thread;


            if (VAR_3 == ((void*)0))
               break;

            if (FUNC_5 (&(VAR_4->threadLock)) == 0)
            {






               FUNC_3 (VAR_3);
               (void) FUNC_6 (&(VAR_4->threadLock));
            }
            else
            {

               FUNC_3 (VAR_3);
            }
         }
         FUNC_6 (&(VAR_1->keyLock));
      }

      FUNC_2 (VAR_1->key);
      if (VAR_1->destructor != ((void*)0))
      {

         while (VAR_0 == (VAR_2 = FUNC_4 (&(VAR_1->keyLock))))
            FUNC_1(1);
      }

      FUNC_0 (VAR_1);
   }

   return (VAR_2);
}
