
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread_dead; scalar_t__ pcm; scalar_t__ cond_lock; scalar_t__ fifo_lock; scalar_t__ cond; scalar_t__ buffer; scalar_t__ worker_thread; } ;
typedef TYPE_1__ alsa_thread_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
   alsa_thread_t *VAR_1 = (alsa_thread_t*)VAR_0;

   if (VAR_1)
   {
      if (VAR_1->worker_thread)
      {
         FUNC_4(VAR_1->cond_lock);
         VAR_1->thread_dead = 1;
         FUNC_5(VAR_1->cond_lock);
         FUNC_8(VAR_1->worker_thread);
      }
      if (VAR_1->buffer)
         FUNC_0(VAR_1->buffer);
      if (VAR_1->cond)
         FUNC_2(VAR_1->cond);
      if (VAR_1->fifo_lock)
         FUNC_3(VAR_1->fifo_lock);
      if (VAR_1->cond_lock)
         FUNC_3(VAR_1->cond_lock);
      if (VAR_1->pcm)
      {
         FUNC_7(VAR_1->pcm);
         FUNC_6(VAR_1->pcm);
      }
      FUNC_1(VAR_1);
   }
}
