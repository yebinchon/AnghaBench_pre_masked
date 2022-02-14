
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_21__ {scalar_t__ es_type; int extradata_size; int* extradata; TYPE_12__* type; int codec_variant; int flags; int bitrate; int codec; } ;
typedef TYPE_8__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_22__ {int type; scalar_t__ encoding; int flags; int extradata_size; int* extradata; TYPE_7__* es; int encoding_variant; int bitrate; } ;
struct TYPE_19__ {int block_align; int bits_per_sample; int sample_rate; int channels; } ;
struct TYPE_16__ {int den; int num; } ;
struct TYPE_14__ {int den; int num; } ;
struct TYPE_17__ {TYPE_3__ par; TYPE_1__ frame_rate; int height; int width; } ;
struct TYPE_20__ {TYPE_6__ audio; TYPE_4__ video; } ;
struct TYPE_18__ {int block_align; int bits_per_sample; int sample_rate; int channels; } ;
struct TYPE_15__ {int par_den; int par_num; int frame_rate_den; int frame_rate_num; int height; int width; } ;
struct TYPE_13__ {TYPE_5__ audio; TYPE_2__ video; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_9__ MMAL_ES_FORMAT_T ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_12__*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(VC_CONTAINER_ES_FORMAT_T *VAR_7,
   MMAL_ES_FORMAT_T *VAR_8)
{
   VAR_7->es_type = FUNC_3(VAR_8->type);
   if(VAR_7->es_type == VAR_5)
      return VAR_0;

   VAR_7->codec = FUNC_2(VAR_8->encoding);
   VAR_7->codec_variant = FUNC_4(VAR_8->encoding, VAR_8->encoding_variant);
   VAR_7->bitrate = VAR_8->bitrate;
   VAR_7->flags = 0;
   if(VAR_8->flags & VAR_2)
      VAR_7->flags |= VAR_4;
   FUNC_1(VAR_7->type, 0, sizeof(*VAR_7->type));


   if(VAR_8->encoding == VAR_1 && !VAR_8->encoding_variant &&
      VAR_8->extradata_size >= 5 && *VAR_8->extradata == 1)
      VAR_7->codec_variant = VAR_6;

   switch(VAR_8->type)
   {
   case 128:
      VAR_7->type->video.width = VAR_8->es->video.width;
      VAR_7->type->video.height = VAR_8->es->video.height;
      VAR_7->type->video.frame_rate_num = VAR_8->es->video.frame_rate.num;
      VAR_7->type->video.frame_rate_den = VAR_8->es->video.frame_rate.den;
      VAR_7->type->video.par_num = VAR_8->es->video.par.num;
      VAR_7->type->video.par_den = VAR_8->es->video.par.den;
      break;
   case 129:
      VAR_7->type->audio.channels = VAR_8->es->audio.channels;
      VAR_7->type->audio.sample_rate = VAR_8->es->audio.sample_rate;
      VAR_7->type->audio.bits_per_sample = VAR_8->es->audio.bits_per_sample;
      VAR_7->type->audio.block_align = VAR_8->es->audio.block_align;
      break;
   default:
      FUNC_0("format es type not handled (%i)", (int)VAR_8->type);
      break;
   }

   VAR_7->extradata_size = VAR_8->extradata_size;
   VAR_7->extradata = VAR_8->extradata;

   return VAR_3;
}
