
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_22__ {TYPE_6__* format; TYPE_3__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_T ;
struct TYPE_23__ {TYPE_7__** tracks; TYPE_1__* priv; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_24__ {size_t current_track; } ;
typedef TYPE_9__ VC_CONTAINER_MODULE_T ;
struct TYPE_21__ {int codec; scalar_t__ es_type; int extradata_size; int* extradata; TYPE_5__* type; } ;
struct TYPE_19__ {int bits_per_sample; int channels; unsigned int sample_rate; } ;
struct TYPE_20__ {TYPE_4__ audio; } ;
struct TYPE_18__ {TYPE_2__* module; } ;
struct TYPE_17__ {int object_type_indication; int sample_size; int samples_batch_size; } ;
struct TYPE_16__ {TYPE_9__* module; } ;
typedef int MP4_BOX_TYPE_T ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (TYPE_8__*,char*) ;
 int FUNC_1 (TYPE_8__*,char*) ;
 int FUNC_2 (TYPE_8__*,char*) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_8__*,int,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,int*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_18, int64_t VAR_19 )
{
   VC_CONTAINER_MODULE_T *VAR_20 = VAR_18->priv->module;
   VC_CONTAINER_TRACK_T *VAR_21 = VAR_18->tracks[VAR_20->current_track];
   VC_CONTAINER_STATUS_T VAR_22;
   MP4_BOX_TYPE_T VAR_23;
   int64_t VAR_24;
   uint32_t VAR_25;

   FUNC_2(VAR_18, "version");
   FUNC_1(VAR_18, "flags");

   VAR_25 = FUNC_0(VAR_18, "entry_count");
   if(!VAR_25) return VAR_13;

   VAR_22 = FUNC_6( VAR_18, VAR_19, &VAR_23, &VAR_24 );
   if(VAR_22 != VAR_17) return VAR_22;

   VAR_21->format->codec = FUNC_4(VAR_23);
   if(!VAR_21->format->codec) VAR_21->format->codec = VAR_23;

   if(VAR_21->format->es_type == VAR_16) VAR_23 = VAR_3;
   if(VAR_21->format->es_type == VAR_14) VAR_23 = VAR_0;
   if(VAR_21->format->es_type == VAR_15) VAR_23 = VAR_2;
   VAR_22 = FUNC_5( VAR_18, VAR_23, VAR_24, VAR_1 );
   if(VAR_22 != VAR_17) return VAR_22;


   if(VAR_21->format->codec == 131)
   {
      switch (VAR_21->priv->module->object_type_indication)
      {
      case 136:
      case 140:
         VAR_21->format->codec = 131; break;
      case 143:
      case 142:
      case 144:
         VAR_21->format->codec = VAR_10; break;
      case 134:
      case 133:
         VAR_21->format->codec = VAR_5; break;
      case 146:
         VAR_21->format->codec = VAR_11; break;
      default:
         VAR_21->format->codec = VAR_12; break;
      }
   }
   else if(VAR_21->format->codec == VAR_9)
   {
      switch (VAR_21->priv->module->object_type_indication)
      {
      case 135:
         VAR_21->format->codec = VAR_9; break;
      case 145:
         VAR_21->format->codec = VAR_6; break;
      case 137:
      case 138:
      case 140:
      case 139:
         VAR_21->format->codec = VAR_8; break;
      case 141:
         VAR_21->format->codec = VAR_7; break;
      default:
         VAR_21->format->codec = VAR_12; break;
      }
   }


   if(FUNC_3(VAR_21->format->codec))
      VAR_21->priv->module->samples_batch_size = VAR_4;


   switch(VAR_21->format->codec)
   {
   case 132:
   case 130:
      VAR_21->format->type->audio.bits_per_sample = 8;
      VAR_21->priv->module->sample_size = VAR_21->format->type->audio.channels;
      break;
   case 128:
   case 129:
      VAR_21->priv->module->sample_size = (VAR_21->format->type->audio.bits_per_sample + 7) /
         8 * VAR_21->format->type->audio.channels;
      break;
   case 131:

      if(VAR_21->format->extradata_size >= 2)
      {
         static unsigned int VAR_26[] =
         { 96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050,
           16000, 12000, 11025, 8000, 7350 };
         unsigned int VAR_27 = 0, VAR_28 = 0;
         uint8_t *VAR_29 = VAR_21->format->extradata;
         uint32_t VAR_30 = (VAR_29[0] & 7) << 1 | (VAR_29[1] >> 7);
         if(VAR_30 == 15 && VAR_21->format->extradata_size >= 5)
         {
            VAR_27 = (VAR_29[1] & 0x7f) << 17 | (VAR_29[2] << 9) | (VAR_29[3] << 1) | (VAR_29[4] >> 7);
            VAR_28 = (VAR_29[4] >> 3) & 15;
         }
         else if(VAR_30 < 13)
         {
            VAR_27 = VAR_26[VAR_30];
            VAR_28 = (VAR_29[1] >> 3) & 15;;
         }

         if(VAR_27 && VAR_27 != VAR_21->format->type->audio.sample_rate &&
               2 * VAR_27 != VAR_21->format->type->audio.sample_rate)
            VAR_21->format->type->audio.sample_rate = VAR_27;
         if(VAR_28 && VAR_28 != VAR_21->format->type->audio.channels &&
               2 * VAR_28 != VAR_21->format->type->audio.channels)
            VAR_21->format->type->audio.channels = VAR_28;
      }
      break;
   default: break;
   }

   return VAR_17;
}
