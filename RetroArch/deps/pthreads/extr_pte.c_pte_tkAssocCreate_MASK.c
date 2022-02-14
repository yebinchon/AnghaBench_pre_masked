
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* pthread_key_t ;
struct TYPE_7__ {void* keys; } ;
typedef TYPE_2__ pte_thread_t ;
struct TYPE_8__ {struct TYPE_8__* prevKey; struct TYPE_8__* nextKey; struct TYPE_8__* prevThread; struct TYPE_8__* nextThread; TYPE_1__* key; TYPE_2__* thread; } ;
typedef TYPE_3__ ThreadKeyAssoc ;
struct TYPE_6__ {void* threads; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

int FUNC_1 (pte_thread_t * VAR_1, pthread_key_t VAR_2)
{
   ThreadKeyAssoc *VAR_3;
   VAR_3 = (ThreadKeyAssoc *) FUNC_0 (1, sizeof (*VAR_3));

   if (VAR_3 == ((void*)0))
      return VAR_0;

   VAR_3->thread = VAR_1;
   VAR_3->key = VAR_2;




   VAR_3->prevThread = ((void*)0);
   VAR_3->nextThread = (ThreadKeyAssoc *) VAR_2->threads;
   if (VAR_3->nextThread)
      VAR_3->nextThread->prevThread = VAR_3;
   VAR_2->threads = (void *) VAR_3;




   VAR_3->prevKey = ((void*)0);
   VAR_3->nextKey = (ThreadKeyAssoc *) VAR_1->keys;
   if (VAR_3->nextKey)
      VAR_3->nextKey->prevKey = VAR_3;
   VAR_1->keys = (void *) VAR_3;

   return (0);
}
