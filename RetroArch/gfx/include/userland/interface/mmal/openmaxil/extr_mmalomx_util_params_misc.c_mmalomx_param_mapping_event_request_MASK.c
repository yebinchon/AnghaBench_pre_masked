
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int omx_id; int mmal_id; } ;
struct TYPE_7__ {int enable; int change_id; } ;
struct TYPE_6__ {int bEnable; int nIndex; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_REQUESTCALLBACKTYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T ;
typedef TYPE_3__ MMALOMX_PARAM_TRANSLATION_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMALOMX_PARAM_MAPPING_DIRECTION VAR_3,
   MMAL_PARAMETER_HEADER_T *VAR_4, OMX_PTR VAR_5)
{
   OMX_CONFIG_REQUESTCALLBACKTYPE *VAR_6 = (OMX_CONFIG_REQUESTCALLBACKTYPE *)VAR_5;
   MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T *VAR_7 = (MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T *)VAR_4;
   const MMALOMX_PARAM_TRANSLATION_T *VAR_8;

   if (VAR_3 == VAR_0)
   {
      VAR_8 = FUNC_2(VAR_6->nIndex);
      if (!VAR_8)
      {
         FUNC_0("ommalomx_param_mapping_event_request: omx parameter "
                    "0x%08x not recognised", VAR_6->nIndex);
         return VAR_1;
      }

      VAR_7->change_id = VAR_8->mmal_id;
      VAR_7->enable = VAR_6->bEnable;
   }
   else
   {
      VAR_8 = FUNC_1(VAR_7->change_id);
      if (!VAR_8)
      {
         FUNC_0("mmalomx_param_mapping_event_request: mmal parameter "
                    "0x%08x not recognised", VAR_7->change_id);
         return VAR_1;
      }

      VAR_6->nIndex = VAR_8->omx_id;
      VAR_6->bEnable = VAR_7->enable;
   }

   return VAR_2;
}
