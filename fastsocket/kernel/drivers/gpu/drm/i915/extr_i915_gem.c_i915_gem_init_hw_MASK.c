
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 () ;

int
FUNC_10(struct drm_device *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 if (FUNC_2(VAR_1)->gen < 6 && !FUNC_9())
  return -VAR_0;

 if (FUNC_3(VAR_1) && (FUNC_0(0x120010) == 1))
  FUNC_1(0x9008, FUNC_0(0x9008) | 0xf0000);

 FUNC_8(VAR_1);

 FUNC_7(VAR_1);

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return VAR_3;





 FUNC_4(VAR_1);
 FUNC_5(VAR_1);

 return 0;
}
