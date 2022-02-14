
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
struct TYPE_31__ {TYPE_14__* codec_context; int picture; } ;
struct TYPE_30__ {TYPE_11__** output; TYPE_1__* priv; } ;
struct TYPE_29__ {TYPE_13__* format; TYPE_8__* component; } ;
struct TYPE_28__ {int (* pf_set_format ) (TYPE_11__*) ;} ;
struct TYPE_26__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_27__ {TYPE_4__ video; } ;
struct TYPE_24__ {int height; int width; } ;
struct TYPE_25__ {TYPE_2__ video; } ;
struct TYPE_23__ {TYPE_9__* module; } ;
struct TYPE_22__ {scalar_t__ pix_fmt; int height; int width; int flags; scalar_t__ extradata; scalar_t__ extradata_size; } ;
struct TYPE_21__ {TYPE_3__* es; scalar_t__ extradata_size; int extradata; int encoding; } ;
struct TYPE_20__ {TYPE_5__* es; int encoding; } ;
struct TYPE_19__ {TYPE_6__* priv; TYPE_12__* format; } ;
struct TYPE_18__ {int capabilities; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_7__ MMAL_PORT_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef TYPE_9__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_10__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 TYPE_10__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_14__*,TYPE_10__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_11__*) ;
 scalar_t__ FUNC_10 (int,scalar_t__,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_11(MMAL_PORT_T *VAR_11)
{
   MMAL_COMPONENT_T *VAR_12 = VAR_11->component;
   MMAL_COMPONENT_MODULE_T *VAR_13 = VAR_12->priv->module;
   enum CodecID VAR_14;
   AVCodec *VAR_15;

   VAR_14 = FUNC_5(VAR_11->format->encoding);
   if(VAR_14 == VAR_2 ||
      !(VAR_15 = FUNC_3(VAR_14)))
   {
      FUNC_1("ffmpeg codec id %d (for %4.4s) not recognized",
                VAR_14, (char *)&VAR_11->format->encoding);
      return VAR_7;
   }

   VAR_13->picture = FUNC_2();

   VAR_13->codec_context->width = VAR_11->format->es->video.width;
   VAR_13->codec_context->height = VAR_11->format->es->video.height;
   VAR_13->codec_context->extradata_size = VAR_11->format->extradata_size;
   VAR_13->codec_context->extradata =
      FUNC_10(1, VAR_11->format->extradata_size + VAR_5,
                  "avcodec extradata");
   if(VAR_13->codec_context->extradata)
      FUNC_6(VAR_13->codec_context->extradata, VAR_11->format->extradata,
             VAR_11->format->extradata_size);

   if (VAR_15->capabilities & VAR_0)
      VAR_13->codec_context->flags |= VAR_1;

   if (FUNC_4(VAR_13->codec_context, VAR_15) < 0)
   {
      FUNC_1("could not open codec");
      return VAR_6;
   }


   if (VAR_13->codec_context->pix_fmt == VAR_9)
      VAR_13->codec_context->pix_fmt = VAR_10;


   FUNC_0("avcodec output format %i (%ix%i)", VAR_13->codec_context->pix_fmt,
             VAR_13->codec_context->width, VAR_13->codec_context->height);
   VAR_11->format->es->video.width = VAR_13->codec_context->width;
   VAR_11->format->es->video.height = VAR_13->codec_context->height;
   FUNC_7(VAR_12->output[0]->format, VAR_11->format);
   VAR_12->output[0]->format->encoding = FUNC_8(VAR_13->codec_context->pix_fmt);
   if (!VAR_12->output[0]->format->es->video.width)
      VAR_12->output[0]->format->es->video.width = VAR_4;
   if (!VAR_12->output[0]->format->es->video.height)
      VAR_12->output[0]->format->es->video.height = VAR_3;

   VAR_12->output[0]->priv->pf_set_format(VAR_12->output[0]);

   return VAR_8;
}
