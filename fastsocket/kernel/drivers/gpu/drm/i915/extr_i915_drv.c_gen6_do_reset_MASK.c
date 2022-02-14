
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* force_wake_put ) (struct drm_i915_private*) ;int (* force_wake_get ) (struct drm_i915_private*) ;} ;
struct drm_i915_private {int gt_fifo_count; int gt_lock; TYPE_1__ gt; scalar_t__ forcewake_count; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 int VAR_5;
 unsigned long VAR_6;




 FUNC_2(&VAR_4->gt_lock, VAR_6);







 FUNC_1(VAR_0, VAR_1);


 VAR_5 = FUNC_6((FUNC_0(VAR_0) & VAR_1) == 0, 500);


 if (VAR_4->forcewake_count)
  VAR_4->gt.force_wake_get(VAR_4);
 else
  VAR_4->gt.force_wake_put(VAR_4);


 VAR_4->gt_fifo_count = FUNC_0(VAR_2);

 FUNC_3(&VAR_4->gt_lock, VAR_6);
 return VAR_5;
}
