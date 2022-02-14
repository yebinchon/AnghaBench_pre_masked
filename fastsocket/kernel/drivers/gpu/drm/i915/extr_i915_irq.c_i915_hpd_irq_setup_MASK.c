
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int hotplug_supported_mask; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_14)
{
 drm_i915_private_t *VAR_15 = (drm_i915_private_t *) VAR_14->dev_private;
 u32 VAR_16;

 if (FUNC_0(VAR_14)) {
  VAR_16 = FUNC_1(VAR_9);

  if (VAR_15->hotplug_supported_mask & VAR_4)
   VAR_16 |= VAR_3;
  if (VAR_15->hotplug_supported_mask & VAR_6)
   VAR_16 |= VAR_5;
  if (VAR_15->hotplug_supported_mask & VAR_8)
   VAR_16 |= VAR_7;
  if (VAR_15->hotplug_supported_mask & VAR_13)
   VAR_16 |= VAR_12;
  if (VAR_15->hotplug_supported_mask & VAR_11)
   VAR_16 |= VAR_10;
  if (VAR_15->hotplug_supported_mask & VAR_1) {
   VAR_16 |= VAR_0;
   VAR_16 |= VAR_2;
  }



  FUNC_2(VAR_9, VAR_16);
 }
}
