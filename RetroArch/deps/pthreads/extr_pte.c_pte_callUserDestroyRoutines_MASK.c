
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
typedef TYPE_1__* pthread_key_t ;
struct TYPE_6__ {int threadLock; scalar_t__ nextAssoc; scalar_t__ keys; } ;
typedef TYPE_2__ pte_thread_t ;
struct TYPE_7__ {TYPE_1__* key; scalar_t__ nextKey; } ;
typedef TYPE_3__ ThreadKeyAssoc ;
struct TYPE_5__ {void (* destructor ) (void*) ;int keyLock; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7 (pthread_t VAR_2)
{
   int VAR_3;
   int VAR_4 = 0;
   ThreadKeyAssoc *VAR_5 = ((void*)0);
   pte_thread_t *VAR_6 = (pte_thread_t *) VAR_2;

   if (!VAR_2)
      return;







   do
   {
      VAR_3 = 0;
      VAR_4++;

      (void) FUNC_4(&(VAR_6->threadLock));
      VAR_6->nextAssoc = VAR_6->keys;
      (void) FUNC_6(&(VAR_6->threadLock));

      for (;;)
      {
         void * VAR_7;
         pthread_key_t VAR_8;
         void (*VAR_9) (void *);






         (void) FUNC_4(&(VAR_6->threadLock));

         if ((VAR_5 = (ThreadKeyAssoc *)VAR_6->nextAssoc) == ((void*)0))
         {

            FUNC_6(&(VAR_6->threadLock));
            break;
         }
         else
         {
            if (FUNC_5(&(VAR_5->key->keyLock)) == VAR_0)
            {
               FUNC_6(&(VAR_6->threadLock));
               FUNC_0(1);





               continue;
            }
         }



         VAR_6->nextAssoc = VAR_5->nextKey;
         VAR_8 = VAR_5->key;
         VAR_9 = VAR_8->destructor;
         VAR_7 = FUNC_1(VAR_8->key);
         FUNC_2 (VAR_8->key, ((void*)0));


         if (VAR_7 && VAR_4 <= VAR_1)
         {







            (void) FUNC_6(&(VAR_6->threadLock));
            (void) FUNC_6(&(VAR_8->keyLock));

            VAR_3++;





            VAR_9 (VAR_7);
         }
         else
         {




            FUNC_3 (VAR_5);
            (void) FUNC_6(&(VAR_6->threadLock));
            (void) FUNC_6(&(VAR_8->keyLock));
         }
      }
   }while (VAR_3);
}
