
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int nS32; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_PARAM_S32TYPE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_INT32_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_PARAM_S32TYPE *VAR_5 = (OMX_PARAM_S32TYPE *)VAR_4;
   MMAL_PARAMETER_INT32_T *VAR_6 = (MMAL_PARAMETER_INT32_T *)VAR_3;

   if (VAR_2 == VAR_0)
      VAR_6->value = (VAR_5->nS32 * 6) >> 16;
   else
      VAR_5->nS32 = (VAR_6->value << 16) / 6;

   return VAR_1;
}
