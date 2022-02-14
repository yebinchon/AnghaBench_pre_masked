
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_i915_private {int bridge_dev; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct drm_device *VAR_2, bool VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->dev_private;
 u16 VAR_5;

 FUNC_0(VAR_4->bridge_dev, VAR_0, &VAR_5);
 if (VAR_3)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;
 FUNC_1(VAR_4->bridge_dev, VAR_0, VAR_5);
 return 0;
}
