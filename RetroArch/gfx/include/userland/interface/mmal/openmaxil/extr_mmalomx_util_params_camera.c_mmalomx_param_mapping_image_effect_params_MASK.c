
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int omx; int mmal; } ;
struct TYPE_6__ {int num_effect_params; int effect_parameter; int effect; } ;
struct TYPE_5__ {int nNumParams; int nParams; int eImageFilter; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_IMAGEFILTERPARAMSTYPE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_IMAGEFX_PARAMETERS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 int FUNC_0 (int ,TYPE_3__*,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMALOMX_PARAM_MAPPING_DIRECTION VAR_6,
   MMAL_PARAMETER_HEADER_T *VAR_7, OMX_PTR VAR_8)
{
   OMX_CONFIG_IMAGEFILTERPARAMSTYPE *VAR_9 = (OMX_CONFIG_IMAGEFILTERPARAMSTYPE *)VAR_8;
   MMAL_PARAMETER_IMAGEFX_PARAMETERS_T *VAR_10 = (MMAL_PARAMETER_IMAGEFX_PARAMETERS_T *)VAR_7;
   FUNC_0(VAR_0, VAR_5, VAR_4,
      VAR_6, VAR_10->effect, VAR_9->eImageFilter);

   if (!VAR_5)
      return VAR_2;

   if (VAR_6 == VAR_1)
   {
      if (VAR_9->nNumParams > FUNC_1(VAR_10->effect_parameter))
         return VAR_2;
      VAR_10->effect = VAR_5->mmal;
      VAR_10->num_effect_params = VAR_9->nNumParams;
      FUNC_2(VAR_10->effect_parameter, VAR_9->nParams, sizeof(uint32_t) * VAR_9->nNumParams);
   }
   else
   {
      if (VAR_10->num_effect_params > FUNC_1(VAR_9->nParams))
         return VAR_2;
      VAR_9->eImageFilter = VAR_5->omx;
      VAR_9->nNumParams = VAR_10->num_effect_params;
      FUNC_2(VAR_9->nParams, VAR_10->effect_parameter, sizeof(uint32_t) * VAR_9->nNumParams);
   }

   return VAR_3;
}
