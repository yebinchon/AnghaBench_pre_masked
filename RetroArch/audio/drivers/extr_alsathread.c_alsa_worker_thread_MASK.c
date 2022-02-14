
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_2__ {int thread_dead; int cond_lock; int cond; int pcm; int period_frames; scalar_t__ period_size; int fifo_lock; int buffer; } ;
typedef TYPE_1__ alsa_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int *,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void *VAR_3)
{
   alsa_thread_t *VAR_4 = (alsa_thread_t*)VAR_3;
   uint8_t *VAR_5 = (uint8_t *)FUNC_2(1, VAR_4->period_size);

   if (!VAR_5)
   {
      FUNC_1("failed to allocate audio buffer");
      goto end;
   }

   while (!VAR_4->thread_dead)
   {
      size_t VAR_6;
      size_t VAR_7;
      snd_pcm_sframes_t VAR_8;
      FUNC_8(VAR_4->fifo_lock);
      VAR_6 = FUNC_4(VAR_4->buffer);
      VAR_7 = FUNC_0(VAR_4->period_size, VAR_6);
      FUNC_3(VAR_4->buffer, VAR_5, VAR_7);
      FUNC_7(VAR_4->cond);
      FUNC_9(VAR_4->fifo_lock);


      FUNC_6(VAR_5 + VAR_7, 0, VAR_4->period_size - VAR_7);

      VAR_8 = FUNC_11(VAR_4->pcm, VAR_5, VAR_4->period_frames);

      if (VAR_8 == -VAR_1 || VAR_8 == -VAR_0 ||
            VAR_8 == -VAR_2)
      {
         if (FUNC_10(VAR_4->pcm, VAR_8, 1) < 0)
         {
            FUNC_1("[ALSA]: (#2) Failed to recover from error (%s)\n",
                  FUNC_12(VAR_8));
            break;
         }

         continue;
      }
      else if (VAR_8 < 0)
      {
         FUNC_1("[ALSA]: Unknown error occurred (%s).\n",
               FUNC_12(VAR_8));
         break;
      }
   }

end:
   FUNC_8(VAR_4->cond_lock);
   VAR_4->thread_dead = 1;
   FUNC_7(VAR_4->cond);
   FUNC_9(VAR_4->cond_lock);
   FUNC_5(VAR_5);
}
