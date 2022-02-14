
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* fps_high; void* fps_low; } ;
struct TYPE_3__ {void* xFramerateHigh; void* xFramerateLow; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_PARAM_BRCMFRAMERATERANGETYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMAL_PARAMETER_FPS_RANGE_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_PARAM_BRCMFRAMERATERANGETYPE *VAR_5 = (OMX_PARAM_BRCMFRAMERATERANGETYPE *)VAR_4;
   MMAL_PARAMETER_FPS_RANGE_T *VAR_6 = (MMAL_PARAMETER_FPS_RANGE_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->fps_low = FUNC_0(VAR_5->xFramerateLow);
      VAR_6->fps_high = FUNC_0(VAR_5->xFramerateHigh);
   }
   else
   {
      VAR_5->xFramerateLow = FUNC_1(VAR_6->fps_low);
      VAR_5->xFramerateHigh = FUNC_1(VAR_6->fps_high);
   }

   return VAR_1;
}
