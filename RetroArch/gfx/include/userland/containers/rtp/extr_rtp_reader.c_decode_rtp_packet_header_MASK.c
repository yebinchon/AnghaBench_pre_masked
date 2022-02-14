
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int timestamp; int payload_type; int expected_ssrc; int timestamp_base; int flags; int payload; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int,char*) ;
 int FUNC_4 (int *,int *,int,char*) ;
 int FUNC_5 (int *,int *,int,char*) ;
 int FUNC_6 (int *,int *,int ,char*) ;
 int FUNC_7 (int *,int *,int,char*) ;
 int FUNC_8 (int *,int *,int,char*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_15(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_MODULE_T *VAR_3)
{
   VC_CONTAINER_BITS_T *VAR_4 = &VAR_3->payload;
   uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
   uint32_t VAR_10, VAR_11;
   uint16_t VAR_12;


   VAR_5 = FUNC_4(VAR_2, VAR_4, 2, "Version");
   VAR_6 = FUNC_4(VAR_2, VAR_4, 1, "Has padding");
   VAR_7 = FUNC_4(VAR_2, VAR_4, 1, "Has extension");
   VAR_8 = FUNC_4(VAR_2, VAR_4, 4, "CSRC count");
   VAR_9 = FUNC_4(VAR_2, VAR_4, 1, "Has marker");
   VAR_10 = FUNC_4(VAR_2, VAR_4, 7, "Payload type");
   VAR_12 = FUNC_3(VAR_2, VAR_4, 16, "Sequence number");
   VAR_3->timestamp = FUNC_4(VAR_2, VAR_4, 32, "Timestamp");
   VAR_11 = FUNC_4(VAR_2, VAR_4, 32, "SSRC");


   if (!FUNC_9(VAR_2, VAR_4))
      return;


   if (VAR_5 != 2 || VAR_10 != VAR_3->payload_type)
   {
      FUNC_2(VAR_2, VAR_4);
      return;
   }
   if (FUNC_10(VAR_3->flags, VAR_1) && (VAR_11 != VAR_3->expected_ssrc))
   {
      FUNC_12(VAR_2, "RTP: Unexpected SSRC (0x%8.8X)", VAR_11);
      FUNC_2(VAR_2, VAR_4);
      return;
   }


   if (!FUNC_14(VAR_3, VAR_12))
   {
      FUNC_2(VAR_2, VAR_4);
      return;
   }


   if (VAR_6)
   {
      VC_CONTAINER_BITS_T VAR_13;
      uint32_t VAR_14 = FUNC_0(VAR_2, VAR_4);
      uint8_t VAR_15;

      FUNC_1(VAR_2, &VAR_13, VAR_4);

      FUNC_8(VAR_2, &VAR_13, VAR_14 - 1, "Skip to padding length");
      VAR_15 = FUNC_5(VAR_2, &VAR_13, 8, "Padding length");

      FUNC_6(VAR_2, VAR_4, VAR_15, "Remove padding");
   }


   FUNC_7(VAR_2, VAR_4, VAR_8 << 5, "CSRC section");

   if (VAR_7)
   {
      uint32_t VAR_16;


      FUNC_7(VAR_2, VAR_4, 16, "Extension ID");
      VAR_16 = FUNC_4(VAR_2, VAR_4, 16, "Extension length") << 5;
      FUNC_7(VAR_2, VAR_4, VAR_16, "Extension data");
   }


   if (VAR_9)
      FUNC_13(VAR_3->flags, VAR_0);
   else
      FUNC_11(VAR_3->flags, VAR_0);


   if (!VAR_3->timestamp_base)
      VAR_3->timestamp_base = VAR_3->timestamp;
   VAR_3->timestamp -= VAR_3->timestamp_base;
}
