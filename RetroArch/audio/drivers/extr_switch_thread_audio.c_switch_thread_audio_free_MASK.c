
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int running; TYPE_4__* buffers; int * fifo; int thread; } ;
typedef TYPE_1__ switch_thread_audio_t ;
struct TYPE_6__ {int sample_data; TYPE_1__* buffer; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(void *VAR_0)
{
   unsigned VAR_1;
   switch_thread_audio_t *VAR_2 = (switch_thread_audio_t *)VAR_0;

   if (!VAR_2)
         return;

   if (VAR_2->running)
   {
         VAR_2->running = 0;
         FUNC_2(&VAR_2->thread);
         FUNC_1(&VAR_2->thread);
   }

   FUNC_7(VAR_2);
   FUNC_6();

   if (VAR_2->fifo)
   {
         FUNC_3(VAR_2->fifo);
         VAR_2->fifo = ((void*)0);
   }

   for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2->buffers); VAR_1++)
   {



         FUNC_5(VAR_2->buffers[VAR_1].sample_data);

   }

   FUNC_4(VAR_2);
   VAR_2 = ((void*)0);
}
