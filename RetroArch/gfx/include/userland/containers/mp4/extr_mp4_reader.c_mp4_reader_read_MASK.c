
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


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_18__ {scalar_t__ status; int offset; unsigned int sample_offset; unsigned int sample_size; scalar_t__ keyframe; int pts; int dts; } ;
struct TYPE_15__ {TYPE_6__ state; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_16__ {size_t tracks_num; TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {size_t track; unsigned int frame_size; unsigned int size; unsigned int buffer_size; int flags; int * data; int pts; int dts; } ;
typedef TYPE_5__ VC_CONTAINER_PACKET_T ;
struct TYPE_14__ {TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_3__* module; } ;
typedef TYPE_6__ MP4_READER_STATE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*,size_t,TYPE_6__*,int *,unsigned int*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t,TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_8,
                                              VC_CONTAINER_PACKET_T *VAR_9, uint32_t VAR_10 )
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_11;
   VC_CONTAINER_STATUS_T VAR_12;
   MP4_READER_STATE_T *VAR_13;
   uint32_t VAR_14, VAR_15;
   unsigned int VAR_16;
   uint8_t *VAR_17 = 0;
   int64_t VAR_18;



   if(!(VAR_10 & VAR_4))
   {
      for(VAR_14 = 0, VAR_15 = 0, VAR_18 = -1; VAR_14 < VAR_8->tracks_num; VAR_14++)
      {
         VAR_11 = VAR_8->tracks[VAR_14]->priv->module;


         if(VAR_11->state.status != VAR_7) continue;

         if(VAR_18 >= 0 && VAR_11->state.offset >= VAR_18) continue;
         VAR_18 = VAR_11->state.offset;
         VAR_15 = VAR_14;
      }
   }
   else VAR_15 = VAR_9->track;

   if(VAR_15 >= VAR_8->tracks_num) return VAR_0;

   VAR_11 = VAR_8->tracks[VAR_15]->priv->module;
   VAR_13 = &VAR_11->state;

   VAR_12 = FUNC_1(VAR_8, VAR_15, VAR_13);
   if(VAR_12 != VAR_7) return VAR_12;

   if(!VAR_9)
      return FUNC_0(VAR_8, VAR_15, VAR_13, 0, 0);

   VAR_9->dts = VAR_13->dts;
   VAR_9->pts = VAR_13->pts;
   VAR_9->flags = VAR_1;
   if(VAR_13->keyframe) VAR_9->flags |= VAR_3;
   if(!VAR_13->sample_offset) VAR_9->flags |= VAR_2;
   VAR_9->track = VAR_15;
   VAR_9->frame_size = VAR_13->sample_size;
   VAR_9->size = VAR_13->sample_size - VAR_13->sample_offset;

   if(VAR_10 & VAR_6)
      return FUNC_0(VAR_8, VAR_15, VAR_13, 0, 0);
   else if((VAR_10 & VAR_5) || !VAR_9->data)
      return VAR_7;

   VAR_17 = VAR_9->data;
   VAR_16 = VAR_9->buffer_size;

   VAR_12 = FUNC_0(VAR_8, VAR_15, VAR_13, VAR_17, &VAR_16);
   if(VAR_12 != VAR_7)
   {

      return VAR_12;
   }

   VAR_9->size = VAR_16;
   if(VAR_13->sample_offset)
      VAR_9->flags &= ~VAR_1;

   return VAR_12;
}
