
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
struct TYPE_9__ {scalar_t__ offset; scalar_t__ current_offset; scalar_t__ bytes; } ;
typedef TYPE_3__ VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_7__ {int (* pf_reset ) (TYPE_2__*) ;TYPE_3__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

VC_CONTAINER_STATUS_T FUNC_2( VC_PACKETIZER_T *VAR_1 )
{
   VC_CONTAINER_BYTESTREAM_T *VAR_2 = &VAR_1->priv->stream;

   FUNC_0( VAR_2, VAR_2->bytes - VAR_2->current_offset - VAR_2->offset );

   if (VAR_1->priv->pf_reset)
      return VAR_1->priv->pf_reset(VAR_1);
   else
      return VAR_0;
}
