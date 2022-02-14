
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ff_config_param {int frame_drop_ratio; int audio_enable; int audio_global_quality; int scale_factor; int format; int audio_opts; int video_opts; int acodec; int vcodec; void* out_pix_fmt; int threads; } ;
struct TYPE_6__ {scalar_t__ video_record_scale_factor; scalar_t__ video_stream_scale_factor; scalar_t__ streaming_mode; int video_record_threads; } ;
struct TYPE_5__ {int video_gpu_record; } ;
struct TYPE_7__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct ff_config_param *VAR_6, unsigned VAR_7)
{
   settings_t *VAR_8 = FUNC_1();

   switch (VAR_7)
   {
      case 135:
      case 130:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 75;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libx264", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "aac", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "preset", "ultrafast", 0);
         FUNC_0(&VAR_6->video_opts, "tune", "film", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "35", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "75", 0);
         break;
      case 134:
      case 129:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 75;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libx264", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "aac", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "preset", "superfast", 0);
         FUNC_0(&VAR_6->video_opts, "tune", "film", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "25", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "75", 0);
         break;
      case 137:
      case 131:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 100;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libx264", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "aac", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "preset", "superfast", 0);
         FUNC_0(&VAR_6->video_opts, "tune", "film", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "15", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "100", 0);
         break;
      case 136:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 80;
         VAR_6->out_pix_fmt = VAR_0;

         FUNC_2(VAR_6->vcodec, "libx264rgb", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "flac", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "qp", "0", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "100", 0);
         break;
      case 133:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 50;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libvpx", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "libopus", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "deadline", "realtime", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "14", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "50", 0);
         break;
      case 132:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 75;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libvpx", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "libopus", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "deadline", "realtime", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "4", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "75", 0);
         break;
      case 138:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 4;
         VAR_6->audio_enable = 0;
         VAR_6->audio_global_quality = 0;
         VAR_6->out_pix_fmt = VAR_2;

         FUNC_2(VAR_6->vcodec, "gif", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "framerate", "30", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "0", 0);
         break;
      case 139:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 0;
         VAR_6->audio_global_quality = 0;
         VAR_6->out_pix_fmt = VAR_1;

         FUNC_2(VAR_6->vcodec, "apng", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "pred", "avg", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "0", 0);
         break;
      case 128:
         VAR_6->threads = VAR_8->uints.video_record_threads;
         VAR_6->frame_drop_ratio = 1;
         VAR_6->audio_enable = 1;
         VAR_6->audio_global_quality = 50;
         VAR_6->out_pix_fmt = VAR_3;

         FUNC_2(VAR_6->vcodec, "libx264", sizeof(VAR_6->vcodec));
         FUNC_2(VAR_6->acodec, "aac", sizeof(VAR_6->acodec));

         FUNC_0(&VAR_6->video_opts, "preset", "ultrafast", 0);
         FUNC_0(&VAR_6->video_opts, "tune", "zerolatency", 0);
         FUNC_0(&VAR_6->video_opts, "crf", "20", 0);
         FUNC_0(&VAR_6->audio_opts, "audio_global_quality", "50", 0);
         break;
      default:
         break;
   }

   if (VAR_7 <= 136)
   {
      if (!VAR_8->bools.video_gpu_record)
         VAR_6->scale_factor = VAR_8->uints.video_record_scale_factor > 0 ?
            VAR_8->uints.video_record_scale_factor : 1;
      else
         VAR_6->scale_factor = 1;
      FUNC_2(VAR_6->format, "matroska", sizeof(VAR_6->format));
   }
   else if (VAR_7 >= 133 && VAR_7 < 138)
   {
      if (!VAR_8->bools.video_gpu_record)
         VAR_6->scale_factor = VAR_8->uints.video_record_scale_factor > 0 ?
            VAR_8->uints.video_record_scale_factor : 1;
      else
         VAR_6->scale_factor = 1;
      FUNC_2(VAR_6->format, "webm", sizeof(VAR_6->format));
   }
   else if (VAR_7 >= 138 && VAR_7 < 139)
   {
      if (!VAR_8->bools.video_gpu_record)
         VAR_6->scale_factor = VAR_8->uints.video_record_scale_factor > 0 ?
            VAR_8->uints.video_record_scale_factor : 1;
      else
         VAR_6->scale_factor = 1;
      FUNC_2(VAR_6->format, "gif", sizeof(VAR_6->format));
   }
   else if (VAR_7 < 130)
   {
      VAR_6->scale_factor = 1;
      FUNC_2(VAR_6->format, "apng", sizeof(VAR_6->format));
   }
   else if (VAR_7 <= 131)
   {
      if (!VAR_8->bools.video_gpu_record)
         VAR_6->scale_factor = VAR_8->uints.video_stream_scale_factor > 0 ?
            VAR_8->uints.video_stream_scale_factor : 1;
      else
         VAR_6->scale_factor = 1;
      if (VAR_8->uints.streaming_mode == VAR_5 || VAR_8->uints.streaming_mode == VAR_4)
         FUNC_2(VAR_6->format, "flv", sizeof(VAR_6->format));
      else
         FUNC_2(VAR_6->format, "mpegts", sizeof(VAR_6->format));
   }
   else if (VAR_7 == 128)
   {
      VAR_6->scale_factor = 1;
      FUNC_2(VAR_6->format, "mpegts", sizeof(VAR_6->format));
   }

   return 1;
}
