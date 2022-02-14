
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_9__ {int payload; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int buffer_size; int size; int data; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_7__ {TYPE_3__* module; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int,int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int,char*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      VC_CONTAINER_PACKET_T *VAR_5,
      uint32_t VAR_6)
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_7 = VAR_4->priv->module;
   VC_CONTAINER_BITS_T *VAR_8 = &VAR_7->payload;
   uint32_t VAR_9;

   FUNC_4(VAR_3);

   if (!VAR_5)
   {

      FUNC_2(VAR_3, VAR_8);
      return VAR_2;
   }


   VAR_9 = FUNC_0(VAR_3, VAR_8);

   if (VAR_6 & VAR_1)
      FUNC_3(VAR_3, VAR_8, VAR_9, "Packet data");
   else {
      if (!(VAR_6 & VAR_0))
      {
         if (VAR_9 > VAR_5->buffer_size)
            VAR_9 = VAR_5->buffer_size;

         FUNC_1(VAR_3, VAR_8, VAR_9, VAR_5->data, "Packet data");
      }
      VAR_5->size = VAR_9;
   }

   return VAR_2;
}
