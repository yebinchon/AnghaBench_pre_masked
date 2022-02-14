
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alpha; int copyprotect_required; int layer; int pixel_y; int pixel_x; scalar_t__ mode; int noaspect; int src_rect; int dest_rect; scalar_t__ transform; int fullscreen; int display_num; int set; } ;
struct TYPE_3__ {int alpha; int copyprotect_required; int layer; int pixel_y; int pixel_x; scalar_t__ mode; int noaspect; int src_rect; int dest_rect; scalar_t__ transform; int fullscreen; int num; int set; } ;
typedef scalar_t__ OMX_PTR ;
typedef scalar_t__ OMX_DISPLAYTRANSFORMTYPE ;
typedef scalar_t__ OMX_DISPLAYMODETYPE ;
typedef TYPE_1__ OMX_CONFIG_DISPLAYREGIONTYPE ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMAL_DISPLAYTRANSFORM_T ;
typedef TYPE_2__ MMAL_DISPLAYREGION_T ;
typedef scalar_t__ MMAL_DISPLAYMODE_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_DISPLAYREGIONTYPE *VAR_5 = (OMX_CONFIG_DISPLAYREGIONTYPE *)VAR_4;
   MMAL_DISPLAYREGION_T *VAR_6 = (MMAL_DISPLAYREGION_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->set = VAR_5->set;
      VAR_6->display_num = VAR_5->num;
      VAR_6->fullscreen = VAR_5->fullscreen;
      VAR_6->transform = (MMAL_DISPLAYTRANSFORM_T)VAR_5->transform;
      FUNC_0(&VAR_6->dest_rect, &VAR_5->dest_rect);
      FUNC_0(&VAR_6->src_rect, &VAR_5->src_rect);
      VAR_6->noaspect = VAR_5->noaspect;
      VAR_6->mode = (MMAL_DISPLAYMODE_T)VAR_5->mode;
      VAR_6->pixel_x = VAR_5->pixel_x;
      VAR_6->pixel_y = VAR_5->pixel_y;
      VAR_6->layer = VAR_5->layer;
      VAR_6->copyprotect_required = VAR_5->copyprotect_required;
      VAR_6->alpha = VAR_5->alpha;
   }
   else
   {
      VAR_5->set = VAR_6->set;
      VAR_5->num = VAR_6->display_num;
      VAR_5->fullscreen = VAR_6->fullscreen;
      VAR_5->transform = (OMX_DISPLAYTRANSFORMTYPE)VAR_6->transform;
      FUNC_1(&VAR_5->dest_rect, &VAR_6->dest_rect);
      FUNC_1(&VAR_5->src_rect, &VAR_6->src_rect);
      VAR_5->noaspect = VAR_6->noaspect;
      VAR_5->mode = (OMX_DISPLAYMODETYPE)VAR_6->mode;
      VAR_5->pixel_x = VAR_6->pixel_x;
      VAR_5->pixel_y = VAR_6->pixel_y;
      VAR_5->layer = VAR_6->layer;
      VAR_5->copyprotect_required = VAR_6->copyprotect_required;
      VAR_5->alpha = VAR_6->alpha;
   }

   return VAR_1;
}
