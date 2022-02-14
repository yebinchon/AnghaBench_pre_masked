
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ extra; int payload; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_5__ {int header_bytes_to_write; int nal_header; int flags; int nal_unit_size; } ;
typedef TYPE_2__ H264_PAYLOAD_T ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;


 int VAR_3 ;




 int VAR_4 ;
 int FUNC_7 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_8,
      VC_CONTAINER_TRACK_MODULE_T *VAR_9)
{
   VC_CONTAINER_BITS_T *VAR_10 = &VAR_9->payload;
   H264_PAYLOAD_T *VAR_11 = (H264_PAYLOAD_T *)VAR_9->extra;
   uint8_t VAR_12;
   uint8_t VAR_13;


   VAR_12 = FUNC_1(VAR_8, VAR_10, 8, "nal_unit_header");


   if (VAR_12 & VAR_3)
   {
      FUNC_5(VAR_8, "H.264: Invalid NAL unit (top bit of header set)");
      return VAR_5;
   }


   VAR_11->header_bytes_to_write = 5;
   VAR_11->nal_header = VAR_12;
   VAR_11->nal_unit_size = FUNC_0(VAR_8, VAR_10);

   switch (VAR_12 & VAR_4)
   {
   case 129:

      FUNC_4(VAR_11->flags, VAR_2);

      VAR_11->nal_unit_size = 0;
      break;

   case 133:

      VAR_13 = FUNC_1(VAR_8, VAR_10, 8, "fragment_header");
      VAR_11->nal_unit_size--;

      if (FUNC_2(VAR_13, VAR_1) ||
            FUNC_3(VAR_11->flags, VAR_2))
      {

         VAR_11->header_bytes_to_write = 0;


         if (FUNC_3(VAR_13, VAR_0))
            FUNC_4(VAR_11->flags, VAR_2);
      } else {

         FUNC_7(VAR_11->flags, VAR_2);


         VAR_13 &= VAR_4;
         VAR_13 |= (VAR_12 & ~VAR_4);
         VAR_11->nal_header = VAR_13;
      }
      break;

   case 128:
   case 131:
   case 130:
   case 132:
      FUNC_6(VAR_8, "H.264: Unsupported RTP NAL unit type: %u", VAR_12 & VAR_4);
      return VAR_6;

   default:

      FUNC_4(VAR_11->flags, VAR_2);
   }

   return VAR_7;
}
