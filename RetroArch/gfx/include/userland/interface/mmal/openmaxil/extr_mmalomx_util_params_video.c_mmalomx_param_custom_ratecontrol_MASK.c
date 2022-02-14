
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int control; } ;
struct TYPE_8__ {TYPE_1__* format; } ;
struct TYPE_7__ {int nTargetBitrate; int eControlRate; } ;
struct TYPE_6__ {int bitrate; } ;
typedef TYPE_2__ OMX_VIDEO_PARAM_BITRATETYPE ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PARAMETER_VIDEO_RATECONTROL_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef int MMALOMX_PARAM_TRANSLATION_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   const MMALOMX_PARAM_TRANSLATION_T *VAR_3,
   MMAL_PARAMETER_HEADER_T *VAR_4, OMX_PTR VAR_5, MMAL_PORT_T *VAR_6)
{
   OMX_VIDEO_PARAM_BITRATETYPE *VAR_7 = (OMX_VIDEO_PARAM_BITRATETYPE *)VAR_5;
   MMAL_PARAMETER_VIDEO_RATECONTROL_T *VAR_8 = (MMAL_PARAMETER_VIDEO_RATECONTROL_T *)VAR_4;
   FUNC_0(VAR_3);

   if (VAR_2 == VAR_0)
   {
      VAR_8->control = FUNC_1(VAR_7->eControlRate);

   }
   else
   {
      VAR_7->eControlRate = FUNC_2(VAR_8->control);
      VAR_7->nTargetBitrate = VAR_6->format->bitrate;
   }

   return VAR_1;
}
