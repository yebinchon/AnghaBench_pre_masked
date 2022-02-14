
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {TYPE_4__* priv; TYPE_2__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_13__ {int sample_rate; int channels; } ;
typedef TYPE_6__ VC_CONTAINER_AUDIO_FORMAT_T ;
struct TYPE_11__ {TYPE_3__* module; } ;
struct TYPE_10__ {int timestamp_clock; } ;
struct TYPE_9__ {TYPE_1__* type; } ;
struct TYPE_8__ {TYPE_6__ audio; } ;


 int FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int *,char*,int) ;


__attribute__((used)) static bool FUNC_2(VC_CONTAINER_T *VAR_0,
      VC_CONTAINER_TRACK_T *VAR_1,
      VC_CONTAINER_BITS_T *VAR_2)
{
   static uint32_t VAR_3[] =
         { 96000, 88200, 64000, 48000, 44100, 32000, 24000,
           22050, 16000, 12000, 11025, 8000, 7350, 0, 0 };

   VC_CONTAINER_AUDIO_FORMAT_T *VAR_4 = &VAR_1->format->type->audio;
   uint32_t VAR_5;
   uint32_t VAR_6;
   uint32_t VAR_7;

   VAR_5 = FUNC_0(VAR_0, VAR_2, 5, "audioObjectType");
   if (VAR_5 == 31)
      VAR_5 = FUNC_0(VAR_0, VAR_2, 6, "audioObjectTypeExt") + 32;

   VAR_6 = FUNC_0(VAR_0, VAR_2, 4, "samplingFrequencyIndex");
   if (VAR_6 == 0xF)
      VAR_4->sample_rate = FUNC_0(VAR_0, VAR_2, 24, "samplingFrequency");
   else
      VAR_4->sample_rate = VAR_3[VAR_6];
   if (!VAR_4->sample_rate) return 0;

   VAR_1->priv->module->timestamp_clock = VAR_4->sample_rate;

   VAR_7 = FUNC_0(VAR_0, VAR_2, 4, "channelConfiguration");
   switch (VAR_7)
   {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
      VAR_4->channels = VAR_7;
      break;
   case 7:
      VAR_4->channels = VAR_7 + 1;
      break;
   default:
      FUNC_1(VAR_0, "MPEG-4: Unsupported channel configuration (%u)", VAR_7);
      return 0;
   }

   switch (VAR_5)
   {
   case 128:
      {
         uint32_t VAR_8 = FUNC_0(VAR_0, VAR_2, 3, "GASpecificConfig");


         if (VAR_8 != 0)
         {
            FUNC_1(VAR_0, "MPEG-4: Unexpected additional configuration data (%u)", VAR_8);
            return 0;
         }
      }
      break;

   default:
      FUNC_1(VAR_0, "MPEG-4: Unsupported Audio Object Type (%u)", VAR_5);
      return 0;
   }

   return 1;
}
