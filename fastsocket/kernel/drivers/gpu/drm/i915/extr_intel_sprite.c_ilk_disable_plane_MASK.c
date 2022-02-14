
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane {int pipe; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 struct intel_plane* FUNC_7 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_8(struct drm_plane *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct intel_plane *VAR_4 = FUNC_7(VAR_1);
 int VAR_5 = VAR_4->pipe;

 FUNC_5(FUNC_0(VAR_5), FUNC_4(FUNC_0(VAR_5)) & ~VAR_0);

 FUNC_5(FUNC_1(VAR_5), 0);

 FUNC_3(FUNC_2(VAR_5), 0);
 FUNC_6(FUNC_2(VAR_5));
}
