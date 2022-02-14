
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_13__ {int flags; scalar_t__ extra; int payload; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {scalar_t__ buffer_size; scalar_t__ size; int data; int dts; int pts; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_16__ {scalar_t__ available; scalar_t__ dts_delta; scalar_t__ cts_delta; } ;
struct TYPE_15__ {TYPE_6__ au_info; } ;
struct TYPE_11__ {TYPE_3__* module; } ;
typedef TYPE_5__ MP4_PAYLOAD_T ;
typedef TYPE_6__ AU_INFO_T ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,scalar_t__,int ,char*) ;
 int FUNC_2 (int *,int *,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_5__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_5,
      VC_CONTAINER_TRACK_T *VAR_6,
      VC_CONTAINER_PACKET_T *VAR_7,
      uint32_t VAR_8)
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_9 = VAR_6->priv->module;
   VC_CONTAINER_BITS_T *VAR_10 = &VAR_9->payload;
   MP4_PAYLOAD_T *VAR_11 = (MP4_PAYLOAD_T *)VAR_9->extra;
   AU_INFO_T *VAR_12 = &VAR_11->au_info;
   bool VAR_13 = FUNC_4(VAR_9->flags, VAR_0);
   uint32_t VAR_14;
   uint32_t VAR_15;
   VC_CONTAINER_STATUS_T VAR_16 = VAR_4;

   if (VAR_13)
   {
      VAR_16 = FUNC_5(VAR_5, VAR_9);
      if (VAR_16 != VAR_4)
         return VAR_16;
   }

   if (!VAR_12->available)
   {
      VAR_16 = FUNC_6(VAR_5, VAR_11, VAR_13);
      if (VAR_16 != VAR_4)
         return VAR_16;
   }

   if (VAR_7)
   {

      VAR_7->pts += VAR_12->cts_delta;
      VAR_7->dts += VAR_12->dts_delta;
   }

   VAR_15 = VAR_12->available;
   VAR_14 = FUNC_0(VAR_5, VAR_10);
   if (VAR_15 > VAR_14)
   {

      VAR_15 = VAR_14;
   }

   if (VAR_7 && !(VAR_8 & VAR_3))
   {
      if (!(VAR_8 & VAR_2))
      {
         if (VAR_15 > VAR_7->buffer_size)
            VAR_15 = VAR_7->buffer_size;

         FUNC_1(VAR_5, VAR_10, VAR_15, VAR_7->data, "Packet data");
      }
      VAR_7->size = VAR_15;
   } else {
      FUNC_2(VAR_5, VAR_10, VAR_15, "Packet data");
   }

   if (!(VAR_8 & VAR_2))
      VAR_12->available -= VAR_15;

   return FUNC_3(VAR_5, VAR_10) ? VAR_4 : VAR_1;
}
