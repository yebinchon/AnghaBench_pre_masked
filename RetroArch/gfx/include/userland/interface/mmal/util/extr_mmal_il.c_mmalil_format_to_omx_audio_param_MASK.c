
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_29__ {int nBitRate; int nSampleRate; int nChannels; } ;
struct TYPE_28__ {int eFormat; int nBitRate; int nBlockAlign; int nSamplingRate; int nChannels; } ;
struct TYPE_27__ {int nBitRate; int nSampleRate; int nChannels; } ;
struct TYPE_26__ {int eAACStreamFormat; int nBitRate; int nSampleRate; int nChannels; } ;
struct TYPE_25__ {int ePCMMode; int eNumData; int eEndian; int bInterleaved; int eChannelMapping; int nBitPerSample; int nSamplingRate; int nChannels; } ;
struct TYPE_24__ {int nSize; } ;
struct TYPE_20__ {int channels; int block_align; int sample_rate; int bits_per_sample; } ;
struct TYPE_23__ {TYPE_13__ audio; } ;
struct TYPE_22__ {int nDtsType; int eChannelMapping; int nFormat; int nDtsFrameSizeBytes; int nSampleRate; int nChannels; } ;
struct TYPE_21__ {int eChannelMapping; int eDolbySurroundMode; int eBitStreamMode; int eBitStreamId; int nSampleRate; int nChannels; } ;
struct TYPE_19__ {int encoding; int bitrate; int encoding_variant; TYPE_3__* es; } ;
struct TYPE_17__ {int eAMRBandMode; int nBitRate; int nChannels; } ;
struct TYPE_18__ {TYPE_2__ dts; TYPE_1__ ddp; TYPE_10__ amr; TYPE_9__ vorbis; TYPE_8__ wma; TYPE_7__ mp3; TYPE_6__ aac; TYPE_5__ pcm; TYPE_4__ common; } ;
typedef int OMX_U32 ;
typedef int OMX_INDEXTYPE ;
typedef TYPE_11__ OMX_FORMAT_PARAM_TYPE ;
typedef int OMX_AUDIO_CODINGTYPE ;
typedef TYPE_12__ MMAL_ES_FORMAT_T ;
typedef TYPE_13__ MMAL_AUDIO_FORMAT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
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
 int FUNC_0 (TYPE_11__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

OMX_AUDIO_CODINGTYPE FUNC_5(OMX_FORMAT_PARAM_TYPE *VAR_25,
   OMX_INDEXTYPE *VAR_26, MMAL_ES_FORMAT_T *VAR_27)
{
   MMAL_AUDIO_FORMAT_T *VAR_28 = &VAR_27->es->audio;
   OMX_AUDIO_CODINGTYPE VAR_29 = FUNC_1(VAR_27->encoding);
   OMX_U32 VAR_30 = 0;
   OMX_INDEXTYPE VAR_31 = FUNC_2(VAR_29, &VAR_30);

   if(VAR_26) *VAR_26 = VAR_31;
   FUNC_0(VAR_25, 0, VAR_30);
   VAR_25->common.nSize = VAR_30;

   switch(VAR_29)
   {
   case 140:
      VAR_25->pcm.nChannels = VAR_28->channels;
      VAR_25->pcm.nSamplingRate = VAR_28->sample_rate;
      VAR_25->pcm.nBitPerSample = VAR_28->bits_per_sample;
      FUNC_3(VAR_25->pcm.eChannelMapping, VAR_28->channels);
      if(VAR_27->encoding == VAR_5 ||
         VAR_27->encoding == VAR_6 ||
         VAR_27->encoding == VAR_7 ||
         VAR_27->encoding == VAR_8)
      {
         VAR_25->pcm.ePCMMode = VAR_16;
         VAR_25->pcm.bInterleaved = VAR_24;
         VAR_25->pcm.eEndian = VAR_21;
         VAR_25->pcm.eNumData = VAR_22;
         if(VAR_27->encoding == VAR_5 ||
            VAR_27->encoding == VAR_7)
            VAR_25->pcm.eEndian = VAR_20;
         if(VAR_27->encoding == VAR_8 ||
            VAR_27->encoding == VAR_7)
            VAR_25->pcm.eNumData = VAR_23;
      }
      else if(VAR_27->encoding == VAR_0)
         VAR_25->pcm.ePCMMode = VAR_15;
      else if(VAR_27->encoding == VAR_4)
         VAR_25->pcm.ePCMMode = VAR_17;
      break;
   case 155:
      VAR_25->aac.nChannels = VAR_28->channels;
      VAR_25->aac.nSampleRate = VAR_28->sample_rate;
      VAR_25->aac.nBitRate = VAR_27->bitrate;
      switch(VAR_27->encoding_variant)
      {
      case 159:
         VAR_25->aac.eAACStreamFormat = VAR_9;
         break;
      case 158:
         VAR_25->aac.eAACStreamFormat = VAR_10;
         break;
      default: break;
      }
      break;
   case 141:
      VAR_25->mp3.nChannels = VAR_28->channels;
      VAR_25->mp3.nSampleRate = VAR_28->sample_rate;
      VAR_25->mp3.nBitRate = VAR_27->bitrate;
      break;
   case 128:
      VAR_25->wma.nChannels = VAR_28->channels;
      VAR_25->wma.nSamplingRate = VAR_28->sample_rate;
      VAR_25->wma.nBlockAlign = VAR_28->block_align;
      VAR_25->wma.nBitRate = VAR_27->bitrate;
      switch(VAR_27->encoding)
      {
      case 157:
         VAR_25->wma.eFormat = VAR_18;
         break;
      case 156:
         VAR_25->wma.eFormat = VAR_19;
         break;
      default: break;
      }
      break;
   case 129:
      VAR_25->vorbis.nChannels = VAR_28->channels;
      VAR_25->vorbis.nSampleRate = VAR_28->sample_rate;
      VAR_25->vorbis.nBitRate = VAR_27->bitrate;
      break;
   case 153:
      VAR_25->amr.nChannels = VAR_28->channels;
      VAR_25->amr.nBitRate = VAR_27->bitrate;
      if(VAR_27->encoding == VAR_1)
         VAR_25->amr.eAMRBandMode = VAR_11;
      if(VAR_27->encoding == VAR_2)
         VAR_25->amr.eAMRBandMode = VAR_12;
      break;
   case 152:
      VAR_25->ddp.nChannels = VAR_28->channels;
      VAR_25->ddp.nSampleRate = VAR_28->sample_rate;
      VAR_25->ddp.eBitStreamId = VAR_13;
      if(VAR_27->encoding == VAR_3)
         VAR_25->ddp.eBitStreamId = VAR_14;
      VAR_25->ddp.eBitStreamMode = 0;
      VAR_25->ddp.eDolbySurroundMode = 0;
      FUNC_3(VAR_25->ddp.eChannelMapping, VAR_28->channels);
      break;
   case 151:
      VAR_25->dts.nChannels = VAR_28->channels;
      VAR_25->dts.nSampleRate = VAR_28->sample_rate;
      VAR_25->dts.nDtsFrameSizeBytes = VAR_28->block_align;
      VAR_25->dts.nDtsType = 1;
      VAR_25->dts.nFormat = 0;
      FUNC_3(VAR_25->dts.eChannelMapping, VAR_28->channels);
      break;
   case 154:
   case 144:
   case 145:
   case 143:
   case 138:
   case 139:
   case 137:
   case 130:
   case 131:
   case 135:
   case 136:
   case 150:
   case 132:
   case 149:
   case 148:
   case 147:
   case 146:
   case 133:
   case 134:
   case 142:
   default:
      FUNC_4(0);
      break;
   }

   return VAR_29;
}
