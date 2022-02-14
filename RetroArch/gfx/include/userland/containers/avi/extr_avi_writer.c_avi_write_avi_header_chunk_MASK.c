
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


typedef int uint32_t ;
struct TYPE_19__ {TYPE_5__* format; TYPE_2__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {int chunk_index; int max_chunk_size; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_21__ {int tracks_num; TYPE_6__** tracks; TYPE_1__* priv; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {scalar_t__ index_status; scalar_t__ index_offset; } ;
typedef TYPE_9__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {scalar_t__ es_type; TYPE_4__* type; } ;
struct TYPE_16__ {int width; int height; int frame_rate_num; int frame_rate_den; } ;
struct TYPE_17__ {TYPE_3__ video; } ;
struct TYPE_15__ {TYPE_7__* module; } ;
struct TYPE_14__ {TYPE_9__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int FUNC_4 (TYPE_8__*,int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_4->priv->module;
   uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
   uint32_t VAR_10, VAR_11 = 0, VAR_12 = 0;
   uint32_t VAR_13 = VAR_4->tracks_num;
   unsigned int VAR_14;

   for (VAR_14 = 0; VAR_14 < VAR_4->tracks_num; VAR_14++)
   {
      VC_CONTAINER_TRACK_T *VAR_15 = VAR_4->tracks[VAR_14];
      VC_CONTAINER_TRACK_MODULE_T *VAR_16 = VAR_4->tracks[VAR_14]->priv->module;
      if (VAR_15->format->es_type == VAR_2)
      {
         VAR_7 = VAR_15->format->type->video.width;
         VAR_8 = VAR_15->format->type->video.height;
         if (VAR_15->format->type->video.frame_rate_num)
            VAR_9 = VAR_15->format->type->video.frame_rate_den * FUNC_1(1000000) /
                              VAR_15->format->type->video.frame_rate_num;
         VAR_11 = VAR_16->chunk_index;
         VAR_12 = VAR_16->max_chunk_size;
         break;
      }
   }

   VAR_10 = (VAR_5->index_offset && VAR_5->index_status == VAR_3) ?
      (VAR_0 | VAR_1) : 0;

   FUNC_3(VAR_4, FUNC_2('a','v','i','h'), "Chunk ID");
   FUNC_4(VAR_4, 56, "Chunk Size");
   FUNC_4(VAR_4, VAR_9, "dwMicroSecPerFrame");
   FUNC_4(VAR_4, VAR_6 >> 3, "dwMaxBytesPerSec");
   FUNC_4(VAR_4, 0, "dwPaddingGranularity");
   FUNC_4(VAR_4, VAR_10, "dwFlags");
   FUNC_4(VAR_4, VAR_11, "dwTotalFrames");
   FUNC_4(VAR_4, 0, "dwInitialFrames");
   FUNC_4(VAR_4, VAR_13, "dwStreams");
   FUNC_4(VAR_4, VAR_12, "dwSuggestedBufferSize");
   FUNC_4(VAR_4, VAR_7, "dwWidth");
   FUNC_4(VAR_4, VAR_8, "dwHeight");
   FUNC_4(VAR_4, 0, "dwReserved0");
   FUNC_4(VAR_4, 0, "dwReserved1");
   FUNC_4(VAR_4, 0, "dwReserved2");
   FUNC_4(VAR_4, 0, "dwReserved3");

   return FUNC_0(VAR_4);
}
