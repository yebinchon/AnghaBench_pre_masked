
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
struct TYPE_10__ {int state; size_t max_frame_size; size_t frame_size; size_t bytes_per_sample; size_t bytes_read; size_t conversion_factor; size_t samples_per_frame; int conversion; } ;
typedef TYPE_3__ VC_PACKETIZER_MODULE_T ;
typedef int VC_PACKETIZER_FLAGS_T ;
typedef int VC_CONTAINER_TIME_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {size_t size; int data; int buffer_size; int flags; int dts; int pts; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
typedef int VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_8__ {int time; int stream; TYPE_3__* module; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int *,int *,size_t*,int) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (TYPE_2__*,int *,size_t,int ) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9( VC_PACKETIZER_T *VAR_10,
   VC_CONTAINER_PACKET_T *VAR_11, VC_PACKETIZER_FLAGS_T VAR_12 )
{
   VC_PACKETIZER_MODULE_T *VAR_13 = VAR_10->priv->module;
   VC_CONTAINER_BYTESTREAM_T *VAR_14 = &VAR_10->priv->stream;
   VC_CONTAINER_TIME_T *VAR_15 = &VAR_10->priv->time;
   int64_t VAR_16, VAR_17;
   size_t VAR_18, VAR_19;

   while(1) switch (VAR_13->state)
   {
   case 128:

      if(FUNC_3(VAR_14) < VAR_13->max_frame_size &&
         !(VAR_12 & VAR_7))
         return VAR_2;
      if(!FUNC_3(VAR_14))
         return VAR_2;

      VAR_13->frame_size = FUNC_3(VAR_14);
      if(VAR_13->frame_size > VAR_13->max_frame_size)
         VAR_13->frame_size = VAR_13->max_frame_size;
      FUNC_2(VAR_14, &VAR_16, &VAR_17, &VAR_18, 1);
      FUNC_8(VAR_15, VAR_16);
      if(VAR_16 != VAR_6)
         FUNC_6(VAR_15, VAR_18 / VAR_13->bytes_per_sample);

      VAR_13->bytes_read = 0;
      VAR_13->state = 129;


   case 129:
      VAR_19 = VAR_13->frame_size - VAR_13->bytes_read;
      VAR_11->pts = VAR_11->dts = VAR_6;
      VAR_11->flags = VAR_3;
      VAR_11->size = (VAR_19 * VAR_13->conversion_factor) >> VAR_1;

      if(!VAR_13->bytes_read)
      {
         VAR_11->pts = VAR_11->dts = FUNC_7(VAR_15);
         VAR_11->flags |= VAR_4;
      }

      if(VAR_12 & VAR_8)
         return VAR_5;

      if(VAR_12 & VAR_9)
      {
         FUNC_4( VAR_14, VAR_19 );
      }
      else
      {
         VAR_11->size = FUNC_0(VAR_11->size, VAR_11->buffer_size);
         VAR_19 = (VAR_11->size << VAR_1) / VAR_13->conversion_factor;
         VAR_11->size = (VAR_19 * VAR_13->conversion_factor) >> VAR_1;

         if(VAR_13->conversion != VAR_0)
            FUNC_5(VAR_10, VAR_14, VAR_19, VAR_11->data);
         else
            FUNC_1(VAR_14, VAR_11->data, VAR_11->size);
      }
      VAR_13->bytes_read += VAR_19;

      if(VAR_13->bytes_read == VAR_13->frame_size)
      {
         FUNC_6(VAR_15, VAR_13->samples_per_frame);
         VAR_13->state = 128;
      }
      return VAR_5;

   default:
      break;
   };

   return VAR_5;
}
