
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_15__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {int dts; int pts; scalar_t__ size; scalar_t__ buffer_size; scalar_t__ flags; int data; scalar_t__ track; } ;
typedef TYPE_5__ VC_CONTAINER_PACKET_T ;
struct TYPE_17__ {int position; scalar_t__ frame_data_left; scalar_t__ block_size; scalar_t__ data_size; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_2__* format; } ;
struct TYPE_13__ {int bitrate; } ;
struct TYPE_12__ {TYPE_6__* module; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_6,
                                              VC_CONTAINER_PACKET_T *VAR_7, uint32_t VAR_8 )
{
   VC_CONTAINER_MODULE_T *VAR_9 = VAR_6->priv->module;
   uint32_t VAR_10 = 0, VAR_11, VAR_12;
   int64_t VAR_13;

   VAR_13 = VAR_9->position * 8000000 / VAR_6->tracks[0]->format->bitrate;
   VAR_12 = VAR_9->frame_data_left;
   if(!VAR_12)
   {
      VAR_12 = VAR_9->block_size;
      VAR_10 |= VAR_2;
   }
   VAR_9->frame_data_left = 0;

   if(VAR_9->position + VAR_12 > VAR_9->data_size)
      VAR_12 = VAR_9->data_size - VAR_9->position;
   if(VAR_12 == 0) return VAR_0;

   if((VAR_8 & VAR_4) && !(VAR_8 & VAR_3))
   {
      VAR_11 = FUNC_2(VAR_6, VAR_12);
      VAR_9->frame_data_left = VAR_12 - VAR_11;
      VAR_9->position += VAR_11;
      return FUNC_3(VAR_6);
   }

   VAR_7->flags = VAR_10;
   VAR_7->dts = VAR_7->pts = VAR_13;
   VAR_7->track = 0;

   if(VAR_8 & VAR_4)
   {
      VAR_11 = FUNC_2(VAR_6, VAR_12);
      VAR_9->frame_data_left = VAR_12 - VAR_11;
      if(!VAR_9->frame_data_left) VAR_7->flags |= VAR_1;
      VAR_9->position += VAR_11;
      VAR_7->size += VAR_11;
      return FUNC_3(VAR_6);
   }

   if(VAR_8 & VAR_3)
      return VAR_5;

   VAR_11 = FUNC_0(VAR_12, VAR_7->buffer_size - VAR_7->size);
   VAR_11 = FUNC_1(VAR_6, VAR_7->data, VAR_11);
   VAR_9->frame_data_left = VAR_12 - VAR_11;
   if(!VAR_9->frame_data_left) VAR_7->flags |= VAR_1;
   VAR_9->position += VAR_11;
   VAR_7->size += VAR_11;

   return FUNC_3(VAR_6);
}
