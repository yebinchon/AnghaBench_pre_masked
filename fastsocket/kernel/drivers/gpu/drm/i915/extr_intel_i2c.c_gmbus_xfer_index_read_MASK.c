
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int len; int* buf; } ;
struct drm_i915_private {int gpio_mmio_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct drm_i915_private*,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_2(struct drm_i915_private *VAR_4, struct i2c_msg *VAR_5)
{
 int VAR_6 = VAR_4->gpio_mmio_base;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 int VAR_9;

 if (VAR_5[0].len == 2)
  VAR_8 = VAR_1 |
    VAR_5[0].buf[1] | (VAR_5[0].buf[0] << 8);
 if (VAR_5[0].len == 1)
  VAR_7 = VAR_2 |
          (VAR_5[0].buf[0] << VAR_3);


 if (VAR_8)
  FUNC_0(VAR_0 + VAR_6, VAR_8);

 VAR_9 = FUNC_1(VAR_4, &VAR_5[1], VAR_7);


 if (VAR_8)
  FUNC_0(VAR_0 + VAR_6, 0);

 return VAR_9;
}
