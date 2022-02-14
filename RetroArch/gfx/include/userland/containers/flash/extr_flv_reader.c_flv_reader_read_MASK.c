
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_16__ {size_t tracks_num; TYPE_2__** tracks; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {int dts; int pts; size_t track; unsigned int frame_size; unsigned int size; unsigned int buffer_size; int flags; int data; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_19__ {int timestamp; int flags; unsigned int data_offset; unsigned int data_size; size_t track; scalar_t__ tag_position; scalar_t__ data_position; } ;
struct TYPE_18__ {TYPE_6__ state; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_15__ {int is_enabled; } ;
struct TYPE_14__ {TYPE_5__* module; } ;
typedef TYPE_6__ FLV_READER_STATE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int,int,int,int,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_6__*,int ,unsigned int*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_8,
   VC_CONTAINER_PACKET_T *VAR_9, uint32_t VAR_10 )
{
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_8->priv->module;
   VC_CONTAINER_STATUS_T VAR_12 = VAR_7;
   FLV_READER_STATE_T *VAR_13 = &VAR_11->state;
   unsigned int VAR_14;



   VAR_12 = FUNC_2(VAR_8, VAR_13);
   if(VAR_12 != VAR_7) return VAR_12;






   if(VAR_13->track >= VAR_8->tracks_num || !VAR_8->tracks[VAR_13->track]->is_enabled)
   {

      VAR_12 = FUNC_1(VAR_8, VAR_13, 0, 0);
      if(VAR_12 != VAR_7) return VAR_12;
      return VAR_1;
   }

   if((VAR_10 & VAR_6) && !(VAR_10 & VAR_5))
      return FUNC_1(VAR_8, VAR_13, 0, 0);

   VAR_9->dts = VAR_9->pts = VAR_13->timestamp * (int64_t)1000;
   VAR_9->flags = VAR_2;
   if(VAR_13->flags & VAR_0) VAR_9->flags |= VAR_4;
   if(!VAR_13->data_offset) VAR_9->flags |= VAR_3;
   VAR_9->track = VAR_13->track;


   VAR_9->frame_size = VAR_13->data_size;


   VAR_9->size = VAR_13->data_size - VAR_13->data_offset;

   if(VAR_10 & VAR_6)
      return FUNC_1(VAR_8, VAR_13, 0, 0);
   else if(VAR_10 & VAR_5)
      return VAR_7;

   VAR_14 = VAR_9->buffer_size;
   VAR_12 = FUNC_1(VAR_8, VAR_13, VAR_9->data, &VAR_14);
   if(VAR_12 != VAR_7)
   {

      return VAR_12;
   }

   VAR_9->size = VAR_14;
   if(VAR_13->data_offset != VAR_13->data_size)
      VAR_9->flags &= ~VAR_2;

   return VAR_7;
}
