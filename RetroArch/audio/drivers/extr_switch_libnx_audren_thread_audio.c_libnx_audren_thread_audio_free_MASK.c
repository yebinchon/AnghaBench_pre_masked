
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; scalar_t__ fifo; struct TYPE_3__* mempool; int drv; int thread; int fifo_lock; } ;
typedef TYPE_1__ libnx_audren_thread_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
   libnx_audren_thread_t *VAR_1 = (libnx_audren_thread_t*)VAR_0;

   if (!VAR_1)
      return;

   VAR_1->running = 0;
   FUNC_6(&VAR_1->fifo_lock);
   FUNC_8(&VAR_1->thread);
   FUNC_7(&VAR_1->thread);
   FUNC_2(&VAR_1->drv, 0);
   FUNC_1(&VAR_1->drv);
   FUNC_0();

   if (VAR_1->mempool)
   {
      FUNC_5(VAR_1->mempool);
   }

   if (VAR_1->fifo)
   {
      FUNC_3(VAR_1->fifo);
      FUNC_4(VAR_1->fifo);
   }

   FUNC_5(VAR_1);
}
