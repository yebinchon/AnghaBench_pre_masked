
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* fov_v; void* fov_h; } ;
struct TYPE_3__ {void* xFieldOfViewVertical; void* xFieldOfViewHorizontal; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_BRCMFOVTYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMAL_PARAMETER_FIELD_OF_VIEW_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_BRCMFOVTYPE *VAR_5 = (OMX_CONFIG_BRCMFOVTYPE *)VAR_4;
   MMAL_PARAMETER_FIELD_OF_VIEW_T *VAR_6 = (MMAL_PARAMETER_FIELD_OF_VIEW_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->fov_h = FUNC_0(VAR_5->xFieldOfViewHorizontal);
      VAR_6->fov_v = FUNC_0(VAR_5->xFieldOfViewVertical);
   }
   else
   {
      VAR_5->xFieldOfViewHorizontal = FUNC_1(VAR_6->fov_h);
      VAR_5->xFieldOfViewVertical = FUNC_1(VAR_6->fov_v);
   }

   return VAR_1;
}
