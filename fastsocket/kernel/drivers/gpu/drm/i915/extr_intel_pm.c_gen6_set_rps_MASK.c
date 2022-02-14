
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ max_delay; scalar_t__ min_delay; scalar_t__ cur_delay; int hw_lock; } ;
struct drm_i915_private {TYPE_1__ rps; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(struct drm_device *VAR_3, u8 VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3->dev_private;
 u32 VAR_6 = FUNC_5(VAR_5, &VAR_4);

 FUNC_4(!FUNC_6(&VAR_5->rps.hw_lock));
 FUNC_4(VAR_4 > VAR_5->rps.max_delay);
 FUNC_4(VAR_4 < VAR_5->rps.min_delay);

 if (VAR_4 == VAR_5->rps.cur_delay)
  return;

 FUNC_2(VAR_1,
     FUNC_0(VAR_4) |
     FUNC_1(0) |
     VAR_0);




 FUNC_2(VAR_2, VAR_6);

 FUNC_3(VAR_1);

 VAR_5->rps.cur_delay = VAR_4;

 FUNC_7(VAR_4 * 50);
}
