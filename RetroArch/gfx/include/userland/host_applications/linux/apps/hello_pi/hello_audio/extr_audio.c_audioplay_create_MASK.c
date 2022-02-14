
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {int bytes_per_sample; int num_buffers; int * audio_render; int sema; int * client; int ** list; } ;
struct TYPE_12__ {void* nVersion; } ;
struct TYPE_13__ {int nSize; int nPortIndex; int nBufferSize; int nBufferCountActual; int nChannels; int nSamplingRate; int nBitPerSample; void** eChannelMapping; int ePCMMode; int bInterleaved; int eEndian; int eNumData; TYPE_1__ nVersion; } ;
typedef TYPE_2__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_2__ OMX_AUDIO_PARAM_PCMMODETYPE ;
typedef TYPE_4__ AUDIOPLAY_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 () ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 TYPE_4__* FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *,int **,char*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int,int *,int *,int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int ,TYPE_4__*) ;
 int VAR_21 ;
 int FUNC_16 (TYPE_2__*,int ,int) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int ,int) ;

int32_t FUNC_19(AUDIOPLAY_STATE_T **VAR_22,
                         uint32_t VAR_23,
                         uint32_t VAR_24,
                         uint32_t VAR_25,
                         uint32_t VAR_26,
                         uint32_t VAR_27)
{
   uint32_t VAR_28 = (VAR_25 * FUNC_5(VAR_24)) >> 3;
   int32_t VAR_29 = -1;

   *VAR_22 = ((void*)0);


   if(VAR_23 >= 8000 && VAR_23 <= 192000 &&
      (VAR_24 >= 1 && VAR_24 <= 8) &&
      (VAR_25 == 16 || VAR_25 == 32) &&
      VAR_26 > 0 &&
      VAR_27 >= VAR_28)
   {

      int VAR_30 = (VAR_27 + 15) & ~15;
      AUDIOPLAY_STATE_T *VAR_31;


      VAR_31 = FUNC_7(1, sizeof(AUDIOPLAY_STATE_T));

      if(VAR_31)
      {
         OMX_ERRORTYPE VAR_32;
         OMX_PARAM_PORTDEFINITIONTYPE VAR_33;
         OMX_AUDIO_PARAM_PCMMODETYPE VAR_34;
         int32_t VAR_35;

         VAR_29 = 0;
         *VAR_22 = VAR_31;


         VAR_35 = FUNC_18(&VAR_31->sema, 0, 1);
         FUNC_6(VAR_35 == 0);

         VAR_31->bytes_per_sample = VAR_28;
         VAR_31->num_buffers = VAR_26;

         VAR_31->client = FUNC_14();
         FUNC_6(VAR_31->client != ((void*)0));

         FUNC_15(VAR_31->client, VAR_21, VAR_31);

         VAR_32 = FUNC_3();
         FUNC_6(VAR_32 == VAR_12);

         FUNC_11(VAR_31->client, &VAR_31->audio_render, "audio_render", VAR_1 | VAR_0);
         FUNC_6(VAR_31->audio_render != ((void*)0));

         VAR_31->list[0] = VAR_31->audio_render;


         FUNC_16(&VAR_33, 0, sizeof(OMX_PARAM_PORTDEFINITIONTYPE));
         VAR_33.nSize = sizeof(OMX_PARAM_PORTDEFINITIONTYPE);
         VAR_33.nVersion.nVersion = VAR_20;
         VAR_33.nPortIndex = 100;

         VAR_32 = FUNC_2(FUNC_0(VAR_31->audio_render), VAR_14, &VAR_33);
         FUNC_6(VAR_32 == VAR_12);

         VAR_33.nBufferSize = VAR_30;
         VAR_33.nBufferCountActual = VAR_26;

         VAR_32 = FUNC_4(FUNC_0(VAR_31->audio_render), VAR_14, &VAR_33);
         FUNC_6(VAR_32 == VAR_12);


         FUNC_16(&VAR_34, 0, sizeof(OMX_AUDIO_PARAM_PCMMODETYPE));
         VAR_34.nSize = sizeof(OMX_AUDIO_PARAM_PCMMODETYPE);
         VAR_34.nVersion.nVersion = VAR_20;
         VAR_34.nPortIndex = 100;
         VAR_34.nChannels = FUNC_5(VAR_24);
         VAR_34.eNumData = VAR_15;
         VAR_34.eEndian = VAR_11;
         VAR_34.nSamplingRate = VAR_23;
         VAR_34.bInterleaved = VAR_19;
         VAR_34.nBitPerSample = VAR_25;
         VAR_34.ePCMMode = VAR_10;

         switch(VAR_24) {
         case 1:
            VAR_34.eChannelMapping[0] = VAR_2;
            break;
         case 3:
            VAR_34.eChannelMapping[2] = VAR_2;
            VAR_34.eChannelMapping[1] = VAR_7;
            VAR_34.eChannelMapping[0] = VAR_3;
            break;
         case 8:
            VAR_34.eChannelMapping[7] = VAR_9;
         case 7:
            VAR_34.eChannelMapping[6] = VAR_6;
         case 6:
            VAR_34.eChannelMapping[5] = VAR_8;
         case 5:
            VAR_34.eChannelMapping[4] = VAR_5;
         case 4:
            VAR_34.eChannelMapping[3] = VAR_4;
            VAR_34.eChannelMapping[2] = VAR_2;
         case 2:
            VAR_34.eChannelMapping[1] = VAR_7;
            VAR_34.eChannelMapping[0] = VAR_3;
            break;
         }

         VAR_32 = FUNC_4(FUNC_0(VAR_31->audio_render), VAR_13, &VAR_34);
         FUNC_6(VAR_32 == VAR_12);

         FUNC_9(VAR_31->audio_render, VAR_17);
         if(FUNC_13(VAR_31->audio_render, 100, ((void*)0), ((void*)0), ((void*)0)) < 0)
         {

            FUNC_9(VAR_31->audio_render, VAR_18);
            FUNC_10(VAR_31->list);

            VAR_32 = FUNC_1();
            FUNC_6(VAR_32 == VAR_12);

            FUNC_12(VAR_31->client);

            FUNC_17(&VAR_31->sema);
            FUNC_8(VAR_31);
            *VAR_22 = ((void*)0);
            return -1;
         }

         FUNC_9(VAR_31->audio_render, VAR_16);
      }
   }

   return VAR_29;
}
