
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {int is_enabled; TYPE_6__* format; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_17__ {int tracks_num; TYPE_3__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_18__ {int extradata_size; scalar_t__ extradata; int flags; int group_id; scalar_t__ language; int bitrate; int * type; int codec_variant; int codec; int es_type; } ;
typedef TYPE_6__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_15__ {int is_enabled; TYPE_6__* format; scalar_t__ meta_num; } ;
struct TYPE_14__ {TYPE_1__* module; } ;
struct TYPE_13__ {TYPE_5__* reader; } ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_T *VAR_3 )
{
   VC_CONTAINER_T *VAR_4 = VAR_3->priv->module->reader;
   VC_CONTAINER_ES_FORMAT_T *VAR_5, *VAR_6;

   if (VAR_4->tracks_num != 1)
   {
      FUNC_1(VAR_2, "RTSP: Expected track reader to have one track, has %d", VAR_4->tracks_num);
      return VAR_0;
   }

   if (VAR_4->tracks[0]->meta_num)
   {
      FUNC_0(VAR_2, "RTSP: Track reader has meta data - not supported");
   }

   VAR_5 = VAR_4->tracks[0]->format;
   VAR_6 = VAR_3->format;


   VAR_6->es_type = VAR_5->es_type;
   VAR_6->codec = VAR_5->codec;
   VAR_6->codec_variant = VAR_5->codec_variant;
   *VAR_6->type = *VAR_5->type;
   VAR_6->bitrate = VAR_5->bitrate;
   FUNC_2(VAR_6->language, VAR_5->language, sizeof(VAR_6->language));
   VAR_6->group_id = VAR_5->group_id;
   VAR_6->flags = VAR_5->flags;

   if (VAR_5->extradata)
   {
      VC_CONTAINER_STATUS_T VAR_7;
      uint32_t VAR_8 = VAR_5->extradata_size;

      VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_8);
      if (VAR_7 != VAR_1)
         return VAR_7;

      FUNC_2(VAR_6->extradata, VAR_5->extradata, VAR_8);
      VAR_6->extradata_size = VAR_8;
   }

   VAR_3->is_enabled = VAR_4->tracks[0]->is_enabled;

   return VAR_1;
}
