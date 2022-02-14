
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct video_viewport {unsigned int width; unsigned int height; scalar_t__ full_height; scalar_t__ full_width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_16__ {scalar_t__ sample_rate; scalar_t__ fps; } ;
struct TYPE_15__ {unsigned int base_width; unsigned int base_height; void* max_height; void* max_width; } ;
struct retro_system_av_info {TYPE_4__ timing; TYPE_3__ geometry; } ;
struct record_params {unsigned int out_width; unsigned int out_height; int channels; char* filename; int preset; float aspect_ratio; void* pix_fmt; void* fb_height; void* fb_width; int * config; scalar_t__ samplerate; scalar_t__ fps; int member_0; } ;
struct TYPE_13__ {scalar_t__ video_post_filter_record; scalar_t__ video_force_aspect; scalar_t__ video_gpu_record; } ;
struct TYPE_14__ {int video_stream_port; scalar_t__ video_record_quality; scalar_t__ video_stream_quality; } ;
struct TYPE_18__ {int * path_record_config; int * path_stream_config; int * path_stream_url; } ;
struct TYPE_19__ {TYPE_1__ bools; TYPE_2__ uints; TYPE_6__ paths; } ;
typedef TYPE_7__ settings_t ;
typedef int output ;
struct TYPE_17__ {int * config; int output_dir; int * path; } ;
struct TYPE_20__ {TYPE_5__ record; } ;
typedef TYPE_8__ global_t ;
typedef enum record_config_type { ____Placeholder_record_config_type } record_config_type ;
typedef int buf ;
struct TYPE_12__ {scalar_t__ read_viewport; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_11 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_7__* VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_10__* VAR_18 ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (char*,char const*,char*,int) ;
 TYPE_8__ VAR_19 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (unsigned int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned int*,unsigned int*) ;
 int FUNC_10 (int *,int *,struct record_params*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 float VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int FUNC_11 (char*,int,char*,int) ;
 scalar_t__ VAR_27 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int *,int) ;
 float VAR_28 ;
 struct retro_system_av_info VAR_29 ;
 int FUNC_14 (struct video_viewport*) ;
 int FUNC_15 () ;
 int FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;

__attribute__((used)) static bool FUNC_18(void)
{
   char VAR_33[VAR_10];
   char VAR_34[VAR_10];
   struct record_params VAR_35 = {0};
   struct retro_system_av_info *VAR_36 = &VAR_29;
   settings_t *VAR_37 = VAR_16;
   global_t *VAR_38 = &VAR_19;

   if (!VAR_22)
      return 0;

   VAR_33[0] = '\0';

   if (VAR_17 == VAR_0)
   {
      FUNC_2("[recording] %s\n",
            FUNC_5(VAR_9));
      return 0;
   }

   if (!VAR_37->bools.video_gpu_record
         && FUNC_17())
   {
      FUNC_2("[recording] %s.\n",
            FUNC_5(VAR_7));
      return 0;
   }

   FUNC_1("[recording] %s: FPS: %.4f, Sample rate: %.4f\n",
         FUNC_5(VAR_4),
         (float)VAR_36->timing.fps,
         (float)VAR_36->timing.sample_rate);

   if (!FUNC_12(VAR_38->record.path))
      FUNC_13(VAR_33, VAR_38->record.path, sizeof(VAR_33));
   else
   {
      if (VAR_27)
         if (!FUNC_12(VAR_37->paths.path_stream_url))
            FUNC_13(VAR_33, VAR_37->paths.path_stream_url, sizeof(VAR_33));
         else

            FUNC_11(VAR_33, sizeof(VAR_33), "udp://127.0.0.1:%u", VAR_37->uints.video_stream_port);
      else
      {
         const char *VAR_39 = FUNC_7(FUNC_8(VAR_11));
         if (VAR_37->uints.video_record_quality < VAR_14)
         {
            FUNC_4(VAR_34, VAR_39,
                     "mkv", sizeof(VAR_34));
            FUNC_3(VAR_33, VAR_38->record.output_dir, VAR_34, sizeof(VAR_33));
         }
         else if (VAR_37->uints.video_record_quality >= VAR_14
               && VAR_37->uints.video_record_quality < VAR_13)
         {
            FUNC_4(VAR_34, VAR_39,
                     "webm", sizeof(VAR_34));
            FUNC_3(VAR_33, VAR_38->record.output_dir, VAR_34, sizeof(VAR_33));
         }
         else if (VAR_37->uints.video_record_quality >= VAR_13
               && VAR_37->uints.video_record_quality < VAR_12)
         {
            FUNC_4(VAR_34, VAR_39,
                     "gif", sizeof(VAR_34));
            FUNC_3(VAR_33, VAR_38->record.output_dir, VAR_34, sizeof(VAR_33));
         }
         else
         {
            FUNC_4(VAR_34, VAR_39,
                     "png", sizeof(VAR_34));
            FUNC_3(VAR_33, VAR_38->record.output_dir, VAR_34, sizeof(VAR_33));
         }
      }
   }

   VAR_35.out_width = VAR_36->geometry.base_width;
   VAR_35.out_height = VAR_36->geometry.base_height;
   VAR_35.fb_width = VAR_36->geometry.max_width;
   VAR_35.fb_height = VAR_36->geometry.max_height;
   VAR_35.channels = 2;
   VAR_35.filename = VAR_33;
   VAR_35.fps = VAR_36->timing.fps;
   VAR_35.samplerate = VAR_36->timing.sample_rate;
   VAR_35.pix_fmt = (VAR_30 == VAR_15)
      ? VAR_1
      : VAR_3;
   VAR_35.config = ((void*)0);

   if (!FUNC_12(VAR_38->record.config))
      VAR_35.config = VAR_38->record.config;
   else
   {
      if (VAR_27)
      {
         VAR_35.config = VAR_37->paths.path_stream_config;
         VAR_35.preset = (enum record_config_type)
            VAR_37->uints.video_stream_quality;
      }
      else
      {
         VAR_35.config = VAR_37->paths.path_record_config;
         VAR_35.preset = (enum record_config_type)
            VAR_37->uints.video_record_quality;
      }
   }

   if (VAR_37->bools.video_gpu_record
      && VAR_18->read_viewport)
   {
      unsigned VAR_40;
      struct video_viewport VAR_41;

      VAR_41.x = 0;
      VAR_41.y = 0;
      VAR_41.width = 0;
      VAR_41.height = 0;
      VAR_41.full_width = 0;
      VAR_41.full_height = 0;

      FUNC_14(&VAR_41);

      if (!VAR_41.width || !VAR_41.height)
      {
         FUNC_0("[recording] Failed to get viewport information from video driver. "
               "Cannot start recording ...\n");
         return 0;
      }

      VAR_35.out_width = VAR_41.width;
      VAR_35.out_height = VAR_41.height;
      VAR_35.fb_width = FUNC_6(VAR_41.width);
      VAR_35.fb_height = FUNC_6(VAR_41.height);

      if (VAR_37->bools.video_force_aspect &&
            (VAR_28 > 0.0f))
         VAR_35.aspect_ratio = VAR_28;
      else
         VAR_35.aspect_ratio = (float)VAR_41.width / VAR_41.height;

      VAR_35.pix_fmt = VAR_2;
      VAR_24 = VAR_41.width;
      VAR_23 = VAR_41.height;

      FUNC_1("[recording] %s %u x %u\n", FUNC_5(VAR_5),
            VAR_41.width, VAR_41.height);

      VAR_40 = VAR_41.width * VAR_41.height * 3;
      if (!FUNC_16(VAR_40))
         return 0;
   }
   else
   {
      if (VAR_26 || VAR_25)
      {
         VAR_35.out_width = VAR_26;
         VAR_35.out_height = VAR_25;
      }

      if (VAR_37->bools.video_force_aspect &&
            (VAR_28 > 0.0f))
         VAR_35.aspect_ratio = VAR_28;
      else
         VAR_35.aspect_ratio = (float)VAR_35.out_width / VAR_35.out_height;

      if (VAR_37->bools.video_post_filter_record
            && !!VAR_31)
      {
         unsigned VAR_42 = 0;
         unsigned VAR_43 = 0;

         VAR_35.pix_fmt = VAR_3;

         if (VAR_32)
            VAR_35.pix_fmt = VAR_1;

         FUNC_9(
               VAR_31,
               &VAR_42, &VAR_43);
         VAR_35.fb_width = FUNC_6(VAR_42);
         VAR_35.fb_height = FUNC_6(VAR_43);
      }
   }

   FUNC_1("[recording] %s %s @ %ux%u. (FB size: %ux%u pix_fmt: %u)\n",
         FUNC_5(VAR_8),
         VAR_33,
         VAR_35.out_width, VAR_35.out_height,
         VAR_35.fb_width, VAR_35.fb_height,
         (unsigned)VAR_35.pix_fmt);

   if (!FUNC_10(&VAR_21, &VAR_20, &VAR_35))
   {
      FUNC_0("[recording] %s\n", FUNC_5(VAR_6));
      FUNC_15();

      return 0;
   }

   return 1;
}
