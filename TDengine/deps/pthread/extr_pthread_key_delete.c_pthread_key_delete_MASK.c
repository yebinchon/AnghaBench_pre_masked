
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int threadLock; } ;
typedef TYPE_1__ ptw32_thread_t ;
typedef int ptw32_mcs_local_node_t ;
typedef TYPE_2__* pthread_key_t ;
struct TYPE_9__ {TYPE_1__* thread; } ;
typedef TYPE_3__ ThreadKeyAssoc ;
struct TYPE_8__ {int keyLock; int * destructor; int key; int * threads; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;

int
FUNC_6 (pthread_key_t VAR_0)
{
  ptw32_mcs_local_node_t VAR_1;
  int VAR_2 = 0;

  if (VAR_0 != ((void*)0))
    {
      if (VAR_0->threads != ((void*)0) && VAR_0->destructor != ((void*)0))
 {
   ThreadKeyAssoc *VAR_3;
   FUNC_3 (&(VAR_0->keyLock), &VAR_1);
   while ((VAR_3 = (ThreadKeyAssoc *) VAR_0->threads) != ((void*)0))
     {
              ptw32_mcs_local_node_t VAR_4;
       ptw32_thread_t * VAR_5 = VAR_3->thread;

       if (VAR_3 == ((void*)0))
  {

    break;
  }

       FUNC_3 (&(VAR_5->threadLock), &VAR_4);






       FUNC_5 (VAR_3);
       FUNC_4 (&VAR_4);
       FUNC_4 (&VAR_1);
     }
 }

      FUNC_0 (VAR_0->key);
      if (VAR_0->destructor != ((void*)0))
 {

   FUNC_3 (&(VAR_0->keyLock), &VAR_1);
   FUNC_4 (&VAR_1);
 }




      FUNC_1 (VAR_0);
    }

  return (VAR_2);
}
