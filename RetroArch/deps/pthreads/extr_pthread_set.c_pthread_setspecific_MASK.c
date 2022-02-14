
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* pthread_t ;
typedef TYPE_2__* pthread_key_t ;
struct TYPE_11__ {int threadLock; scalar_t__ keys; } ;
typedef TYPE_1__ pte_thread_t ;
struct TYPE_13__ {struct TYPE_13__* nextKey; TYPE_2__* key; } ;
typedef TYPE_4__ ThreadKeyAssoc ;
struct TYPE_12__ {int key; int keyLock; int * destructor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,void*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;

int FUNC_6 (pthread_key_t VAR_4, const void *VAR_5)
{
   pthread_t VAR_6;
   int VAR_7 = 0;

   if (VAR_4 != VAR_3)
   {





      VAR_6 = FUNC_5 ();
      if (VAR_6 == ((void*)0))
         return VAR_1;
   }
   else
   {




      pte_thread_t * VAR_8 = (pte_thread_t *) FUNC_2 (VAR_3);

      if (VAR_8 == ((void*)0))
      {
         if (VAR_5 == ((void*)0))
            return VAR_1;

         VAR_6 = *((pthread_t *) VAR_5);
      }
      else
         VAR_6 = VAR_8;
   }

   VAR_7 = 0;

   if (VAR_4 != ((void*)0))
   {
      if (VAR_6 != ((void*)0) && VAR_4->destructor != ((void*)0) && VAR_5 != ((void*)0))
      {
         ThreadKeyAssoc *VAR_9;

         if (FUNC_3(&(VAR_4->keyLock)) == 0)
         {
            pte_thread_t * VAR_10 = (pte_thread_t *) VAR_6;

            (void) FUNC_3(&(VAR_10->threadLock));

            VAR_9 = (ThreadKeyAssoc *) VAR_10->keys;



            while (VAR_9 != ((void*)0))
            {



               if (VAR_9->key == VAR_4)
                  break;
               VAR_9 = VAR_9->nextKey;
            }




            if (VAR_9 == ((void*)0))
               VAR_7 = FUNC_1 (VAR_10, VAR_4);

            (void) FUNC_4(&(VAR_10->threadLock));
         }
         (void) FUNC_4(&(VAR_4->keyLock));
      }

      if (VAR_7 == 0)
      {
         if (FUNC_0 (VAR_4->key, (void *) VAR_5) != VAR_2)
            VAR_7 = VAR_0;
      }
   }

   return (VAR_7);
}
