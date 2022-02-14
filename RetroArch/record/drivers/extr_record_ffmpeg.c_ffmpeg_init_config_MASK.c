
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_config_param {int scale_factor; int threads; int frame_drop_ratio; int audio_enable; char* vcodec; char* acodec; char* format; int sample_rate; int audio_opts; int video_opts; int conf; int out_pix_fmt; int video_bit_rate; int video_global_quality; void* video_qscale; int audio_bit_rate; int audio_global_quality; void* audio_qscale; } ;
struct config_file_entry {char* key; int value; } ;
typedef int pix_fmt ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ,char*,char*,int) ;
 int FUNC_7 (int ,char*,int*) ;
 int FUNC_8 (int ,struct config_file_entry*) ;
 scalar_t__ FUNC_9 (struct config_file_entry*) ;
 int FUNC_10 (int ,char*,int*) ;
 void* FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (int ,char*,int*) ;
 char* FUNC_13 (char*,char*) ;

__attribute__((used)) static bool FUNC_14(struct ff_config_param *VAR_1,
      const char *VAR_2)
{
   struct config_file_entry VAR_3;
   char VAR_4[64] = {0};

   VAR_1->out_pix_fmt = VAR_0;
   VAR_1->scale_factor = 1;
   VAR_1->threads = 1;
   VAR_1->frame_drop_ratio = 1;
   VAR_1->audio_enable = 1;

   if (!VAR_2)
      return 1;

   FUNC_1("[FFmpeg] Loading FFmpeg config \"%s\".\n", VAR_2);

   if (!(VAR_1->conf = FUNC_5(VAR_2)))
   {
      FUNC_0("[FFmpeg] Failed to load FFmpeg config \"%s\".\n", VAR_2);
      return 0;
   }

   FUNC_6(VAR_1->conf, "vcodec", VAR_1->vcodec,
         sizeof(VAR_1->vcodec));
   FUNC_6(VAR_1->conf, "acodec", VAR_1->acodec,
         sizeof(VAR_1->acodec));
   FUNC_6(VAR_1->conf, "format", VAR_1->format,
         sizeof(VAR_1->format));

   FUNC_12(VAR_1->conf, "threads", &VAR_1->threads);

   if (!FUNC_12(VAR_1->conf, "frame_drop_ratio",
            &VAR_1->frame_drop_ratio) || !VAR_1->frame_drop_ratio)
      VAR_1->frame_drop_ratio = 1;

   if (!FUNC_7(VAR_1->conf, "audio_enable", &VAR_1->audio_enable))
      VAR_1->audio_enable = 1;

   FUNC_12(VAR_1->conf, "sample_rate", &VAR_1->sample_rate);
   FUNC_10(VAR_1->conf, "scale_factor", &VAR_1->scale_factor);

   VAR_1->audio_qscale = FUNC_11(VAR_1->conf, "audio_global_quality",
         &VAR_1->audio_global_quality);
   FUNC_11(VAR_1->conf, "audio_bit_rate", &VAR_1->audio_bit_rate);
   VAR_1->video_qscale = FUNC_11(VAR_1->conf, "video_global_quality",
         &VAR_1->video_global_quality);
   FUNC_11(VAR_1->conf, "video_bit_rate", &VAR_1->video_bit_rate);

   if (FUNC_6(VAR_1->conf, "pix_fmt", VAR_4, sizeof(VAR_4)))
   {
      VAR_1->out_pix_fmt = FUNC_4(VAR_4);
      if (VAR_1->out_pix_fmt == VAR_0)
      {
         FUNC_0("[FFmpeg] Cannot find pix_fmt \"%s\".\n", VAR_4);
         return 0;
      }
   }

   if (!FUNC_8(VAR_1->conf, &VAR_3))
      return 1;

   do
   {
      if (FUNC_13(VAR_3.key, "video_") == VAR_3.key)
      {
         const char *VAR_5 = VAR_3.key + FUNC_2("video_");
         FUNC_3(&VAR_1->video_opts, VAR_5, VAR_3.value, 0);
      }
      else if (FUNC_13(VAR_3.key, "audio_") == VAR_3.key)
      {
         const char *VAR_6 = VAR_3.key + FUNC_2("audio_");
         FUNC_3(&VAR_1->audio_opts, VAR_6, VAR_3.value, 0);
      }
   } while (FUNC_9(&VAR_3));

   return 1;
}
