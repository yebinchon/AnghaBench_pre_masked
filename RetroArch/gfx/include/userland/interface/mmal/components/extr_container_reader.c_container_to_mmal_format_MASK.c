
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_25__ {int flags; int extradata; scalar_t__ extradata_size; TYPE_8__* type; int bitrate; int codec_variant; int codec; int es_type; } ;
typedef TYPE_9__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_23__ {int block_align; int bits_per_sample; int sample_rate; int channels; } ;
struct TYPE_21__ {int par_den; int par_num; int frame_rate_den; int frame_rate_num; int visible_height; int visible_width; int height; int width; } ;
struct TYPE_24__ {TYPE_7__ audio; TYPE_5__ video; } ;
struct TYPE_22__ {int block_align; int bits_per_sample; int sample_rate; int channels; } ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_18__ {int den; int num; } ;
struct TYPE_17__ {int height; int width; } ;
struct TYPE_20__ {TYPE_3__ par; TYPE_2__ frame_rate; TYPE_1__ crop; int height; int width; } ;
struct TYPE_16__ {TYPE_6__ audio; TYPE_4__ video; } ;
struct TYPE_15__ {int type; scalar_t__ extradata_size; int extradata; TYPE_12__* es; int flags; int bitrate; int encoding_variant; int encoding; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_10__ MMAL_ES_FORMAT_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_12__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_10__*,scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_ES_FORMAT_T *VAR_5,
   VC_CONTAINER_ES_FORMAT_T *VAR_6)
{
   VAR_5->type = FUNC_2(VAR_6->es_type);
   if(VAR_5->type == VAR_2)
      return VAR_0;

   VAR_5->encoding = FUNC_1(VAR_6->codec);
   VAR_5->encoding_variant = FUNC_3(VAR_6->codec, VAR_6->codec_variant);
   VAR_5->bitrate = VAR_6->bitrate;
   VAR_5->flags = (VAR_6->flags & VAR_4) ?
      VAR_1 : 0;
   FUNC_5(VAR_5->es, 0, sizeof(*VAR_5->es));

   switch(VAR_5->type)
   {
   case 128:
      VAR_5->es->video.width = VAR_6->type->video.width;
      VAR_5->es->video.height = VAR_6->type->video.height;
      VAR_5->es->video.crop.width = VAR_6->type->video.visible_width;
      VAR_5->es->video.crop.height = VAR_6->type->video.visible_height;
      VAR_5->es->video.frame_rate.num = VAR_6->type->video.frame_rate_num;
      VAR_5->es->video.frame_rate.den = VAR_6->type->video.frame_rate_den;
      VAR_5->es->video.par.num = VAR_6->type->video.par_num;
      VAR_5->es->video.par.den = VAR_6->type->video.par_den;
      break;
   case 129:
      VAR_5->es->audio.channels = VAR_6->type->audio.channels;
      VAR_5->es->audio.sample_rate = VAR_6->type->audio.sample_rate;
      VAR_5->es->audio.bits_per_sample = VAR_6->type->audio.bits_per_sample;
      VAR_5->es->audio.block_align = VAR_6->type->audio.block_align;
      break;
   default:
      FUNC_0("format es type not handled (%i)", (int)VAR_5->type);
      break;
   }

   if(VAR_6->extradata_size)
   {
      MMAL_STATUS_T VAR_7 = FUNC_6(VAR_5, VAR_6->extradata_size);
      if(VAR_7 != VAR_3)
      {
         FUNC_0("couldn't allocate extradata");
         return VAR_7;
      }
      VAR_5->extradata_size = VAR_6->extradata_size;
      FUNC_4(VAR_5->extradata, VAR_6->extradata, VAR_5->extradata_size);
   }

   return VAR_3;
}
