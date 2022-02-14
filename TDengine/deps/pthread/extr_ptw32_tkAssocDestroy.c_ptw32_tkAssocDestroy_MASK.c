
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* key; struct TYPE_8__* prevThread; struct TYPE_8__* nextThread; TYPE_1__* thread; struct TYPE_8__* prevKey; struct TYPE_8__* nextKey; } ;
typedef TYPE_3__ ThreadKeyAssoc ;
struct TYPE_7__ {TYPE_3__* threads; } ;
struct TYPE_6__ {TYPE_3__* nextAssoc; TYPE_3__* keys; } ;


 int FUNC_0 (TYPE_3__*) ;

void
FUNC_1 (ThreadKeyAssoc * VAR_0)
{





  if (VAR_0 != ((void*)0))
    {
      ThreadKeyAssoc * VAR_1, * VAR_2;


      VAR_1 = VAR_0->prevKey;
      VAR_2 = VAR_0->nextKey;
      if (VAR_1 != ((void*)0))
 {
   VAR_1->nextKey = VAR_2;
 }
      if (VAR_2 != ((void*)0))
 {
   VAR_2->prevKey = VAR_1;
 }

      if (VAR_0->thread->keys == VAR_0)
 {

   VAR_0->thread->keys = VAR_2;
 }
      if (VAR_0->thread->nextAssoc == VAR_0)
 {




   VAR_0->thread->nextAssoc = VAR_2;
 }


      VAR_1 = VAR_0->prevThread;
      VAR_2 = VAR_0->nextThread;
      if (VAR_1 != ((void*)0))
 {
   VAR_1->nextThread = VAR_2;
 }
      if (VAR_2 != ((void*)0))
 {
   VAR_2->prevThread = VAR_1;
 }

      if (VAR_0->key->threads == VAR_0)
 {

   VAR_0->key->threads = VAR_2;
 }

      FUNC_0 (VAR_0);
    }

}
