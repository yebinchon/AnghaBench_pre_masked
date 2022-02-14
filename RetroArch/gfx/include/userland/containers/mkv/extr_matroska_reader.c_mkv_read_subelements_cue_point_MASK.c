
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {void* cue_block; void* cue_cluster_offset; void* cue_track; void* cue_timecode; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_6__ {TYPE_3__* module; } ;
typedef int MKV_ELEMENT_ID_T ;






 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,void**) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_1, MKV_ELEMENT_ID_T VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_5;
   uint64_t VAR_6;


   VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_6);
   if(VAR_5 != VAR_0) return VAR_5;

   switch(VAR_2)
   {
   case 129:
      VAR_4->cue_timecode = VAR_6; break;
   case 128:
      VAR_4->cue_track = VAR_6; break;
   case 130:
      VAR_4->cue_cluster_offset = VAR_6; break;
   case 131:
      VAR_4->cue_block = VAR_6; break;
   default: break;
   }

   return VAR_5;
}
