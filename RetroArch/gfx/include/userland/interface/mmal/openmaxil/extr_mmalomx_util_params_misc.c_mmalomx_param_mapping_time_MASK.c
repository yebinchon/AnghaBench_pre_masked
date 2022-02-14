
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int nTimestamp; } ;
typedef TYPE_1__ OMX_TIME_CONFIG_TIMESTAMPTYPE ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_INT64_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_TIME_CONFIG_TIMESTAMPTYPE *VAR_5 = (OMX_TIME_CONFIG_TIMESTAMPTYPE *)VAR_4;
   MMAL_PARAMETER_INT64_T *VAR_6 = (MMAL_PARAMETER_INT64_T *)VAR_3;

   if (VAR_2 == VAR_0)
      VAR_6->value = FUNC_1(VAR_5->nTimestamp);
   else
      VAR_5->nTimestamp = FUNC_0(VAR_6->value);

   return VAR_1;
}
