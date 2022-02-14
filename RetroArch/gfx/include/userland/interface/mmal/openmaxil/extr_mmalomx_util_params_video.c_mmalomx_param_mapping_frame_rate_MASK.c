
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int num; int den; } ;
struct TYPE_6__ {TYPE_1__ frame_rate; } ;
struct TYPE_5__ {int xEncodeFramerate; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_2__ OMX_CONFIG_FRAMERATETYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_3__ MMAL_PARAMETER_FRAME_RATE_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_FRAMERATETYPE *VAR_5 = (OMX_CONFIG_FRAMERATETYPE *)VAR_4;
   MMAL_PARAMETER_FRAME_RATE_T *VAR_6 = (MMAL_PARAMETER_FRAME_RATE_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->frame_rate.num = VAR_5->xEncodeFramerate;
      VAR_6->frame_rate.den = (1<<16);
   }
   else
   {
      VAR_5->xEncodeFramerate = 0;
      if (VAR_6->frame_rate.den)
         VAR_5->xEncodeFramerate = (((int64_t)VAR_6->frame_rate.num)<<16)/VAR_6->frame_rate.den;
   }

   return VAR_1;
}
