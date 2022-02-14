
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; struct TYPE_3__* zeroBuffer; int * worker_thread; struct TYPE_3__* buffer; scalar_t__ cond_lock; scalar_t__ fifo_lock; scalar_t__ cond; } ;
typedef TYPE_1__ psp_audio_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   psp_audio_t* VAR_1 = (psp_audio_t*)VAR_0;
   if(!VAR_1)
      return;

   if(VAR_1->running){
      if (VAR_1->worker_thread)
      {
            VAR_1->running = 0;
            FUNC_3(VAR_1->worker_thread);
      }

      if (VAR_1->cond)
            FUNC_1(VAR_1->cond);
      if (VAR_1->fifo_lock)
            FUNC_2(VAR_1->fifo_lock);
      if (VAR_1->cond_lock)
            FUNC_2(VAR_1->cond_lock);
   }
   FUNC_0(VAR_1->buffer);
   VAR_1->worker_thread = ((void*)0);
   FUNC_0(VAR_1->zeroBuffer);
   FUNC_0(VAR_1);
}
