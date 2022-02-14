
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {void* frame_duration; void* cluster_timecode; } ;
struct TYPE_10__ {TYPE_2__ state; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_4__* module; } ;
typedef int MKV_ELEMENT_ID_T ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,void**) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_1, MKV_ELEMENT_ID_T VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_5;
   uint64_t VAR_6;


   VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_6);
   if(VAR_5 != VAR_0) return VAR_5;

   switch(VAR_2)
   {

   case 128: VAR_4->state.cluster_timecode = VAR_6; break;
   case 129: VAR_4->state.frame_duration = VAR_6; break;
   default: break;
   }

   return VAR_5;
}
