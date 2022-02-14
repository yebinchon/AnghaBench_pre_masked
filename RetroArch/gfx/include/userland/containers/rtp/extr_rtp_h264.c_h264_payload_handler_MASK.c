
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_11__ {int flags; scalar_t__ extra; int payload; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {int* data; int buffer_size; int size; int flags; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_13__ {int nal_unit_size; int header_bytes_to_write; int nal_header; int flags; } ;
struct TYPE_9__ {TYPE_3__* module; } ;
typedef TYPE_5__ H264_PAYLOAD_T ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int,int*,char*) ;
 int FUNC_2 (int *,int *,int,char*) ;
 int FUNC_3 (int *,int *,int,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (int *,TYPE_3__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_9,
      VC_CONTAINER_TRACK_T *VAR_10,
      VC_CONTAINER_PACKET_T *VAR_11,
      uint32_t VAR_12)
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_13 = VAR_10->priv->module;
   VC_CONTAINER_BITS_T *VAR_14 = &VAR_13->payload;
   H264_PAYLOAD_T *VAR_15 = (H264_PAYLOAD_T *)VAR_13->extra;
   uint32_t VAR_16 = 0;
   uint8_t VAR_17;
   uint32_t VAR_18, VAR_19;
   uint8_t *VAR_20;
   VC_CONTAINER_STATUS_T VAR_21 = VAR_8;
   bool VAR_22 = 0;

   if (FUNC_4(VAR_13->flags, VAR_2))
   {
      VAR_21 = FUNC_8(VAR_9, VAR_13);
      if (VAR_21 != VAR_8)
         return VAR_21;
   }

   if (FUNC_4(VAR_15->flags, VAR_0))
   {
      VAR_16 |= VAR_5;

      if (!(VAR_12 & VAR_6))
         FUNC_5(VAR_15->flags, VAR_0);
   }

   if (!VAR_15->nal_unit_size && FUNC_0(VAR_9, VAR_14))
   {
      uint32_t VAR_23;


      VAR_23 = FUNC_2(VAR_9, VAR_14, 24, "STAP unit header");
      VAR_15->nal_unit_size = VAR_23 >> 8;
      if (VAR_15->nal_unit_size > FUNC_0(VAR_9, VAR_14))
      {
         FUNC_6(VAR_9, "H.264: STAP-A NAL unit size bigger than payload");
         return VAR_3;
      }
      VAR_15->header_bytes_to_write = 5;
      VAR_15->nal_header = (uint8_t)VAR_23;
   }

   VAR_17 = VAR_15->header_bytes_to_write;
   VAR_18 = VAR_15->nal_unit_size + VAR_17;

   if (VAR_11 && !(VAR_12 & VAR_7))
   {
      if (VAR_12 & VAR_6)
      {


         VAR_22 = (VAR_15->nal_unit_size == FUNC_0(VAR_9, VAR_14));
      } else {
         VAR_19 = 0;
         VAR_20 = VAR_11->data;

         if (VAR_18 > VAR_11->buffer_size)
         {

            VAR_18 = VAR_11->buffer_size;
         }


         while (VAR_19 < VAR_18 && VAR_17)
         {
            uint8_t VAR_24;

            switch (VAR_17)
            {
            case 2: VAR_24 = 0x01; break;
            case 1: VAR_24 = VAR_15->nal_header; break;
            default: VAR_24 = 0x00;
            }
            VAR_20[VAR_19++] = VAR_24;
            VAR_17--;
         }
         VAR_15->header_bytes_to_write = VAR_17;

         if (VAR_19 < VAR_18)
         {
            FUNC_1(VAR_9, VAR_14, VAR_18 - VAR_19, VAR_20 + VAR_19, "Packet data");
            VAR_15->nal_unit_size -= (VAR_18 - VAR_19);
         }



         VAR_22 = !FUNC_0(VAR_9, VAR_14);
      }
      VAR_11->size = VAR_18;
   } else {
      VAR_15->header_bytes_to_write = 0;
      FUNC_3(VAR_9, VAR_14, VAR_15->nal_unit_size, "Packet data");
      VAR_22 = !FUNC_0(VAR_9, VAR_14);
      VAR_15->nal_unit_size = 0;
   }


   if (VAR_22 && FUNC_4(VAR_13->flags, VAR_1))
   {
      VAR_16 |= VAR_4;


      if (!(VAR_12 & VAR_6))
         FUNC_7(VAR_15->flags, VAR_0);
   }

   if (VAR_11)
      VAR_11->flags = VAR_16;

   return VAR_21;
}
