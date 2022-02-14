
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; int clock; } ;
struct nouveau_encoder {struct drm_display_mode mode; } ;
struct nouveau_connector {scalar_t__ scaling_mode; struct drm_display_mode* native_mode; } ;
struct drm_encoder {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_encoder* FUNC_0 (struct drm_encoder*) ;
 struct nouveau_connector* FUNC_1 (struct nouveau_encoder*) ;

__attribute__((used)) static bool FUNC_2(struct drm_encoder *VAR_1,
    const struct drm_display_mode *VAR_2,
    struct drm_display_mode *VAR_3)
{
 struct nouveau_encoder *VAR_4 = FUNC_0(VAR_1);
 struct nouveau_connector *VAR_5 = FUNC_1(VAR_4);

 if (!VAR_5->native_mode ||
     VAR_5->scaling_mode == VAR_0 ||
     VAR_2->hdisplay > VAR_5->native_mode->hdisplay ||
     VAR_2->vdisplay > VAR_5->native_mode->vdisplay) {
  VAR_4->mode = *VAR_3;

 } else {
  VAR_4->mode = *VAR_5->native_mode;
  VAR_3->clock = VAR_5->native_mode->clock;
 }

 return 1;
}
