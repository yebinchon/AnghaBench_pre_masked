
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct child_device_config {scalar_t__ device_type; scalar_t__ addin_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct child_device_config *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3->child_dev_num)
  return 1;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->child_dev_num; VAR_5++) {
  VAR_4 = VAR_3->child_dev + VAR_5;



  if (VAR_4->device_type != VAR_0 &&
   VAR_4->device_type != VAR_1)
   continue;



  if (VAR_4->addin_offset) {
   VAR_6 = 1;
   break;
  }
 }
 return VAR_6;
}
