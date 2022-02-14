
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
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_17)
{
 drm_i915_private_t *VAR_18 = (drm_i915_private_t *) VAR_17->dev_private;
 u32 VAR_19;


 VAR_19 = 0;
 if (VAR_18->hotplug_supported_mask & VAR_5)
  VAR_19 |= VAR_4;
 if (VAR_18->hotplug_supported_mask & VAR_7)
  VAR_19 |= VAR_6;
 if (VAR_18->hotplug_supported_mask & VAR_9)
  VAR_19 |= VAR_8;
 if (FUNC_1(VAR_17)) {
  if (VAR_18->hotplug_supported_mask & VAR_15)
   VAR_19 |= VAR_14;
  if (VAR_18->hotplug_supported_mask & VAR_12)
   VAR_19 |= VAR_11;
 } else {
  if (VAR_18->hotplug_supported_mask & VAR_16)
   VAR_19 |= VAR_14;
  if (VAR_18->hotplug_supported_mask & VAR_13)
   VAR_19 |= VAR_11;
 }
 if (VAR_18->hotplug_supported_mask & VAR_2) {
  VAR_19 |= VAR_1;





  if (FUNC_1(VAR_17))
   VAR_19 |= VAR_0;
  VAR_19 |= VAR_3;
 }



 FUNC_0(VAR_10, VAR_19);
}
