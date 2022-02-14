
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_PACKETIZER_FLAGS_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int data; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_8__ {int (* pf_packetize ) (TYPE_2__*,TYPE_3__*,int) ;TYPE_3__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;

VC_CONTAINER_STATUS_T FUNC_1( VC_PACKETIZER_T *VAR_3,
   VC_CONTAINER_PACKET_T *VAR_4, VC_PACKETIZER_FLAGS_T VAR_5)
{
   if(!VAR_4 && !(VAR_5 & VAR_2))
      return VAR_0;
   if(!VAR_4 && (VAR_5 & VAR_1))
      return VAR_0;
   if(VAR_4 && !VAR_4->data &&
      (!(VAR_5 & VAR_1) &&
       !(VAR_5 & VAR_2)))
      return VAR_0;


   if(!VAR_4)
      VAR_4 = &VAR_3->priv->packet;

   return VAR_3->priv->pf_packetize(VAR_3, VAR_4, VAR_5);
}
