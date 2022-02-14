
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
typedef TYPE_2__* affinity_space_t ;
typedef TYPE_3__* affinity_set_t ;
struct TYPE_27__ {TYPE_2__* affinity_space; } ;
struct TYPE_26__ {int aset_tag; } ;
struct TYPE_25__ {int aspc_lock; } ;
struct TYPE_24__ {TYPE_3__* affinity_set; int active; TYPE_7__* task; } ;


 int FUNC_0 (char*,TYPE_1__*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 TYPE_3__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

kern_return_t
FUNC_17(thread_t VAR_5, uint32_t VAR_6)
{
 affinity_set_t VAR_7;
 affinity_set_t VAR_8 = ((void*)0);
 affinity_space_t VAR_9;
 affinity_space_t VAR_10 = ((void*)0);

 FUNC_0("thread_affinity_set(%p,%u)\n", VAR_5, VAR_6);

 FUNC_12(VAR_5->task);
 VAR_9 = VAR_5->task->affinity_space;
 if (VAR_9 == ((void*)0)) {
  FUNC_13(VAR_5->task);
  VAR_10 = FUNC_7();
  if (VAR_10 == ((void*)0))
   return VAR_0;
  FUNC_12(VAR_5->task);
  if (VAR_5->task->affinity_space == ((void*)0)) {
   VAR_5->task->affinity_space = VAR_10;
   VAR_10 = ((void*)0);
  }
  VAR_9 = VAR_5->task->affinity_space;
 }
 FUNC_13(VAR_5->task);
 if (VAR_10)
  FUNC_8(VAR_10);

 FUNC_15(VAR_5);
 if (!VAR_5->active) {

  FUNC_16(VAR_5);
  return VAR_2;
 }

 FUNC_10(&VAR_9->aspc_lock);
 VAR_7 = VAR_5->affinity_set;
 if (VAR_7 != ((void*)0)) {



  FUNC_0("thread_affinity_set(%p,%u) removing from aset %p\n",
   VAR_5, VAR_6, VAR_7);
  VAR_8 = FUNC_6(VAR_7, VAR_5);
 }

 if (VAR_6 != VAR_3) {
  VAR_7 = FUNC_3(VAR_9, VAR_6);
  if (VAR_7 != ((void*)0)) {



   FUNC_0("thread_affinity_set(%p,%u) found aset %p\n",
    VAR_5, VAR_6, VAR_7);
  } else {




   if (VAR_8 != ((void*)0)) {
    VAR_7 = VAR_8;
    VAR_8 = ((void*)0);
   } else {
    VAR_7 = FUNC_2();
    if (VAR_7 == ((void*)0)) {
     FUNC_11(&VAR_9->aspc_lock);
     FUNC_16(VAR_5);
     return VAR_0;
    }
   }
   FUNC_0("thread_affinity_set(%p,%u) (re-)using aset %p\n",
    VAR_5, VAR_6, VAR_7);
   VAR_7->aset_tag = VAR_6;
   FUNC_5(VAR_9, VAR_7);
  }
  FUNC_1(VAR_7, VAR_5);
 }

 FUNC_11(&VAR_9->aspc_lock);
 FUNC_16(VAR_5);





 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8);

 if (VAR_5 == FUNC_9())
         FUNC_14(VAR_4);

 return VAR_1;
}
