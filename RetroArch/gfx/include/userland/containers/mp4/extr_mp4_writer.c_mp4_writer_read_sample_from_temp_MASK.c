
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


typedef scalar_t__ int32_t ;
struct TYPE_13__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {int track; int flags; scalar_t__ dts; scalar_t__ pts; scalar_t__ size; } ;
typedef TYPE_4__ VC_CONTAINER_PACKET_T ;
struct TYPE_12__ {TYPE_6__* io; } ;
struct TYPE_15__ {TYPE_2__ temp; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {int status; } ;
struct TYPE_11__ {TYPE_5__* module; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1,
   VC_CONTAINER_PACKET_T *VAR_2)
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;

   VAR_2->size = FUNC_1(VAR_3->temp.io);
   VAR_2->dts += (int32_t)FUNC_1(VAR_3->temp.io);
   VAR_2->pts = VAR_2->dts + FUNC_0(VAR_3->temp.io);
   VAR_2->track = FUNC_2(VAR_3->temp.io);
   VAR_2->flags = (VAR_2->track & 0x80) ? VAR_0 : 0;
   VAR_2->track &= 0x7F;
   return VAR_3->temp.io->status;
}
