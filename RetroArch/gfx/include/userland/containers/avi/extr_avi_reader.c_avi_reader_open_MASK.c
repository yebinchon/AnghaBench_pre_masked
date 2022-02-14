
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_18__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_36__ {scalar_t__ tracks_num; TYPE_3__* priv; TYPE_8__** tracks; int capabilities; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_33__ {void* data_offset; } ;
struct TYPE_37__ {TYPE_2__ state; void* data_offset; scalar_t__ index_size; void* index_offset; scalar_t__ data_size; TYPE_8__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_38__ {TYPE_4__* priv; } ;
struct TYPE_35__ {TYPE_18__* module; } ;
struct TYPE_34__ {TYPE_6__* module; int (* pf_seek ) (TYPE_5__*,int *,int ,int ) ;int pf_read; int pf_close; } ;
struct TYPE_32__ {TYPE_2__* state; } ;
struct TYPE_31__ {TYPE_1__ chunk; scalar_t__ index_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_5__*,void*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 void* FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_11 (char,char,char,char) ;
 scalar_t__ FUNC_12 (TYPE_5__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,TYPE_8__*,TYPE_18__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (TYPE_5__*,int *,int ,int ) ;
 int FUNC_16 (TYPE_6__*) ;
 TYPE_6__* FUNC_17 (int) ;
 int FUNC_18 (TYPE_6__*,int ,int) ;
 TYPE_8__* FUNC_19 (TYPE_5__*,int) ;
 int FUNC_20 (TYPE_5__*,TYPE_8__*) ;

VC_CONTAINER_STATUS_T FUNC_21( VC_CONTAINER_T *VAR_15 )
{
   VC_CONTAINER_MODULE_T *VAR_16 = 0;
   VC_CONTAINER_STATUS_T VAR_17 = VAR_7;
   uint32_t VAR_18;
   uint32_t VAR_19[3];
   unsigned int VAR_20;
   uint32_t VAR_21, VAR_22;
   int64_t VAR_23;


   if (FUNC_3(VAR_15, (uint8_t*)VAR_19, 12) != 12)
     return VAR_8;
   if( VAR_19[0] != FUNC_11('R','I','F','F') )
     return VAR_8;
   if( VAR_19[2] != FUNC_11('A','V','I',' ') )
     return VAR_8;




   FUNC_6(VAR_15, "RIFF ID");
   FUNC_7(VAR_15, "fileSize");
   FUNC_6(VAR_15, "fileType");


   VAR_17 = FUNC_13(VAR_15, FUNC_11('h','d','r','l'), &VAR_18);
   if (VAR_17 != VAR_12)
   {
      FUNC_2(VAR_15, "'hdrl' LIST not found");
      return VAR_7;
   }

   FUNC_6(VAR_15, "hdrl");


   VAR_17 = FUNC_12(VAR_15, FUNC_11('a','v','i','h'), &VAR_18);
   if (VAR_17 != VAR_12)
   {
      FUNC_2(VAR_15, "'avih' not found");
      return VAR_7;
   }


   FUNC_7(VAR_15, "dwMicroSecPerFrame");
   FUNC_7(VAR_15, "dwMaxBytesPerSec");
   FUNC_7(VAR_15, "dwPaddingGranularity");
   VAR_21 = FUNC_4(VAR_15, "dwFlags");
   FUNC_7(VAR_15, "dwTotalFrames");
   FUNC_7(VAR_15, "dwInitialFrames");
   VAR_22 = FUNC_4(VAR_15, "dwStreams");
   FUNC_7(VAR_15, "dwSuggestedBufferSize");
   FUNC_7(VAR_15, "dwWidth");
   FUNC_7(VAR_15, "dwHeight");
   FUNC_7(VAR_15, "dwReserved0");
   FUNC_7(VAR_15, "dwReserved1");
   FUNC_7(VAR_15, "dwReserved2");
   FUNC_7(VAR_15, "dwReserved3");

   if((VAR_17 = FUNC_10(VAR_15)) != VAR_12)
      goto error;


   if ((VAR_16 = FUNC_17(sizeof(*VAR_16))) == ((void*)0))
      return VAR_9;
   FUNC_18(VAR_16, 0, sizeof(*VAR_16));
   VAR_15->priv->module = VAR_16;
   VAR_15->tracks = VAR_16->tracks;

   if (VAR_22 > VAR_2)
   {
      FUNC_2(VAR_15, "cannot handle %u tracks, restricted to %d", VAR_22, VAR_2);
      VAR_22 = VAR_2;
   }

   for (VAR_15->tracks_num = 0; VAR_15->tracks_num != VAR_22; VAR_15->tracks_num++)
   {
      VAR_15->tracks[VAR_15->tracks_num] = FUNC_19(VAR_15, sizeof(*VAR_15->tracks[0]->priv->module));
      if(!VAR_15->tracks[VAR_15->tracks_num]) break;
   }
   if(VAR_15->tracks_num != VAR_22)
   { VAR_17 = VAR_9; goto error; }


   for (VAR_20 = 0; VAR_20 != VAR_22; ++VAR_20)
   {
      VAR_17 = FUNC_14(VAR_15, VAR_15->tracks[VAR_20], VAR_15->tracks[VAR_20]->priv->module);
      if(VAR_17 != VAR_12) goto error;
   }


   VAR_17 = FUNC_13(VAR_15, FUNC_11('m','o','v','i'), &VAR_18);
   if (VAR_17 != VAR_12)
   {
      FUNC_2(VAR_15, "'movi' LIST not found");
      VAR_17 = VAR_7;
      goto error;
   }


   VAR_16->data_offset = FUNC_8(VAR_15);
   VAR_16->data_size = VAR_18;

   VAR_15->priv->pf_close = VAR_13;
   VAR_15->priv->pf_read = VAR_14;
   VAR_15->priv->pf_seek = FUNC_15;

   if (VAR_21 & VAR_0)
   {
      FUNC_2(VAR_15, "AVIF_MUSTUSEINDEX not supported, playback might not work properly");
   }







   if(FUNC_9(VAR_15))
   {
      VAR_15->capabilities |= VAR_3;
      VAR_15->capabilities |= VAR_5;

      for(VAR_20 = 0; VAR_20 < VAR_15->tracks_num; VAR_20++)
         if(VAR_15->tracks[VAR_20]->priv->module->index_offset) break;

      if (VAR_20 < VAR_15->tracks_num)
      {
         VAR_15->capabilities |= VAR_6;
         if (VAR_21 & VAR_1)
            VAR_15->capabilities |= VAR_4;
      }
      else
      {

         FUNC_0(VAR_15, VAR_16->data_size);

         VAR_17 = FUNC_12(VAR_15, FUNC_11('i','d','x','1'), &VAR_18);
         if (VAR_17 == VAR_12)
         {
            FUNC_2(VAR_15, "'idx1' found");

            VAR_16->index_offset = FUNC_8(VAR_15);
            VAR_16->index_size = VAR_18;
            VAR_15->capabilities |= VAR_6;
            VAR_15->capabilities |= VAR_4;
         }


         FUNC_5(VAR_15, VAR_16->data_offset);
      }
   }

   FUNC_6(VAR_15, "movi");

   for (VAR_20 = 0; VAR_20 != VAR_22; VAR_20++)
   {
      VAR_15->tracks[VAR_20]->priv->module->chunk.state = &VAR_15->priv->module->state;
   }
   VAR_15->priv->module->state.data_offset = FUNC_8(VAR_15);







   VAR_23 = FUNC_1(0);
   FUNC_15(VAR_15, &VAR_23, VAR_11, VAR_10);

   if((VAR_17 = FUNC_10(VAR_15)) != VAR_12) goto error;
   return VAR_12;

error:
   FUNC_2(VAR_15, "error opening stream (%i)", VAR_17);
   for(VAR_20 = 0; VAR_20 < VAR_15->tracks_num; VAR_20++)
      FUNC_20(VAR_15, VAR_15->tracks[VAR_20]);
   VAR_15->tracks = ((void*)0);
   VAR_15->tracks_num = 0;
   if (VAR_16) FUNC_16(VAR_16);
   VAR_15->priv->module = ((void*)0);
   return VAR_17;
}
