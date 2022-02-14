
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct record_video_data {unsigned int width; unsigned int height; unsigned int pitch; scalar_t__ data; scalar_t__ is_dupe; } const record_video_data ;
typedef struct record_video_data uint8_t ;
struct TYPE_3__ {int frame_drop_count; int frame_drop_ratio; int pix_size; } ;
struct TYPE_4__ {int can_sleep; int cond; int lock; int video_fifo; int attr_fifo; TYPE_1__ video; int cond_lock; int alive; } ;
typedef TYPE_2__ ffmpeg_t ;
typedef int attr_data ;


 int FUNC_0 (int ,struct record_video_data const*,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(void *VAR_0,
      const struct record_video_data *VAR_1)
{
   unsigned VAR_2;
   bool VAR_3;
   struct record_video_data VAR_4;
   ffmpeg_t *VAR_5 = (ffmpeg_t*)VAR_0;
   int VAR_6 = 0;

   if (!VAR_5 || !VAR_1)
      return 0;

   VAR_3 = VAR_5->video.frame_drop_count++ %
      VAR_5->video.frame_drop_ratio;

   VAR_5->video.frame_drop_count %= VAR_5->video.frame_drop_ratio;

   if (VAR_3)
      return 1;

   for (;;)
   {
      unsigned VAR_7;
      FUNC_4(VAR_5->lock);
      VAR_7 = FUNC_1(VAR_5->attr_fifo);
      FUNC_5(VAR_5->lock);

      if (!VAR_5->alive)
         return 0;

      if (VAR_7 >= sizeof(*VAR_1))
         break;

      FUNC_4(VAR_5->cond_lock);
      if (VAR_5->can_sleep)
      {
         VAR_5->can_sleep = 0;
         FUNC_3(VAR_5->cond, VAR_5->cond_lock);
         VAR_5->can_sleep = 1;
      }
      else
         FUNC_2(VAR_5->cond);

      FUNC_5(VAR_5->cond_lock);
   }

   FUNC_4(VAR_5->lock);




   VAR_4 = *VAR_1;

   if (VAR_4.is_dupe)
      VAR_4.width = VAR_4.height = VAR_4.pitch = 0;
   else
      VAR_4.pitch = VAR_4.width * VAR_5->video.pix_size;

   FUNC_0(VAR_5->attr_fifo, &VAR_4, sizeof(VAR_4));

   for (VAR_2 = 0; VAR_2 < VAR_4.height; VAR_2++, VAR_6 += VAR_1->pitch)
      FUNC_0(VAR_5->video_fifo,
            (const uint8_t*)VAR_1->data + VAR_6, VAR_4.pitch);

   FUNC_5(VAR_5->lock);
   FUNC_2(VAR_5->cond);

   return 1;
}
