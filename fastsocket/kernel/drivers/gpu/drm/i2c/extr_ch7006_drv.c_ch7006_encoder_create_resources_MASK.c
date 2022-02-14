
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_config {int tv_flicker_reduction_property; int tv_contrast_property; int tv_brightness_property; int tv_mode_property; int tv_bottom_margin_property; int tv_left_margin_property; int tv_subconnector_property; int tv_select_subconnector_property; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector {int base; } ;
struct ch7006_priv {int scale; int scale_property; int flicker; int contrast; int brightness; int norm; int vmargin; int hmargin; int subconnector; int select_subconnector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ,char*,int ,int) ;
 struct ch7006_priv* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_4(struct drm_encoder *VAR_2,
        struct drm_connector *VAR_3)
{
 struct ch7006_priv *VAR_4 = FUNC_3(VAR_2);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct drm_mode_config *VAR_6 = &VAR_5->mode_config;

 FUNC_0(VAR_5, VAR_0, VAR_1);

 VAR_4->scale_property = FUNC_2(VAR_5, 0, "scale", 0, 2);

 FUNC_1(&VAR_3->base, VAR_6->tv_select_subconnector_property,
          VAR_4->select_subconnector);
 FUNC_1(&VAR_3->base, VAR_6->tv_subconnector_property,
          VAR_4->subconnector);
 FUNC_1(&VAR_3->base, VAR_6->tv_left_margin_property,
          VAR_4->hmargin);
 FUNC_1(&VAR_3->base, VAR_6->tv_bottom_margin_property,
          VAR_4->vmargin);
 FUNC_1(&VAR_3->base, VAR_6->tv_mode_property,
          VAR_4->norm);
 FUNC_1(&VAR_3->base, VAR_6->tv_brightness_property,
          VAR_4->brightness);
 FUNC_1(&VAR_3->base, VAR_6->tv_contrast_property,
          VAR_4->contrast);
 FUNC_1(&VAR_3->base, VAR_6->tv_flicker_reduction_property,
          VAR_4->flicker);
 FUNC_1(&VAR_3->base, VAR_4->scale_property,
          VAR_4->scale);

 return 0;
}
