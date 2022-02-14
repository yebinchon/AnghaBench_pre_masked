
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_26__ {int eAMRBandMode; int nBitRate; int nChannels; } ;
struct TYPE_25__ {int nSampleRate; int nBitRate; int nChannels; } ;
struct TYPE_24__ {int nSamplingRate; int eFormat; int nBitRate; int nBlockAlign; int nChannels; } ;
struct TYPE_23__ {int nSampleRate; int nBitRate; int nChannels; } ;
struct TYPE_22__ {int nSampleRate; int eAACStreamFormat; int nBitRate; int nChannels; } ;
struct TYPE_21__ {int nSamplingRate; int ePCMMode; int eNumData; int eEndian; int bInterleaved; int nBitPerSample; int nChannels; } ;
struct TYPE_17__ {int sample_rate; int block_align; int channels; int bits_per_sample; } ;
struct TYPE_20__ {TYPE_12__ audio; } ;
struct TYPE_19__ {int nSampleRate; int nDtsFrameSizeBytes; int nChannels; } ;
struct TYPE_18__ {int nSampleRate; int eBitStreamId; int nChannels; } ;
struct TYPE_16__ {void* encoding; int bitrate; scalar_t__ encoding_variant; TYPE_3__* es; } ;
struct TYPE_15__ {TYPE_2__ dts; TYPE_1__ ddp; TYPE_9__ amr; TYPE_8__ vorbis; TYPE_7__ wma; TYPE_6__ mp3; TYPE_5__ aac; TYPE_4__ pcm; } ;
typedef TYPE_10__ OMX_FORMAT_PARAM_TYPE ;
typedef int OMX_AUDIO_CODINGTYPE ;
typedef void* MMAL_FOURCC_T ;
typedef TYPE_11__ MMAL_ES_FORMAT_T ;
typedef TYPE_12__ MMAL_AUDIO_FORMAT_T ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;



 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

MMAL_FOURCC_T FUNC_2(MMAL_ES_FORMAT_T *VAR_27,
   OMX_AUDIO_CODINGTYPE VAR_28, OMX_FORMAT_PARAM_TYPE *VAR_29)
{
   MMAL_AUDIO_FORMAT_T *VAR_30 = &VAR_27->es->audio;
   VAR_27->encoding = FUNC_0(VAR_28);
   VAR_27->encoding_variant = 0;

   switch(VAR_28)
   {
   case 143:
      VAR_30->channels = VAR_29->pcm.nChannels;
      VAR_30->sample_rate = VAR_29->pcm.nSamplingRate;
      VAR_30->bits_per_sample = VAR_29->pcm.nBitPerSample;
      if(VAR_29->pcm.ePCMMode == VAR_21 && VAR_29->pcm.bInterleaved)
      {
         if(VAR_29->pcm.eEndian == VAR_23 &&
            VAR_29->pcm.eNumData == VAR_25)
            VAR_27->encoding = VAR_7;
         else if(VAR_29->pcm.eEndian == VAR_24 &&
            VAR_29->pcm.eNumData == VAR_25)
            VAR_27->encoding = VAR_8;
         if(VAR_29->pcm.eEndian == VAR_23 &&
            VAR_29->pcm.eNumData == VAR_26)
            VAR_27->encoding = VAR_9;
         if(VAR_29->pcm.eEndian == VAR_24 &&
            VAR_29->pcm.eNumData == VAR_26)
            VAR_27->encoding = VAR_10;
      }
      else if(VAR_29->pcm.ePCMMode == VAR_20)
         VAR_27->encoding = VAR_0;
      else if(VAR_29->pcm.ePCMMode == VAR_22)
         VAR_27->encoding = VAR_6;
      break;
   case 158:
      VAR_30->channels = VAR_29->aac.nChannels;
      VAR_30->sample_rate = VAR_29->aac.nSampleRate;
      VAR_27->bitrate = VAR_29->aac.nBitRate;
      switch(VAR_29->aac.eAACStreamFormat)
      {
      case 162:
      case 161:
         VAR_27->encoding = VAR_4;
         VAR_27->encoding_variant = VAR_11;
         break;
      case 160:
      case 159:
         VAR_27->encoding = VAR_4;
         VAR_27->encoding_variant = VAR_12;
         break;
      default: break;
      }
      break;
   case 144:
      VAR_27->encoding = VAR_5;
      VAR_30->channels = VAR_29->mp3.nChannels;
      VAR_30->sample_rate = VAR_29->mp3.nSampleRate;
      VAR_27->bitrate = VAR_29->mp3.nBitRate;
      break;
   case 131:
      VAR_30->channels = VAR_29->wma.nChannels;
      VAR_30->sample_rate = VAR_29->wma.nSamplingRate;
      VAR_30->block_align = VAR_29->wma.nBlockAlign;
      VAR_27->bitrate = VAR_29->wma.nBitRate;
      switch(VAR_29->wma.eFormat)
      {
      case 130:
         VAR_27->encoding = VAR_13;
         break;
      case 129:
      case 128:
         VAR_27->encoding = VAR_14;
         break;
      default: break;
      }
      break;
   case 132:
      VAR_30->channels = VAR_29->vorbis.nChannels;
      VAR_30->sample_rate = VAR_29->vorbis.nSampleRate;
      VAR_27->bitrate = VAR_29->vorbis.nBitRate;
      break;
   case 156:
      VAR_30->channels = VAR_29->amr.nChannels;
      VAR_30->sample_rate = 8000;
      VAR_27->bitrate = VAR_29->amr.nBitRate;
      if(VAR_29->amr.eAMRBandMode >= VAR_15 &&
         VAR_29->amr.eAMRBandMode <= VAR_16)
         VAR_27->encoding = VAR_1;
      if(VAR_29->amr.eAMRBandMode >= VAR_17 &&
         VAR_29->amr.eAMRBandMode <= VAR_18)
         VAR_27->encoding = VAR_2;
      break;
   case 155:
      VAR_30->channels = VAR_29->ddp.nChannels;
      VAR_30->sample_rate = VAR_29->ddp.nSampleRate;
      if(VAR_29->ddp.eBitStreamId > VAR_19)
         VAR_27->encoding = VAR_3;
      break;
   case 154:
      VAR_30->channels = VAR_29->dts.nChannels;
      VAR_30->sample_rate = VAR_29->dts.nSampleRate;
      VAR_30->block_align = VAR_29->dts.nDtsFrameSizeBytes;
      break;

   case 157:
   case 147:
   case 148:
   case 146:
   case 141:
   case 142:
   case 140:
   case 133:
   case 134:
   case 138:
   case 139:
   case 153:
   case 135:
   case 152:
   case 151:
   case 150:
   case 149:
   case 136:
   case 137:
   case 145:
   default:
      FUNC_1(0);
      break;
   }

   return VAR_27->encoding;
}
