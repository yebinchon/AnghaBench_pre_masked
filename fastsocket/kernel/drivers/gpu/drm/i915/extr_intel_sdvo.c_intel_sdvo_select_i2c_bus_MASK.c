
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdvo_device_mapping {int i2c_pin; scalar_t__ initialized; } ;
struct intel_sdvo {int i2c; scalar_t__ is_sdvob; } ;
struct drm_i915_private {struct sdvo_device_mapping* sdvo_mappings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_1,
     struct intel_sdvo *VAR_2, u32 VAR_3)
{
 struct sdvo_device_mapping *VAR_4;
 u8 VAR_5;

 if (VAR_2->is_sdvob)
  VAR_4 = &VAR_1->sdvo_mappings[0];
 else
  VAR_4 = &VAR_1->sdvo_mappings[1];

 if (VAR_4->initialized && FUNC_2(VAR_4->i2c_pin))
  VAR_5 = VAR_4->i2c_pin;
 else
  VAR_5 = VAR_0;

 VAR_2->i2c = FUNC_1(VAR_1, VAR_5);




 FUNC_0(VAR_2->i2c, 1);
}
