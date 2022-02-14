
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int header; } ;
struct drm_i915_private {TYPE_1__ opregion; } ;
struct drm_device {scalar_t__ switch_power_state; int struct_mutex; int pdev; struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 if (VAR_3->switch_power_state == VAR_1)
  return 0;

 if (FUNC_7(VAR_3->pdev))
  return -VAR_2;

 FUNC_8(VAR_3->pdev);

 FUNC_4(VAR_3);





 if (FUNC_1(VAR_3, VAR_0) &&
     !VAR_4->opregion.header) {
  FUNC_5(&VAR_3->struct_mutex);
  FUNC_3(VAR_3);
  FUNC_6(&VAR_3->struct_mutex);
 }

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_3);
 return 0;
}
