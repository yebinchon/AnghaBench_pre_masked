
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ pm_iir; } ;
struct drm_i915_private {TYPE_1__ rps; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_4, 1 << 31);
 FUNC_1(VAR_2, 0xffffffff);
 FUNC_1(VAR_0, 0);





 FUNC_2(&VAR_6->rps.lock);
 VAR_6->rps.pm_iir = 0;
 FUNC_3(&VAR_6->rps.lock);

 FUNC_1(VAR_1, FUNC_0(VAR_1));
}
