
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int int64_t ;
typedef int guid ;
struct TYPE_32__ {int tracks_num; int duration; TYPE_4__* priv; int capabilities; TYPE_9__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_33__ {int* extradata; int data_offset; int data_size; scalar_t__ block_size; TYPE_9__* track; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;
struct TYPE_34__ {int is_enabled; TYPE_3__* format; } ;
struct TYPE_31__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_5__*) ;TYPE_6__* module; } ;
struct TYPE_30__ {int extradata_size; int* extradata; scalar_t__ bitrate; TYPE_2__* type; scalar_t__ codec; int es_type; } ;
struct TYPE_28__ {scalar_t__ bits_per_sample; scalar_t__ block_align; scalar_t__ sample_rate; scalar_t__ channels; } ;
struct TYPE_29__ {TYPE_1__ audio; } ;
typedef int GUID_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,char*,int) ;
 int FUNC_2 (TYPE_5__*,int*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,int *,char*) ;
 void* FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (TYPE_5__*,char*) ;
 int FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_15 (char,char,char,char) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_6__* FUNC_16 (int) ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (TYPE_6__*,int ,int) ;
 int VAR_14 ;
 TYPE_9__* FUNC_19 (TYPE_5__*,int ) ;
 int FUNC_20 (TYPE_5__*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_21 (scalar_t__) ;

VC_CONTAINER_STATUS_T FUNC_22( VC_CONTAINER_T *VAR_17 )
{
   VC_CONTAINER_MODULE_T *VAR_18 = 0;
   VC_CONTAINER_STATUS_T VAR_19 = VAR_11;
   VC_CONTAINER_FOURCC_T VAR_20;
   int64_t VAR_21, VAR_22;
   uint32_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29 = 0;
   uint8_t VAR_30[12];


   if( FUNC_1(VAR_17, VAR_30, 12) != 12 )
     return VAR_8;
   if( FUNC_15(VAR_30[0], VAR_30[1], VAR_30[2], VAR_30[3]) !=
       FUNC_15('R','I','F','F') )
     return VAR_8;
   if( FUNC_15(VAR_30[8], VAR_30[9], VAR_30[10], VAR_30[11]) !=
       FUNC_15('W','A','V','E') )
     return VAR_8;




   FUNC_9(VAR_17, "Chunk ID");
   FUNC_11(VAR_17, "Chunk size");
   FUNC_9(VAR_17, "WAVE ID");


   do {
      VAR_22 = FUNC_12(VAR_17) + 8;
      if( FUNC_3(VAR_17, "Chunk ID") == FUNC_15('f','m','t',' ') ) break;


      VAR_21 = FUNC_6(VAR_17, "Chunk size");
      FUNC_8(VAR_17, VAR_21);
   } while(FUNC_14(VAR_17) == VAR_11);

   if(FUNC_14(VAR_17) != VAR_11)
      return VAR_8;


   VAR_21 = FUNC_6(VAR_17, "Chunk size");
   VAR_23 = FUNC_5(VAR_17, "wFormatTag");
   VAR_24 = FUNC_5(VAR_17, "nChannels");
   VAR_25 = FUNC_6(VAR_17, "nSamplesPerSec");
   VAR_26 = FUNC_6(VAR_17, "nAvgBytesPerSec") * 8;
   VAR_27 = FUNC_5(VAR_17, "nBlockAlign");
   VAR_28 = FUNC_5(VAR_17, "wBitsPerSample");

   if(FUNC_12(VAR_17) - VAR_22 <= VAR_21 - 2)
      VAR_29 = FUNC_5(VAR_17, "cbSize");

   if(VAR_23 == VAR_12 &&
      VAR_21 >= 18 + 22 && VAR_29 >= 22)
   {
      GUID_T VAR_31;
      VAR_20 = VAR_5;

      FUNC_10(VAR_17, "wValidBitsPerSample");
      FUNC_11(VAR_17, "dwChannelMask");
      FUNC_4(VAR_17, &VAR_31, "SubFormat");

      if(!FUNC_17(&VAR_31, &VAR_14, sizeof(VAR_31)))
         VAR_20 = VAR_4;
      else if(!FUNC_17(&VAR_31, &VAR_13, sizeof(VAR_31)))
         VAR_20 = VAR_2;

      VAR_29 -= 22;


   }
   else
   {
      VAR_20 = FUNC_21(VAR_23);
   }


   if(VAR_20 == VAR_5)
      return VAR_6;


   if(!VAR_24 || !VAR_25 || !VAR_27 || !VAR_26)
      return VAR_7;
   if(VAR_20 == VAR_2 && VAR_24 > 2)
      return VAR_7;


   VAR_18 = FUNC_16(sizeof(*VAR_18));
   if(!VAR_18) { VAR_19 = VAR_9; goto error; }
   FUNC_18(VAR_18, 0, sizeof(*VAR_18));
   VAR_17->priv->module = VAR_18;
   VAR_17->tracks_num = 1;
   VAR_17->tracks = &VAR_18->track;
   VAR_17->tracks[0] = FUNC_19(VAR_17, 0);
   if(!VAR_17->tracks[0]) return VAR_9;

   VAR_17->tracks[0]->format->es_type = VAR_10;
   VAR_17->tracks[0]->format->codec = VAR_20;
   VAR_17->tracks[0]->format->type->audio.channels = VAR_24;
   VAR_17->tracks[0]->format->type->audio.sample_rate = VAR_25;
   VAR_17->tracks[0]->format->type->audio.block_align = VAR_27;
   VAR_17->tracks[0]->format->type->audio.bits_per_sample = VAR_28;
   VAR_17->tracks[0]->format->bitrate = VAR_26;
   VAR_17->tracks[0]->is_enabled = 1;
   VAR_17->tracks[0]->format->extradata_size = 0;
   VAR_17->tracks[0]->format->extradata = VAR_18->extradata;
   VAR_18->block_size = VAR_27;


   if(VAR_20 == VAR_2)
   {
      uint16_t VAR_32, VAR_33;

      FUNC_10(VAR_17, "len");
      FUNC_10(VAR_17, "layer");
      FUNC_11(VAR_17, "bytes_per_frame");
      VAR_33 = FUNC_5(VAR_17, "mode");
      FUNC_10(VAR_17, "mode_ext");
      FUNC_10(VAR_17, "num_subframes");
      FUNC_10(VAR_17, "flags");

      VAR_32 = (1 << 15);
      if(VAR_24 == 2)
      {
         VAR_32 |= (1 << 13);
         if(VAR_33 == 1) VAR_32 |= (1 << 14);
      }
      VAR_32 |= VAR_27 & 0x7ff;

      VAR_17->tracks[0]->format->extradata[0] = VAR_32 >> 8;
      VAR_17->tracks[0]->format->extradata[1] = VAR_32 & 255;
      VAR_17->tracks[0]->format->extradata_size = 2;
   }
   else if(VAR_20 == VAR_3 && VAR_29 >= 6)
   {
      FUNC_8(VAR_17, 2);
      VAR_17->tracks[0]->format->extradata_size =
         FUNC_2(VAR_17, VAR_17->tracks[0]->format->extradata, 6);
   }
   else if(VAR_20 == VAR_4)
   {

      VAR_27 *= 16;
      VAR_18->block_size = (VAR_0 / VAR_27) * VAR_27;
   }


   FUNC_8(VAR_17, VAR_22 + VAR_21 - FUNC_12(VAR_17));


   do {
      VAR_22 = FUNC_12(VAR_17) + 8;
      if( FUNC_3(VAR_17, "Chunk ID") == FUNC_15('d','a','t','a') ) break;


      VAR_21 = FUNC_6(VAR_17, "Chunk size");
      FUNC_8(VAR_17, VAR_21);
   } while(FUNC_14(VAR_17) == VAR_11);

   if(FUNC_14(VAR_17) != VAR_11)
   {
      VAR_19 = VAR_7; ;
      goto error;
   }

   VAR_18->data_offset = VAR_22;
   VAR_18->data_size = FUNC_6(VAR_17, "Chunk size");
   VAR_17->duration = VAR_18->data_size * 8000000 / VAR_26;
   if(FUNC_13(VAR_17))
      VAR_17->capabilities |= VAR_1;





   VAR_17->priv->pf_close = FUNC_20;
   VAR_17->priv->pf_read = VAR_15;
   VAR_17->priv->pf_seek = VAR_16;


   VAR_19 = FUNC_7(VAR_17, VAR_18->data_offset);
   if(VAR_19 != VAR_11) goto error;
   return VAR_11;

 error:
   FUNC_0(VAR_17, "wav: error opening stream (%i)", VAR_19);
   if(VAR_18) FUNC_20(VAR_17);
   return VAR_19;
}
