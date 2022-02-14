
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct record_params {int pix_fmt; float out_width; float out_height; double fps; double aspect_ratio; } ;
struct TYPE_10__ {void* in_fmt; void* out_fmt; } ;
struct ff_video_info {scalar_t__ pix_fmt; int use_sws; int in_pix_fmt; int pix_size; int outbuf_size; TYPE_9__* conv_frame; int * conv_frame_buf; scalar_t__ frame_drop_ratio; int * outbuf; TYPE_7__* codec; TYPE_1__ scaler; int * encoder; } ;
struct ff_config_param {char* vcodec; scalar_t__ out_pix_fmt; float scale_factor; scalar_t__ frame_drop_ratio; scalar_t__ video_opts; scalar_t__ video_bit_rate; int video_global_quality; scalar_t__ video_qscale; int threads; } ;
struct TYPE_13__ {TYPE_3__* ctx; } ;
struct TYPE_14__ {TYPE_4__ muxer; struct record_params params; struct ff_video_info video; struct ff_config_param config; } ;
typedef TYPE_5__ ffmpeg_t ;
struct TYPE_16__ {double width; double height; int format; } ;
struct TYPE_15__ {float width; float height; int pix_fmt; int flags; scalar_t__ bit_rate; int global_quality; int thread_count; void* sample_aspect_ratio; void* time_base; int codec_type; } ;
struct TYPE_12__ {TYPE_2__* oformat; } ;
struct TYPE_11__ {int flags; } ;
typedef int AVPicture ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* FUNC_1 (double,int) ;
 int FUNC_2 (scalar_t__*,char*,char*,int ) ;
 TYPE_9__* FUNC_3 () ;
 scalar_t__ FUNC_4 (size_t) ;
 TYPE_7__* FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_7__*,int *,scalar_t__*) ;
 int FUNC_8 (int *,int *,int,double,double) ;
 size_t FUNC_9 (int,double,double) ;

__attribute__((used)) static bool FUNC_10(ffmpeg_t *VAR_9)
{
   size_t VAR_10;
   struct ff_config_param *VAR_11 = &VAR_9->config;
   struct ff_video_info *VAR_12 = &VAR_9->video;
   struct record_params *VAR_13 = &VAR_9->params;
   AVCodec *VAR_14 = ((void*)0);

   if (*VAR_11->vcodec)
      VAR_14 = FUNC_6(VAR_11->vcodec);
   else
   {

      FUNC_2(&VAR_11->video_opts, "qp", "0", 0);
      VAR_14 = FUNC_6("libx264rgb");
   }

   if (!VAR_14)
   {
      FUNC_0("[FFmpeg]: Cannot find vcodec %s.\n",
            *VAR_11->vcodec ? VAR_11->vcodec : "libx264rgb");
      return 0;
   }

   VAR_12->encoder = VAR_14;
   if (VAR_11->out_pix_fmt != VAR_4)
   {
      VAR_12->pix_fmt = VAR_11->out_pix_fmt;
      if (VAR_12->pix_fmt != 129 && VAR_12->pix_fmt != 128)
         VAR_12->use_sws = 1;

      switch (VAR_12->pix_fmt)
      {
         case 129:
            VAR_12->scaler.out_fmt = VAR_7;
            break;

         case 128:
            VAR_12->scaler.out_fmt = VAR_6;
            break;

         default:
            break;
      }
   }
   else
   {
      VAR_12->pix_fmt = 129;
      VAR_12->scaler.out_fmt = VAR_7;
   }

   switch (VAR_13->pix_fmt)
   {
      case 130:
         VAR_12->scaler.in_fmt = VAR_8;
         VAR_12->in_pix_fmt = VAR_5;
         VAR_12->pix_size = 2;
         break;

      case 131:
         VAR_12->scaler.in_fmt = VAR_7;
         VAR_12->in_pix_fmt = 129;
         VAR_12->pix_size = 3;
         break;

      case 132:
         VAR_12->scaler.in_fmt = VAR_6;
         VAR_12->in_pix_fmt = 128;
         VAR_12->pix_size = 4;
         break;

      default:
         return 0;
   }

   VAR_12->codec = FUNC_5(VAR_14);




   VAR_13->out_width = (float)VAR_13->out_width * VAR_11->scale_factor;
   VAR_13->out_height = (float)VAR_13->out_height * VAR_11->scale_factor;

   VAR_12->codec->codec_type = VAR_1;
   VAR_12->codec->width = VAR_13->out_width;
   VAR_12->codec->height = VAR_13->out_height;
   VAR_12->codec->time_base = FUNC_1((double)
         VAR_11->frame_drop_ratio /VAR_13->fps, 1000000);
   VAR_12->codec->sample_aspect_ratio = FUNC_1(
         VAR_13->aspect_ratio * VAR_13->out_height / VAR_13->out_width, 255);
   VAR_12->codec->pix_fmt = VAR_12->pix_fmt;

   VAR_12->codec->thread_count = VAR_11->threads;

   if (VAR_11->video_qscale)
   {
      VAR_12->codec->flags |= VAR_3;
      VAR_12->codec->global_quality = VAR_11->video_global_quality;
   }
   else if (VAR_11->video_bit_rate)
      VAR_12->codec->bit_rate = VAR_11->video_bit_rate;

   if (VAR_9->muxer.ctx->oformat->flags & VAR_0)
      VAR_12->codec->flags |= VAR_2;

   if (FUNC_7(VAR_12->codec, VAR_14, VAR_11->video_opts ?
            &VAR_11->video_opts : ((void*)0)) != 0)
      return 0;



   VAR_12->outbuf_size = 1 << 23;
   VAR_12->outbuf = (uint8_t*)FUNC_4(VAR_12->outbuf_size);

   VAR_12->frame_drop_ratio = VAR_11->frame_drop_ratio;

   VAR_10 = FUNC_9(VAR_12->pix_fmt, VAR_13->out_width,
         VAR_13->out_height);
   VAR_12->conv_frame_buf = (uint8_t*)FUNC_4(VAR_10);
   VAR_12->conv_frame = FUNC_3();

   FUNC_8((AVPicture*)VAR_12->conv_frame, VAR_12->conv_frame_buf,
         VAR_12->pix_fmt, VAR_13->out_width, VAR_13->out_height);

   VAR_12->conv_frame->width = VAR_13->out_width;
   VAR_12->conv_frame->height = VAR_13->out_height;
   VAR_12->conv_frame->format = VAR_12->pix_fmt;

   return 1;
}
