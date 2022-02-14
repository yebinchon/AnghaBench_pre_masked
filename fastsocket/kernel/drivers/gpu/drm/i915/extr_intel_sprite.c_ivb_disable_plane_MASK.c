
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane {int pipe; scalar_t__ can_scale; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_i915_private {int sprite_scaling_enabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_device*) ;
 struct intel_plane* FUNC_8 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_9(struct drm_plane *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct intel_plane *VAR_4 = FUNC_8(VAR_1);
 int VAR_5 = VAR_4->pipe;
 bool VAR_6 = VAR_3->sprite_scaling_enabled;

 FUNC_2(FUNC_4(VAR_5), FUNC_1(FUNC_4(VAR_5)) & ~VAR_0);

 if (VAR_4->can_scale)
  FUNC_2(FUNC_5(VAR_5), 0);

 FUNC_0(FUNC_6(VAR_5), 0);
 FUNC_3(FUNC_6(VAR_5));

 VAR_3->sprite_scaling_enabled &= ~(1 << VAR_5);


 if (VAR_6 && !VAR_3->sprite_scaling_enabled)
  FUNC_7(VAR_2);
}
