
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct record_video_data {int is_dupe; } ;
struct TYPE_12__ {int frame_cnt; TYPE_9__* conv_frame; } ;
struct TYPE_11__ {int ctx; } ;
struct TYPE_13__ {TYPE_2__ video; TYPE_1__ muxer; } ;
typedef TYPE_3__ ffmpeg_t ;
struct TYPE_15__ {int pts; } ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_4__ AVPacket ;


 scalar_t__ FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_9__*) ;
 int FUNC_2 (TYPE_3__*,struct record_video_data const*) ;

__attribute__((used)) static bool FUNC_3(ffmpeg_t *VAR_0,
      const struct record_video_data *VAR_1)
{
   AVPacket VAR_2;

   if (!VAR_1->is_dupe)
      FUNC_2(VAR_0, VAR_1);

   VAR_0->video.conv_frame->pts = VAR_0->video.frame_cnt;

   if (!FUNC_1(VAR_0, &VAR_2, VAR_0->video.conv_frame))
      return 0;

   if (VAR_2.size)
   {
      if (FUNC_0(VAR_0->muxer.ctx, &VAR_2) < 0)
         return 0;
   }

   VAR_0->video.frame_cnt++;
   return 1;
}
