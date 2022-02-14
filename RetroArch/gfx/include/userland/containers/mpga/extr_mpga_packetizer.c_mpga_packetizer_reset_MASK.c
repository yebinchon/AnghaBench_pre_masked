
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
struct TYPE_7__ {int state; scalar_t__ lost_sync; } ;
typedef TYPE_3__ VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_0( VC_PACKETIZER_T *VAR_2 )
{
   VC_PACKETIZER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VAR_3->lost_sync = 0;
   VAR_3->state = VAR_0;
   return VAR_1;
}
