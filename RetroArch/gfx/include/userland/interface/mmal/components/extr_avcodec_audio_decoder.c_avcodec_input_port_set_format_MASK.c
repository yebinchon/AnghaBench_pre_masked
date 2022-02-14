
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef enum CodecID { ____Placeholder_CodecID } CodecID ;
struct TYPE_31__ {TYPE_14__* codec_context; int output_buffer_size; scalar_t__ output_buffer; } ;
struct TYPE_30__ {TYPE_11__** output; TYPE_1__* priv; } ;
struct TYPE_29__ {TYPE_13__* format; TYPE_8__* component; } ;
struct TYPE_28__ {int (* pf_set_format ) (TYPE_11__*) ;} ;
struct TYPE_26__ {int bits_per_sample; } ;
struct TYPE_27__ {TYPE_4__ audio; } ;
struct TYPE_24__ {int bits_per_sample; int block_align; int channels; int sample_rate; } ;
struct TYPE_25__ {TYPE_2__ audio; } ;
struct TYPE_23__ {TYPE_9__* module; } ;
struct TYPE_22__ {scalar_t__ sample_fmt; int flags; scalar_t__ extradata; scalar_t__ extradata_size; int bits_per_coded_sample; int bit_rate; int block_align; int channels; int sample_rate; } ;
struct TYPE_21__ {scalar_t__ extradata_size; int extradata; TYPE_3__* es; int bitrate; int encoding; } ;
struct TYPE_20__ {TYPE_5__* es; int encoding; } ;
struct TYPE_19__ {TYPE_6__* priv; TYPE_12__* format; } ;
struct TYPE_18__ {int capabilities; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_7__ MMAL_PORT_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef TYPE_9__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_10__ AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_10__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_14__*,TYPE_10__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_11__*) ;
 scalar_t__ FUNC_12 (int,scalar_t__,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_13(MMAL_PORT_T *VAR_10)
{
   MMAL_COMPONENT_T *VAR_11 = VAR_10->component;
   MMAL_COMPONENT_MODULE_T *VAR_12 = VAR_11->priv->module;
   enum CodecID VAR_13;
   AVCodec *VAR_14;

   VAR_13 = FUNC_6(VAR_10->format->encoding);
   if (VAR_13 == VAR_5 ||
       !(VAR_14 = FUNC_4(VAR_13)))
   {
      FUNC_1("ffmpeg codec id %d (for %4.4s) not recognized",
                VAR_13, (char *)&VAR_10->format->encoding);
      return VAR_8;
   }

   VAR_12->output_buffer_size = VAR_0;
   if (VAR_12->output_buffer)
      FUNC_2(VAR_12->output_buffer);
   VAR_12->output_buffer = FUNC_3(VAR_12->output_buffer_size);

   VAR_12->codec_context->sample_rate = VAR_10->format->es->audio.sample_rate;
   VAR_12->codec_context->channels = VAR_10->format->es->audio.channels;
   VAR_12->codec_context->block_align = VAR_10->format->es->audio.block_align;
   VAR_12->codec_context->bit_rate = VAR_10->format->bitrate;
   VAR_12->codec_context->bits_per_coded_sample = VAR_10->format->es->audio.bits_per_sample;
   VAR_12->codec_context->extradata_size = VAR_10->format->extradata_size;
   VAR_12->codec_context->extradata =
      FUNC_12(1, VAR_10->format->extradata_size + VAR_6,
                  "avcodec extradata");
   if (VAR_12->codec_context->extradata)
      FUNC_7(VAR_12->codec_context->extradata, VAR_10->format->extradata,
             VAR_10->format->extradata_size);

   if (VAR_14->capabilities & VAR_3)
      VAR_12->codec_context->flags |= VAR_4;

   if (FUNC_5(VAR_12->codec_context, VAR_14) < 0)
   {
      FUNC_1("could not open codec");
      return VAR_7;
   }


   if (VAR_12->codec_context->sample_fmt == VAR_1)
      VAR_12->codec_context->sample_fmt = VAR_2;


   FUNC_8(VAR_11->output[0]->format, VAR_10->format);
   FUNC_0("avcodec output format %i", VAR_12->codec_context->sample_fmt);
   VAR_11->output[0]->format->encoding = FUNC_9(VAR_12->codec_context->sample_fmt);
   VAR_11->output[0]->format->es->audio.bits_per_sample =
      FUNC_10(VAR_12->codec_context->sample_fmt);

   VAR_11->output[0]->priv->pf_set_format(VAR_11->output[0]);
   return VAR_9;
}
