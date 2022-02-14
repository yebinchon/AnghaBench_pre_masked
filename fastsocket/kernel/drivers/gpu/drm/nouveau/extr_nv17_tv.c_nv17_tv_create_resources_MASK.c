
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv17_tv_encoder {int tv_norm; int select_subconnector; int subconnector; int flicker; int saturation; int hue; int overscan; } ;
struct nouveau_drm {int dummy; } ;
struct drm_mode_config {int tv_overscan_property; int tv_hue_property; int tv_saturation_property; int tv_flicker_reduction_property; int tv_mode_property; int tv_subconnector_property; int tv_select_subconnector_property; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector {int base; } ;
struct TYPE_3__ {scalar_t__ has_component_output; } ;
struct dcb_output {TYPE_1__ tvconf; } ;
struct TYPE_4__ {struct dcb_output* dcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int,int *) ;
 int FUNC_2 (int *,int ,int) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_2__* FUNC_4 (struct drm_encoder*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int ,scalar_t__) ;
 struct nv17_tv_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_7(struct drm_encoder *VAR_4,
        struct drm_connector *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct nouveau_drm *VAR_7 = FUNC_3(VAR_6);
 struct drm_mode_config *VAR_8 = &VAR_6->mode_config;
 struct nv17_tv_encoder *VAR_9 = FUNC_6(VAR_4);
 struct dcb_output *VAR_10 = FUNC_4(VAR_4)->dcb;
 int VAR_11 = VAR_10->tvconf.has_component_output ? VAR_1 :
       VAR_0;
 int VAR_12;

 if (VAR_2) {
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   if (!FUNC_5(VAR_3[VAR_12], VAR_2)) {
    VAR_9->tv_norm = VAR_12;
    break;
   }
  }

  if (VAR_12 == VAR_11)
   FUNC_0(VAR_7, "Invalid TV norm setting \"%s\"\n",
    VAR_2);
 }

 FUNC_1(VAR_6, VAR_11, VAR_3);

 FUNC_2(&VAR_5->base,
     VAR_8->tv_select_subconnector_property,
     VAR_9->select_subconnector);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_subconnector_property,
     VAR_9->subconnector);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_mode_property,
     VAR_9->tv_norm);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_flicker_reduction_property,
     VAR_9->flicker);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_saturation_property,
     VAR_9->saturation);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_hue_property,
     VAR_9->hue);
 FUNC_2(&VAR_5->base,
     VAR_8->tv_overscan_property,
     VAR_9->overscan);

 return 0;
}
