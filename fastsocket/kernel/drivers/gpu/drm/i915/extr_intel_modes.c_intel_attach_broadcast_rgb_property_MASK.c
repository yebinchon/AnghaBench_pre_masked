
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dummy; } ;
struct drm_i915_private {struct drm_property* broadcast_rgb_property; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {int base; struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct drm_property*,int ) ;
 struct drm_property* FUNC_2 (struct drm_device*,int ,char*,int ,int ) ;

void
FUNC_3(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct drm_property *VAR_5;

 VAR_5 = VAR_4->broadcast_rgb_property;
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_3, VAR_0,
        "Broadcast RGB",
        VAR_1,
        FUNC_0(VAR_1));
  if (VAR_5 == ((void*)0))
   return;

  VAR_4->broadcast_rgb_property = VAR_5;
 }

 FUNC_1(&VAR_2->base, VAR_5, 0);
}
