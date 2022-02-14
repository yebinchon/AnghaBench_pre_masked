
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct record_params {int channels; double samplerate; } ;
struct ff_config_param {char* acodec; int sample_rate; scalar_t__ audio_opts; scalar_t__ audio_bit_rate; int audio_global_quality; scalar_t__ audio_qscale; } ;
struct ff_audio_info {double ratio; int sample_size; int outbuf_size; int * outbuf; int * buffer; TYPE_10__* codec; int resampler; int resampler_data; int * encoder; } ;
struct TYPE_13__ {int audio_resampler; } ;
struct TYPE_17__ {TYPE_1__ arrays; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_16__ {TYPE_3__* ctx; } ;
struct TYPE_18__ {TYPE_4__ muxer; struct record_params params; struct ff_audio_info audio; struct ff_config_param config; } ;
typedef TYPE_6__ ffmpeg_t ;
struct TYPE_15__ {TYPE_2__* oformat; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_12__ {int channels; int sample_rate; int frame_size; int flags; int strict_std_compliance; scalar_t__ bit_rate; int global_quality; void* time_base; int sample_fmt; int channel_layout; int codec_type; } ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_9 ;
 void* FUNC_2 (double,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_10__* FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_10__*,int *,scalar_t__*) ;
 TYPE_5__* FUNC_7 () ;
 int FUNC_8 (struct ff_audio_info*,int *) ;
 int FUNC_9 (TYPE_6__*,int *) ;
 int FUNC_10 (int *,int *,int ,int ,double) ;
 scalar_t__ FUNC_11 (double) ;

__attribute__((used)) static bool FUNC_12(ffmpeg_t *VAR_10)
{
   settings_t *VAR_11 = FUNC_7();
   struct ff_config_param *VAR_12 = &VAR_10->config;
   struct ff_audio_info *VAR_13 = &VAR_10->audio;
   struct record_params *VAR_14 = &VAR_10->params;
   AVCodec *VAR_15 = FUNC_5(
         *VAR_12->acodec ? VAR_12->acodec : "flac");
   if (!VAR_15)
   {
      FUNC_0("[FFmpeg]: Cannot find acodec %s.\n",
            *VAR_12->acodec ? VAR_12->acodec : "flac");
      return 0;
   }

   VAR_13->encoder = VAR_15;

   VAR_13->codec = FUNC_4(VAR_15);

   VAR_13->codec->codec_type = VAR_1;
   VAR_13->codec->channels = VAR_14->channels;
   VAR_13->codec->channel_layout = (VAR_14->channels > 1)
      ? VAR_3 : VAR_2;

   FUNC_8(VAR_13, VAR_15);
   FUNC_9(VAR_10, VAR_15);

   if (VAR_12->sample_rate)
   {
      VAR_13->ratio = (double)VAR_12->sample_rate / VAR_14->samplerate;
      VAR_13->codec->sample_rate = VAR_12->sample_rate;
      VAR_13->codec->time_base = FUNC_2(1.0 / VAR_12->sample_rate, 1000000);

      FUNC_10(&VAR_13->resampler_data,
            &VAR_13->resampler,
            VAR_11->arrays.audio_resampler,
            VAR_9,
            VAR_13->ratio);
   }
   else
   {
      VAR_13->codec->sample_fmt = VAR_7;
      VAR_13->codec->sample_rate = (int)FUNC_11(VAR_14->samplerate);
      VAR_13->codec->time_base = FUNC_2(1.0 / VAR_14->samplerate, 1000000);
   }

   if (VAR_12->audio_qscale)
   {
      VAR_13->codec->flags |= VAR_5;
      VAR_13->codec->global_quality = VAR_12->audio_global_quality;
   }
   else if (VAR_12->audio_bit_rate)
      VAR_13->codec->bit_rate = VAR_12->audio_bit_rate;


   VAR_13->codec->strict_std_compliance = VAR_8;

   if (VAR_10->muxer.ctx->oformat->flags & VAR_0)
      VAR_13->codec->flags |= VAR_4;

   if (FUNC_6(VAR_13->codec, VAR_15, VAR_12->audio_opts ? &VAR_12->audio_opts : ((void*)0)) != 0)
      return 0;

   if (!VAR_13->codec->frame_size)
      VAR_13->codec->frame_size = 1024;

   VAR_13->buffer = (uint8_t*)FUNC_3(
         VAR_13->codec->frame_size *
         VAR_13->codec->channels *
         VAR_13->sample_size);





   if (!VAR_13->buffer)
      return 0;

   VAR_13->outbuf_size = VAR_6;
   VAR_13->outbuf = (uint8_t*)FUNC_3(VAR_13->outbuf_size);
   if (!VAR_13->outbuf)
      return 0;

   return 1;
}
