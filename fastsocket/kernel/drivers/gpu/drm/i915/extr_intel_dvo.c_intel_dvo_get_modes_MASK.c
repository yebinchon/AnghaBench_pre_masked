
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dvo {int * panel_fixed_mode; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {TYPE_1__* dev; int probed_modes; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_dvo* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_1)
{
 struct intel_dvo *VAR_2 = FUNC_2(VAR_1);
 struct drm_i915_private *VAR_3 = VAR_1->dev->dev_private;






 FUNC_3(VAR_1,
       FUNC_4(VAR_3, VAR_0));
 if (!FUNC_5(&VAR_1->probed_modes))
  return 1;

 if (VAR_2->panel_fixed_mode != ((void*)0)) {
  struct drm_display_mode *VAR_4;
  VAR_4 = FUNC_0(VAR_1->dev, VAR_2->panel_fixed_mode);
  if (VAR_4) {
   FUNC_1(VAR_1, VAR_4);
   return 1;
  }
 }

 return 0;
}
