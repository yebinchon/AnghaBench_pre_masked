
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_15__ {double sampling_frequency; double output_sampling_frequency; void* bit_depth; void* channels; } ;
struct TYPE_16__ {TYPE_4__ audio; } ;
struct TYPE_17__ {TYPE_5__ es_type; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_18__ {TYPE_1__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {TYPE_3__* parsing; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {TYPE_6__* module; } ;
struct TYPE_12__ {TYPE_8__* module; } ;
typedef int MKV_ELEMENT_ID_T ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,double*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ,void**) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_3, MKV_ELEMENT_ID_T VAR_4, int64_t VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_3->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_8 = VAR_7->parsing->priv->module;
   uint64_t VAR_9;


   if(VAR_4 == VAR_1 ||
      VAR_4 == VAR_0)
   {
      double VAR_10;
      VAR_6 = FUNC_0(VAR_3, VAR_5, &VAR_10);
      if(VAR_6 != VAR_2) return VAR_6;

      if(VAR_4 == VAR_1)
         VAR_8->es_type.audio.sampling_frequency = VAR_10;

      if(VAR_4 == VAR_0)
         VAR_8->es_type.audio.output_sampling_frequency = VAR_10;

      return VAR_6;
   }


   VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_9);
   if(VAR_6 != VAR_2) return VAR_6;

   switch(VAR_4)
   {
   case 128: VAR_8->es_type.audio.channels = VAR_9; break;
   case 129: VAR_8->es_type.audio.bit_depth = VAR_9; break;
   default: break;
   }

   return VAR_6;
}
