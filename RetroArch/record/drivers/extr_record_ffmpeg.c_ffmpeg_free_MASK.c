
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ planar_buf; scalar_t__ fixed_conv; scalar_t__ resample_out; scalar_t__ float_conv; int * resampler_data; TYPE_3__* resampler; scalar_t__ buffer; scalar_t__ codec; } ;
struct TYPE_10__ {scalar_t__ audio_opts; scalar_t__ video_opts; scalar_t__ conf; } ;
struct TYPE_9__ {scalar_t__ sws; int scaler; scalar_t__ conv_frame_buf; int conv_frame; scalar_t__ codec; } ;
struct TYPE_13__ {TYPE_4__ audio; TYPE_2__ config; TYPE_1__ video; } ;
typedef TYPE_5__ ffmpeg_t ;
struct TYPE_11__ {int (* free ) (int *) ;} ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(void *VAR_0)
{
   ffmpeg_t *VAR_1 = (ffmpeg_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_5(VAR_1);
   FUNC_6(VAR_1);

   if (VAR_1->audio.codec)
   {
      FUNC_3(VAR_1->audio.codec);
      FUNC_2(VAR_1->audio.codec);
   }

   FUNC_2(VAR_1->audio.buffer);

   if (VAR_1->video.codec)
   {
      FUNC_3(VAR_1->video.codec);
      FUNC_2(VAR_1->video.codec);
   }

   FUNC_1(&VAR_1->video.conv_frame);
   FUNC_2(VAR_1->video.conv_frame_buf);

   FUNC_8(&VAR_1->video.scaler);

   if (VAR_1->video.sws)
      FUNC_10(VAR_1->video.sws);

   if (VAR_1->config.conf)
      FUNC_4(VAR_1->config.conf);
   if (VAR_1->config.video_opts)
      FUNC_0(&VAR_1->config.video_opts);
   if (VAR_1->config.audio_opts)
      FUNC_0(&VAR_1->config.audio_opts);

   if (VAR_1->audio.resampler && VAR_1->audio.resampler_data)
      VAR_1->audio.resampler->free(VAR_1->audio.resampler_data);
   VAR_1->audio.resampler = ((void*)0);
   VAR_1->audio.resampler_data = ((void*)0);

   FUNC_2(VAR_1->audio.float_conv);
   FUNC_2(VAR_1->audio.resample_out);
   FUNC_2(VAR_1->audio.fixed_conv);
   FUNC_2(VAR_1->audio.planar_buf);

   FUNC_7(VAR_1);
}
