
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stolen_base; } ;
struct drm_i915_private {int cfb_size; TYPE_1__ mm; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int) ;

int FUNC_2(struct drm_device *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->dev_private;

 if (VAR_3->mm.stolen_base == 0)
  return -VAR_0;

 if (VAR_2 < VAR_3->cfb_size)
  return 0;


 FUNC_0(VAR_1);

 return FUNC_1(VAR_1, VAR_2);
}
