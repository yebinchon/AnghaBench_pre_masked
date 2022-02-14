
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_19__ {TYPE_3__* priv; int format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {size_t tracks_num; TYPE_4__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {int flags; int codec; int extradata_size; scalar_t__ codec_variant; } ;
typedef TYPE_6__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_18__ {TYPE_2__* module; } ;
struct TYPE_17__ {int offset; TYPE_1__* sample_table; scalar_t__ fourcc; } ;
struct TYPE_16__ {int entry_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (int ,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_14, VC_CONTAINER_ES_FORMAT_T *VAR_15 )
{
   VC_CONTAINER_STATUS_T VAR_16;
   VC_CONTAINER_TRACK_T *VAR_17;
   uint32_t VAR_18 = 0;

   if(!(VAR_15->flags & VAR_12))
      return VAR_11;


   switch(VAR_15->codec)
   {
   case 142: VAR_18 = FUNC_0('s','a','m','r'); break;
   case 141: VAR_18 = FUNC_0('s','a','w','b'); break;
   case 140: VAR_18 = FUNC_0('s','a','w','p'); break;
   case 139: VAR_18 = FUNC_0('s','e','v','c'); break;
   case 130: VAR_18 = FUNC_0('m','p','4','a'); break;
   case 128: VAR_18 = FUNC_0('m','p','4','a'); break;

   case 129: VAR_18 = FUNC_0('m','p','4','v'); break;
   case 136: VAR_18 = FUNC_0('m','p','4','v'); break;
   case 138: VAR_18 = FUNC_0('s','2','6','3'); break;
   case 137:
      if(VAR_15->codec_variant == FUNC_0('a','v','c','C')) VAR_18 = FUNC_0('a','v','c','1'); break;
   case 135: VAR_18 = FUNC_0('j','p','e','g'); break;
   case 134: VAR_18 = FUNC_0('m','j','p','a'); break;
   case 133: VAR_18 = FUNC_0('m','j','p','b'); break;
   case 132: VAR_18 = FUNC_0('m','p','e','g'); break;
   case 131: VAR_18 = FUNC_0('m','p','e','g'); break;

   default: VAR_18 = 0; break;
   }

   if(!VAR_18) return VAR_10;


   if(VAR_14->tracks_num >= VAR_7) return VAR_9;
   VAR_14->tracks[VAR_14->tracks_num] = VAR_17 =
      FUNC_1(VAR_14, sizeof(*VAR_14->tracks[0]->priv->module));
   if(!VAR_17) return VAR_8;

   if(VAR_15->extradata_size)
   {
      VAR_16 = FUNC_4( VAR_14, VAR_17, VAR_15->extradata_size );
      if(VAR_16) goto error;
   }

   FUNC_2(VAR_17->format, VAR_15, VAR_15->extradata_size);
   VAR_17->priv->module->fourcc = VAR_18;
   VAR_17->priv->module->offset = -1;
   VAR_17->priv->module->sample_table[VAR_6].entry_size = 8;
   VAR_17->priv->module->sample_table[VAR_5].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_3].entry_size = 12;
   VAR_17->priv->module->sample_table[VAR_2].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_4].entry_size = 4;
   VAR_17->priv->module->sample_table[VAR_0].entry_size = 8;
   VAR_17->priv->module->sample_table[VAR_1].entry_size = 8;

   VAR_14->tracks_num++;
   return VAR_13;

 error:
   FUNC_3(VAR_14, VAR_17);
   return VAR_16;
}
