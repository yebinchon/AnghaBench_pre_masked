
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ framework_data; struct TYPE_10__* next; TYPE_1__* priv; scalar_t__ out; scalar_t__ in; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef TYPE_2__ VC_CONTAINER_PACKET_T ;
struct TYPE_11__ {TYPE_2__* first; } ;
typedef TYPE_4__ VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_9__ {scalar_t__ module_handle; int (* pf_close ) (TYPE_2__*) ;TYPE_4__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

VC_CONTAINER_STATUS_T FUNC_4( VC_PACKETIZER_T *VAR_1 )
{
   VC_CONTAINER_BYTESTREAM_T *VAR_2;
   VC_CONTAINER_PACKET_T *VAR_3, *VAR_4;

   if(!VAR_1) return VAR_0;

   VAR_2 = &VAR_1->priv->stream;

   if(VAR_1->in) FUNC_2(VAR_1->in);
   if(VAR_1->out) FUNC_2(VAR_1->out);
   if(VAR_1->priv->pf_close) VAR_1->priv->pf_close(VAR_1);
   if(VAR_1->priv->module_handle) FUNC_3(VAR_1);


   for(VAR_3 = VAR_2->first; VAR_3; VAR_3 = VAR_4)
   {
      VAR_4 = VAR_3->next;
      if(VAR_3->framework_data) FUNC_0(VAR_3);
   }

   FUNC_0(VAR_1);
   return VAR_0;
}
