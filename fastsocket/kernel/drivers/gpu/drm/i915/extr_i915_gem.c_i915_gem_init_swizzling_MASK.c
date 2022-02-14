
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {scalar_t__ bit_6_swizzle_x; } ;
struct TYPE_5__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_3__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;

void FUNC_8(struct drm_device *VAR_8)
{
 drm_i915_private_t *VAR_9 = VAR_8->dev_private;

 if (FUNC_3(VAR_8)->gen < 5 ||
     VAR_9->mm.bit_6_swizzle_x == VAR_5)
  return;

 FUNC_2(VAR_3, FUNC_1(VAR_3) |
     VAR_4);

 if (FUNC_4(VAR_8))
  return;

 FUNC_2(VAR_6, FUNC_1(VAR_6) | VAR_7);
 if (FUNC_5(VAR_8))
  FUNC_2(VAR_0, FUNC_7(VAR_2));
 else if (FUNC_6(VAR_8))
  FUNC_2(VAR_0, FUNC_7(VAR_1));
 else
  FUNC_0();
}
