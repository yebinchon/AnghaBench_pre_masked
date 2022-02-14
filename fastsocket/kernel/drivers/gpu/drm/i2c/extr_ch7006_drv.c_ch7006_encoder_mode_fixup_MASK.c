
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct ch7006_priv {int mode; } ;


 int FUNC_0 (struct drm_encoder*,struct drm_display_mode const*) ;
 struct ch7006_priv* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_2(struct drm_encoder *VAR_0,
          const struct drm_display_mode *VAR_1,
          struct drm_display_mode *VAR_2)
{
 struct ch7006_priv *VAR_3 = FUNC_1(VAR_0);




 VAR_3->mode = FUNC_0(VAR_0, VAR_1);

 return !!VAR_3->mode;
}
