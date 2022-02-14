
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {int is_enabled; TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_21__ {int tracks_num; TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {size_t track; int size; int buffer_size; int flags; int data; int pts; int dts; } ;
typedef TYPE_7__ VC_CONTAINER_PACKET_T ;
struct TYPE_24__ {int eos; int corrupted; int flags; size_t level; TYPE_4__* levels; int pts; } ;
struct TYPE_23__ {TYPE_9__ state; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
struct TYPE_19__ {int data_offset; } ;
struct TYPE_18__ {TYPE_2__* module; } ;
struct TYPE_17__ {TYPE_9__* state; } ;
struct TYPE_16__ {TYPE_8__* module; } ;
typedef TYPE_9__ MKV_READER_STATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_9__*,int ,int*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_9__*,int*,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_10,
   VC_CONTAINER_PACKET_T *VAR_11, uint32_t VAR_12)
{
   VC_CONTAINER_MODULE_T *VAR_13 = VAR_10->priv->module;
   VC_CONTAINER_TRACK_T *VAR_14 = 0;
   VC_CONTAINER_STATUS_T VAR_15 = VAR_9;
   uint32_t VAR_16 = 0, VAR_17 = 0, VAR_18;
   MKV_READER_STATE_T *VAR_19 = &VAR_13->state;


   if(VAR_12 & VAR_6)
   {
      VAR_14 = VAR_10->tracks[VAR_11->track];
      VAR_19 = VAR_14->priv->module->state;
   }


   if(VAR_19->eos) return VAR_2;
   if(VAR_19->corrupted) return VAR_1;


   VAR_15 = FUNC_1(VAR_10, VAR_19, &VAR_17, &VAR_18);
   if(VAR_15 == VAR_2) VAR_19->eos = 1;
   if(VAR_15 == VAR_1) VAR_19->corrupted = 1;
   if(VAR_15 != VAR_9) return VAR_15;

   if(VAR_17 >= VAR_10->tracks_num || !VAR_10->tracks[VAR_17]->is_enabled)
   {

      VAR_15 = FUNC_0(VAR_10, VAR_19, 0, &VAR_18);
      if (VAR_15 != VAR_9) return VAR_15;
      return VAR_0;
   }

   if((VAR_12 & VAR_8) && !(VAR_12 & VAR_7))
      return FUNC_0(VAR_10, VAR_19, 0, &VAR_18);

   VAR_11->dts = VAR_11->pts = VAR_19->pts;
   VAR_11->flags = 0;
   if(VAR_19->flags & 0x80) VAR_11->flags |= VAR_5;
   if(!VAR_19->levels[VAR_19->level].data_offset) VAR_11->flags |= VAR_4;
   VAR_11->flags |= VAR_3;
   VAR_11->size = VAR_18;
   VAR_11->track = VAR_17;

   if(VAR_12 & VAR_8)
      return FUNC_0(VAR_10, VAR_19, 0, &VAR_18 );
   else if(VAR_12 & VAR_7)
      return VAR_9;


   VAR_16 = VAR_11->buffer_size;
   VAR_15 = FUNC_0(VAR_10, VAR_19, VAR_11->data, &VAR_16);
   if(VAR_15 != VAR_9)
   {

      return VAR_15;
   }

   VAR_11->size = VAR_16;
   if(VAR_16 != VAR_18)
      VAR_11->flags &= ~VAR_3;

   return VAR_15;
}
