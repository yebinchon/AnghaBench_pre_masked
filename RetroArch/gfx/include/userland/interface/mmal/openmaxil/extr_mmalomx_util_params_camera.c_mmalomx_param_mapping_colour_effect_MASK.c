
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int v; int u; int enable; } ;
struct TYPE_3__ {int nCustomizedV; int nCustomizedU; int bColorEnhancement; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_COLORENHANCEMENTTYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_2__ MMAL_PARAMETER_COLOURFX_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_COLORENHANCEMENTTYPE *VAR_5 = (OMX_CONFIG_COLORENHANCEMENTTYPE *)VAR_4;
   MMAL_PARAMETER_COLOURFX_T *VAR_6 = (MMAL_PARAMETER_COLOURFX_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->enable = VAR_5->bColorEnhancement;
      VAR_6->u = VAR_5->nCustomizedU;
      VAR_6->v = VAR_5->nCustomizedV;
   }
   else
   {
      VAR_5->bColorEnhancement = VAR_6->enable;
      VAR_5->nCustomizedU = VAR_6->u;
      VAR_5->nCustomizedV = VAR_6->v;
   }

   return VAR_1;
}
