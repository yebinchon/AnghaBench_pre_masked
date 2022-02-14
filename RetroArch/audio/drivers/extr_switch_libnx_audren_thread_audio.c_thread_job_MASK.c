
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int buffer_size; int drv; int fifo_condvar; int fifo_lock; int fifo; scalar_t__ paused; void* mempool; TYPE_2__* wavebufs; scalar_t__ running; } ;
typedef TYPE_1__ libnx_audren_thread_t ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_2__ AudioDriverWaveBuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,void*,size_t) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long) ;

__attribute__((used)) static void FUNC_13(void* VAR_3)
{
   libnx_audren_thread_t *VAR_4 = (libnx_audren_thread_t*)VAR_3;
   size_t VAR_5 = 0;
   size_t VAR_6 = 0;
   size_t VAR_7 = 0;
   AudioDriverWaveBuf* VAR_8 = ((void*)0);
   void* VAR_9 = ((void*)0);
   void* VAR_10 = ((void*)0);
   unsigned VAR_11;

   if (!VAR_4)
      return;

   while(VAR_4->running)
   {
      if(!VAR_8)
      {
         for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
         {
            if (VAR_4->wavebufs[VAR_11].state == VAR_1
               || VAR_4->wavebufs[VAR_11].state == VAR_0)
            {
               VAR_8 = &VAR_4->wavebufs[VAR_11];
               VAR_9 = VAR_4->mempool + (VAR_11 * VAR_4->buffer_size);
               VAR_6 = 0;
               break;
            }
         }
      }

      if(VAR_8)
      {
         FUNC_10(&VAR_4->fifo_lock);
         VAR_5 = VAR_4->paused ? 0 : FUNC_9(VAR_4->fifo);
         VAR_7 = FUNC_0(VAR_5, VAR_4->buffer_size - VAR_6);
         VAR_10 = VAR_9 + VAR_6;
         if(VAR_7 > 0)
         {
            FUNC_8(VAR_4->fifo, VAR_10, VAR_7);
         }
         FUNC_11(&VAR_4->fifo_lock);

         if(VAR_7 > 0)
         {
            FUNC_7(&VAR_4->fifo_condvar);

            VAR_6 += VAR_7;
            FUNC_1(VAR_10, VAR_7);
         }

         if(VAR_6 == VAR_4->buffer_size)
         {
            FUNC_4(&VAR_4->drv, 0, VAR_8);

            FUNC_3(&VAR_4->drv);
            if (!FUNC_5(&VAR_4->drv, 0))
            {
               FUNC_6(&VAR_4->drv, 0);
            }

            VAR_8 = ((void*)0);
         }

         FUNC_12(1000UL);
      }
      else
      {
         FUNC_3(&VAR_4->drv);
         FUNC_2();
      }
   }
}
