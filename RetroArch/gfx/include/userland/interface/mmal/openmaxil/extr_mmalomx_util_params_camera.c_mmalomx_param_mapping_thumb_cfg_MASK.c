
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable; int height; int width; scalar_t__ quality; } ;
struct TYPE_3__ {int nHeight; int nWidth; void* bUsePreview; void* bEnable; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_PARAM_BRCMTHUMBNAILTYPE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_THUMBNAIL_CONFIG_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_0(MMALOMX_PARAM_MAPPING_DIRECTION VAR_4,
   MMAL_PARAMETER_HEADER_T *VAR_5, OMX_PTR VAR_6)
{
   OMX_PARAM_BRCMTHUMBNAILTYPE *VAR_7 = (OMX_PARAM_BRCMTHUMBNAILTYPE *)VAR_6;
   MMAL_PARAMETER_THUMBNAIL_CONFIG_T *VAR_8 = (MMAL_PARAMETER_THUMBNAIL_CONFIG_T *)VAR_5;

   if (VAR_4 == VAR_0)
   {
      VAR_8->enable = !!VAR_7->bEnable;
      VAR_8->width = VAR_7->nWidth;
      VAR_8->height = VAR_7->nHeight;
      VAR_8->quality = 0;
   }
   else
   {
      VAR_7->bEnable = VAR_8->enable ? VAR_3 : VAR_2;
      VAR_7->bUsePreview = VAR_2;
      VAR_7->nWidth = VAR_8->width;
      VAR_7->nHeight = VAR_8->height;

   }

   return VAR_1;
}
