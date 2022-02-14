
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int handle; } ;
struct TYPE_9__ {int running; int cond; int fifoLock; int fifo; int output; int event; TYPE_1__ thread; } ;
typedef TYPE_2__ switch_thread_audio_t ;
struct TYPE_10__ {size_t data_size; size_t buffer_size; scalar_t__ sample_data; scalar_t__ buffer; } ;
typedef TYPE_3__ compat_audio_out_buffer ;
typedef scalar_t__ Result ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_3__**,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,size_t) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int *,int,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_15(void* VAR_1)
{
   Result VAR_2;
   uint32_t VAR_3 = 0;
   compat_audio_out_buffer *VAR_4 = ((void*)0);
   switch_thread_audio_t *VAR_5 = (switch_thread_audio_t*)VAR_1;

   if (!VAR_5)
      return;

   FUNC_1("[Audio]: start mainLoop cpu %u tid %u\n", FUNC_10(), VAR_5->thread.handle);

   while (VAR_5->running)
   {
      size_t VAR_6, VAR_7, VAR_8;

      if (!VAR_4)
      {



         uint32_t VAR_9 = 0;
         FUNC_13(&VAR_9, &VAR_5->event, 1, 33333333);
         FUNC_11(VAR_5->event);

         VAR_2 = FUNC_3(&VAR_5->output, &VAR_3, &VAR_4);

         if (FUNC_2(VAR_2))
         {
            VAR_5->running = 0;
            FUNC_1("[Audio]: audoutGetReleasedAudioOutBuffer failed: %d\n", (int)VAR_2);
            break;
         }
         VAR_4->data_size = 0;
      }

      VAR_6 = VAR_4->buffer_size - VAR_4->data_size;

      FUNC_6(&VAR_5->fifoLock);

      VAR_7 = FUNC_9(VAR_5->fifo);
      VAR_8 = FUNC_0(VAR_7, VAR_6);
      if (VAR_8 > 0)
      {
       uint8_t *VAR_10;



       VAR_10 = (uint8_t*) VAR_4->sample_data;

         FUNC_8(VAR_5->fifo, VAR_10 + VAR_4->data_size, VAR_8);
      }

      FUNC_7(&VAR_5->fifoLock);
      FUNC_5(&VAR_5->cond);

      VAR_4->data_size += VAR_8;
      if (VAR_4->data_size >= VAR_4->buffer_size / 2)
      {
         VAR_2 = FUNC_14(VAR_5, VAR_4);
         if (FUNC_2(VAR_2))
         {
            FUNC_1("[Audio]: audoutAppendAudioOutBuffer failed: %d\n", (int)VAR_2);
         }
         VAR_4 = ((void*)0);
      }
      else
         FUNC_12(16000000);
   }
}
