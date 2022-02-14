
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allow_batchbuffer; } ;
struct drm_i915_private {TYPE_1__ dri1; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 FUNC_4(&VAR_1->struct_mutex);
 FUNC_2(VAR_1);
 VAR_3 = FUNC_3(VAR_1);
 FUNC_5(&VAR_1->struct_mutex);
 if (VAR_3) {
  FUNC_1(VAR_1);
  return VAR_3;
 }


 if (!FUNC_0(VAR_1, VAR_0))
  VAR_2->dri1.allow_batchbuffer = 1;
 return 0;
}
