
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct record_audio_data {int frames; int data; } ;
typedef int int16_t ;
struct TYPE_5__ {int channels; } ;
struct TYPE_4__ {int audio_enable; } ;
struct TYPE_6__ {int can_sleep; int cond; int lock; TYPE_2__ params; int audio_fifo; int cond_lock; int alive; TYPE_1__ config; } ;
typedef TYPE_3__ ffmpeg_t ;


 int FUNC_0 (int ,int ,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(void *VAR_0,
      const struct record_audio_data *VAR_1)
{
   ffmpeg_t *VAR_2 = (ffmpeg_t*)VAR_0;

   if (!VAR_2 || !VAR_1)
      return 0;

   if (!VAR_2->config.audio_enable)
      return 1;

   for (;;)
   {
      unsigned VAR_3;
      FUNC_4(VAR_2->lock);
      VAR_3 = FUNC_1(VAR_2->audio_fifo);
      FUNC_5(VAR_2->lock);

      if (!VAR_2->alive)
         return 0;

      if (VAR_3 >= VAR_1->frames * VAR_2->params.channels
            * sizeof(int16_t))
         break;

      FUNC_4(VAR_2->cond_lock);
      if (VAR_2->can_sleep)
      {
         VAR_2->can_sleep = 0;
         FUNC_3(VAR_2->cond, VAR_2->cond_lock);
         VAR_2->can_sleep = 1;
      }
      else
         FUNC_2(VAR_2->cond);

      FUNC_5(VAR_2->cond_lock);
   }

   FUNC_4(VAR_2->lock);
   FUNC_0(VAR_2->audio_fifo, VAR_1->data,
         VAR_1->frames * VAR_2->params.channels * sizeof(int16_t));
   FUNC_5(VAR_2->lock);
   FUNC_2(VAR_2->cond);

   return 1;
}
