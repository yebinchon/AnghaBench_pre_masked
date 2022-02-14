
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int is_enabled; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_15__ {void* duration; TYPE_2__** tracks; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ pts; int data; int buffer_size; int dts; int flags; int track; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_17__ {scalar_t__ frame_data_left; int bitrate; int frame_bitrate; scalar_t__ frame_size; scalar_t__ frame_time_pos; scalar_t__ frame_index; scalar_t__ frame_offset; void* data_size; void* num_frames; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {TYPE_5__* module; } ;


 void* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_7,
   VC_CONTAINER_PACKET_T *VAR_8, uint32_t VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = VAR_7->priv->module;
   VC_CONTAINER_TRACK_T *VAR_11 = VAR_7->tracks[0];
   VC_CONTAINER_STATUS_T VAR_12 = VAR_5;

   if (VAR_10->frame_data_left == 0)
   {
      VAR_12 = FUNC_6(VAR_7);
      if (VAR_12 != VAR_5) goto error;
   }

   if (VAR_10->bitrate)
   {

      VAR_10->bitrate = (VAR_10->bitrate * 31 + VAR_10->frame_bitrate) >> 5;
   }
   else
   {
      VAR_10->bitrate = VAR_10->frame_bitrate;
   }


   if (!VAR_11->is_enabled ||
       ((VAR_9 & VAR_4) && !(VAR_9 & VAR_3)))
   {

      FUNC_3(VAR_7, VAR_10->frame_size);
      VAR_10->frame_data_left = 0;
      if(!VAR_11->is_enabled)
         VAR_12 = VAR_0;
      goto end;
   }


   VAR_8->flags = VAR_8->track = 0;
   if (VAR_10->frame_data_left == VAR_10->frame_size)
      VAR_8->flags |= VAR_1;
   else
      VAR_8->flags |= VAR_2;

   VAR_8->size = VAR_10->frame_data_left;

   VAR_8->pts = VAR_10->frame_time_pos;
   VAR_8->dts = VAR_6;

   if ((VAR_9 & VAR_4))
   {
      FUNC_3(VAR_7, VAR_10->frame_size);
      VAR_10->frame_data_left = 0;
      goto end;
   }

   if (VAR_9 & VAR_3)
      return VAR_5;

   VAR_8->size = FUNC_1(VAR_8->buffer_size, VAR_10->frame_data_left);
   VAR_8->size = FUNC_2(VAR_7, VAR_8->data, VAR_8->size);
   VAR_10->frame_data_left -= VAR_8->size;

 end:
   if (VAR_10->frame_data_left == 0)
   {
      VAR_10->frame_index++;
      VAR_10->frame_offset += VAR_10->frame_size;
      VAR_10->frame_time_pos = FUNC_5(VAR_7);






   }

   return VAR_12 == VAR_5 ? FUNC_4(VAR_7) : VAR_12;

error:
   return VAR_12;
}
