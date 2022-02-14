
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {scalar_t__ framework_data; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_7__ {int stream; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;

VC_CONTAINER_STATUS_T FUNC_1( VC_PACKETIZER_T *VAR_1,
   VC_CONTAINER_PACKET_T *VAR_2)
{


   VAR_2->framework_data = 0;
   FUNC_0(&VAR_1->priv->stream, VAR_2);
   return VAR_0;
}
