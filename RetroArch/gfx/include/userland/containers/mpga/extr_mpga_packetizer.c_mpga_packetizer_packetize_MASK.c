
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
struct TYPE_9__ {int state; unsigned int version; unsigned int layer; unsigned int stream_version; unsigned int stream_layer; int frame_size_samples; scalar_t__ frame_size; scalar_t__ bytes_read; int sample_rate; scalar_t__ offset; int lost_sync; int channels; int frame_bitrate; } ;
typedef TYPE_3__ VC_PACKETIZER_MODULE_T ;
typedef int VC_PACKETIZER_FLAGS_T ;
typedef int VC_CONTAINER_TIME_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {scalar_t__ size; int data; int buffer_size; int flags; int dts; int pts; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
typedef int VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_7__ {int time; int stream; TYPE_3__* module; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int *,scalar_t__,int*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,scalar_t__*,int *,unsigned int*,unsigned int*,int *,int *,int *,scalar_t__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15( VC_PACKETIZER_T *VAR_9,
   VC_CONTAINER_PACKET_T *VAR_10, VC_PACKETIZER_FLAGS_T VAR_11 )
{
   VC_PACKETIZER_MODULE_T *VAR_12 = VAR_9->priv->module;
   VC_CONTAINER_BYTESTREAM_T *VAR_13 = &VAR_9->priv->stream;
   VC_CONTAINER_TIME_T *VAR_14 = &VAR_9->priv->time;
   uint8_t VAR_15[VAR_0];
   VC_CONTAINER_STATUS_T VAR_16;
   unsigned int VAR_17, VAR_18;
   int64_t VAR_19, VAR_20;

   while(1) switch (VAR_12->state)
   {
   case 129:
      FUNC_9( VAR_13 );
      if( !VAR_12->lost_sync++ )
         FUNC_0(0, "lost sync");
      VAR_12->state = 131;

   case 131:
      while( FUNC_5( VAR_13, VAR_15, 2 ) == VAR_4 )
      {

          if( VAR_15[0] == 0xff && (VAR_15[1] & 0xe0) == 0xe0 )
          {
             VAR_12->state = 132;
             break;
          }
          FUNC_9( VAR_13 );
          VAR_12->lost_sync++;
      }
      if( VAR_12->state != 132 )
         return VAR_1;

   case 132:
      if( FUNC_5( VAR_13, VAR_15, VAR_0 ) != VAR_4 )
         return VAR_1;

      VAR_16 = FUNC_10( VAR_15,
         &VAR_12->frame_size, &VAR_12->frame_bitrate, &VAR_12->version,
         &VAR_12->layer, &VAR_12->sample_rate, &VAR_12->channels,
         &VAR_12->frame_size_samples, &VAR_12->offset );
      if (VAR_16 != VAR_4)
      {
         FUNC_1(0, "invalid header");
         VAR_12->state = 129;
         break;
      }


      if ((VAR_12->stream_version && VAR_12->stream_version != VAR_12->version) ||
          (VAR_12->stream_layer && VAR_12->stream_layer != VAR_12->layer))
      {
         FUNC_1(0, "invalid header");
         VAR_12->state = 129;
         break;
      }

      if (!VAR_12->frame_size)
      {
         FUNC_1(0, "free format not supported");
         VAR_12->state = 129;
         break;
      }
      VAR_12->state = 128;


   case 128:

      if( FUNC_6( VAR_13, VAR_12->frame_size, VAR_15, VAR_0 ) != VAR_4 )
      {


         if (VAR_11 & VAR_6)
         {
            VAR_12->state = 130;
            break;
         }
         return VAR_1;
      }

      VAR_16 = FUNC_10( VAR_15, 0, 0, &VAR_17, &VAR_18, 0, 0, 0, 0 );
      if (VAR_16 != VAR_4)
      {
         FUNC_1(0, "invalid next header");
         VAR_12->state = 129;
         break;
      }


      if (VAR_12->version != VAR_17 || VAR_12->layer != VAR_18)
      {
         FUNC_1(0, "invalid header");
         VAR_12->state = 129;
         break;
      }

      VAR_12->state = 130;


   case 130:
      if( VAR_12->lost_sync )
         FUNC_0(0, "recovered sync after %i bytes", VAR_12->lost_sync);
      VAR_12->lost_sync = 0;

      FUNC_8( VAR_13, VAR_12->offset );
      VAR_12->stream_version = VAR_12->version;
      VAR_12->stream_layer = VAR_12->layer;

      FUNC_14(VAR_14, VAR_12->sample_rate, 1);
      FUNC_4(VAR_13, &VAR_19, &VAR_20, 1);

      FUNC_13(VAR_14, VAR_19);

      VAR_12->bytes_read = 0;
      VAR_12->state = 133;


   case 133:
      if( FUNC_7( VAR_13 ) < VAR_12->frame_size)
         return VAR_1;

      VAR_10->size = VAR_12->frame_size - VAR_12->bytes_read;
      VAR_10->pts = VAR_10->dts = VAR_5;
      VAR_10->flags = VAR_2;

      if(!VAR_12->bytes_read)
      {
         VAR_10->pts = VAR_10->dts = FUNC_12(VAR_14);
         VAR_10->flags |= VAR_3;
      }

      if(VAR_11 & VAR_7)
         return VAR_4;

      if(VAR_11 & VAR_8)
      {
         FUNC_8( VAR_13, VAR_10->size );
      }
      else
      {
         VAR_10->size = FUNC_2(VAR_10->size, VAR_10->buffer_size);
         FUNC_3( VAR_13, VAR_10->data, VAR_10->size );
      }
      VAR_12->bytes_read += VAR_10->size;

      if(VAR_12->bytes_read == VAR_12->frame_size)
      {
         FUNC_11(VAR_14, VAR_12->frame_size_samples);
         VAR_12->state = 132;
      }
      return VAR_4;

   default:
      break;
   };

   return VAR_4;
}
