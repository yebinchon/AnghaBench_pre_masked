
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct register_whitelist {scalar_t__ offset; int gen_bitmask; int size; } ;
struct drm_i915_reg_read {scalar_t__ offset; int val; } ;
struct drm_i915_private {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (struct register_whitelist*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int) ;
 struct register_whitelist* VAR_1 ;

int FUNC_7(struct drm_device *VAR_2,
   void *VAR_3, struct drm_file *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_2->dev_private;
 struct drm_i915_reg_read *VAR_6 = VAR_3;
 struct register_whitelist const *VAR_7 = VAR_1;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++, VAR_7++) {
  if (VAR_7->offset == VAR_6->offset &&
      (1 << FUNC_5(VAR_2)->gen & VAR_7->gen_bitmask))
   break;
 }

 if (VAR_8 == FUNC_0(VAR_1))
  return -VAR_0;

 switch (VAR_7->size) {
 case 8:
  VAR_6->val = FUNC_3(VAR_6->offset);
  break;
 case 4:
  VAR_6->val = FUNC_1(VAR_6->offset);
  break;
 case 2:
  VAR_6->val = FUNC_2(VAR_6->offset);
  break;
 case 1:
  VAR_6->val = FUNC_4(VAR_6->offset);
  break;
 default:
  FUNC_6(1);
  return -VAR_0;
 }

 return 0;
}
