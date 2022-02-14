
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_msg {int len; int addr; int * buf; } ;
struct drm_i915_private {int gpio_mmio_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct drm_i915_private *VAR_9, struct i2c_msg *VAR_10,
  u32 VAR_11)
{
 int VAR_12 = VAR_9->gpio_mmio_base;
 u16 VAR_13 = VAR_10->len;
 u8 *VAR_14 = VAR_10->buf;

 FUNC_1(VAR_0 + VAR_12,
     VAR_11 |
     VAR_3 |
     (VAR_13 << VAR_2) |
     (VAR_10->addr << VAR_6) |
     VAR_7 | VAR_8);
 while (VAR_13) {
  int VAR_15;
  u32 VAR_16, VAR_17 = 0;

  VAR_15 = FUNC_2(VAR_9, VAR_4,
        VAR_5);
  if (VAR_15)
   return VAR_15;

  VAR_16 = FUNC_0(VAR_1 + VAR_12);
  do {
   *VAR_14++ = VAR_16 & 0xff;
   VAR_16 >>= 8;
  } while (--VAR_13 && ++VAR_17 < 4);
 }

 return 0;
}
