
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
struct TYPE_15__ {double frame_rate; void* aspect_ratio_type; void* display_unit; void* display_height; void* display_width; void* pixel_crop_right; void* pixel_crop_left; void* pixel_crop_top; void* pixel_crop_bottom; void* pixel_height; void* pixel_width; } ;
struct TYPE_16__ {TYPE_4__ video; } ;
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






 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,double*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ,void**) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_2, MKV_ELEMENT_ID_T VAR_3, int64_t VAR_4 )
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_1;
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_2->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_7 = VAR_6->parsing->priv->module;
   uint64_t VAR_8;


   if(VAR_3 == VAR_0)
   {
      double VAR_9;
      VAR_5 = FUNC_0(VAR_2, VAR_4, &VAR_9);
      if(VAR_5 != VAR_1) return VAR_5;
      VAR_7->es_type.video.frame_rate = VAR_9;
      return VAR_5;
   }


   VAR_5 = FUNC_1(VAR_2, VAR_4, &VAR_8);
   if(VAR_5 != VAR_1) return VAR_5;

   switch(VAR_3)
   {
   case 128: VAR_7->es_type.video.pixel_width = VAR_8; break;
   case 129: VAR_7->es_type.video.pixel_height = VAR_8; break;
   case 133: VAR_7->es_type.video.pixel_crop_bottom = VAR_8; break;
   case 130: VAR_7->es_type.video.pixel_crop_top = VAR_8; break;
   case 132: VAR_7->es_type.video.pixel_crop_left = VAR_8; break;
   case 131: VAR_7->es_type.video.pixel_crop_right = VAR_8; break;
   case 134: VAR_7->es_type.video.display_width = VAR_8; break;
   case 136: VAR_7->es_type.video.display_height = VAR_8; break;
   case 135: VAR_7->es_type.video.display_unit = VAR_8; break;
   case 137: VAR_7->es_type.video.aspect_ratio_type = VAR_8; break;
   default: break;
   }

   return VAR_5;
}
