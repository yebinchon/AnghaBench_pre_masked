
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {struct drm_i915_master_private* driver_priv; } ;
struct drm_i915_master_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_master_private* FUNC_0 (int,int ) ;

int FUNC_1(struct drm_device *VAR_2, struct drm_master *VAR_3)
{
 struct drm_i915_master_private *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->driver_priv = VAR_4;
 return 0;
}
