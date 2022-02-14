
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_lvds_encoder {int reg; TYPE_2__ base; } ;
struct drm_i915_private {unsigned int bios_lvds_val; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_2(struct intel_lvds_encoder *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->base.base.dev;
 unsigned int VAR_8;
 struct drm_i915_private *VAR_9 = VAR_7->dev_private;


 if (VAR_4 > 0)
  return VAR_4 == 2;

 if (FUNC_1(VAR_5))
  return 1;






 VAR_8 = FUNC_0(VAR_6->reg);
 if (!(VAR_8 & ~(VAR_3 | VAR_2)))
  VAR_8 = VAR_9->bios_lvds_val;

 return (VAR_8 & VAR_0) == VAR_1;
}
