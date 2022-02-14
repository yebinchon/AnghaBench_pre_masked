
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gsm; } ;
struct drm_i915_private {int dev; TYPE_1__ gtt; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;
 FUNC_0(VAR_1->gtt.gsm);
 FUNC_1(VAR_1->dev);
}
