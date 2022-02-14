
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct record_video_data {int dummy; } ;
typedef int int16_t ;
struct TYPE_7__ {int pix_size; } ;
struct TYPE_6__ {int channels; int fb_width; int fb_height; } ;
struct TYPE_8__ {int alive; int can_sleep; scalar_t__ thread; void* video_fifo; void* attr_fifo; void* audio_fifo; scalar_t__ cond; void* cond_lock; void* lock; TYPE_2__ video; TYPE_1__ params; } ;
typedef TYPE_3__ ffmpeg_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_5(ffmpeg_t *VAR_2)
{
   VAR_2->lock = FUNC_3();
   VAR_2->cond_lock = FUNC_3();
   VAR_2->cond = FUNC_2();
   VAR_2->audio_fifo = FUNC_0(32000 * sizeof(int16_t) *
         VAR_2->params.channels * VAR_0 / 60);
   VAR_2->attr_fifo = FUNC_0(sizeof(struct record_video_data) * VAR_0);
   VAR_2->video_fifo = FUNC_0(VAR_2->params.fb_width * VAR_2->params.fb_height *
            VAR_2->video.pix_size * VAR_0);

   VAR_2->alive = 1;
   VAR_2->can_sleep = 1;
   VAR_2->thread = FUNC_4(VAR_1, VAR_2);

   FUNC_1(VAR_2->lock && VAR_2->cond_lock &&
      VAR_2->cond && VAR_2->audio_fifo &&
      VAR_2->attr_fifo && VAR_2->video_fifo && VAR_2->thread);

   return 1;
}
