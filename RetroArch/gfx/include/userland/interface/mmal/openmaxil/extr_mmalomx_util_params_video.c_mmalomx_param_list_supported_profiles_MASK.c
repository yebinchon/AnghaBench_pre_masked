
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* profile; } ;
struct TYPE_10__ {TYPE_1__* format; } ;
struct TYPE_9__ {int eLevel; int eProfile; } ;
struct TYPE_8__ {int level; int profile; } ;
struct TYPE_7__ {int encoding; } ;
typedef TYPE_3__ OMX_VIDEO_PARAM_PROFILELEVELTYPE ;
typedef int OMX_VIDEO_CODINGTYPE ;
typedef scalar_t__ OMX_PTR ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_PARAMETER_VIDEO_PROFILE_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef int MMALOMX_PARAM_TRANSLATION_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   const MMALOMX_PARAM_TRANSLATION_T *VAR_3, unsigned int VAR_4,
   MMAL_PARAMETER_HEADER_T *VAR_5, OMX_PTR VAR_6, MMAL_PORT_T *VAR_7)
{
   OMX_VIDEO_PARAM_PROFILELEVELTYPE *VAR_8 = (OMX_VIDEO_PARAM_PROFILELEVELTYPE *)VAR_6;
   MMAL_PARAMETER_VIDEO_PROFILE_T *VAR_9 = (MMAL_PARAMETER_VIDEO_PROFILE_T *)VAR_5;
   FUNC_0(VAR_3);

   if (VAR_2 == VAR_0)
   {
      OMX_VIDEO_CODINGTYPE VAR_10 = FUNC_1(VAR_7->format->encoding);
      VAR_9->profile[VAR_4].profile = FUNC_3(VAR_8->eProfile, VAR_10);
      VAR_9->profile[VAR_4].level = FUNC_2(VAR_8->eLevel, VAR_10);
   }
   else
   {
      VAR_8->eProfile = FUNC_5(VAR_9->profile[VAR_4].profile);
      VAR_8->eLevel = FUNC_4(VAR_9->profile[VAR_4].level);
   }

   return VAR_1;
}
