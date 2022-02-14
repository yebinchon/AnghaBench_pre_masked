
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int corr; } ;
struct drm_i915_private {TYPE_1__ ips; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned long FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_24)
{
 struct drm_i915_private *VAR_25 = VAR_24->dev_private;
 u32 VAR_26;
 u8 VAR_27[16];
 int VAR_28;


 FUNC_2(VAR_4, 0);
 FUNC_3(VAR_4);


 FUNC_2(VAR_23, 0x15040d00);
 FUNC_2(VAR_0, 0x007f0000);
 FUNC_2(VAR_1, 0x1e220004);
 FUNC_2(VAR_2, 0x04000004);

 for (VAR_28 = 0; VAR_28 < 5; VAR_28++)
  FUNC_2(VAR_17 + (VAR_28 * 4), 0);
 for (VAR_28 = 0; VAR_28 < 3; VAR_28++)
  FUNC_2(VAR_3 + (VAR_28 * 4), 0);


 for (VAR_28 = 0; VAR_28 < 16; VAR_28++) {
  u32 VAR_29 = FUNC_1(VAR_18 + (VAR_28 * 4));
  unsigned long VAR_30 = FUNC_4(VAR_29);
  unsigned long VAR_31 = (VAR_29 & VAR_19) >>
   VAR_20;
  unsigned long VAR_32;

  VAR_32 = VAR_31 * VAR_31;
  VAR_32 *= (VAR_30 / 1000);
  VAR_32 *= 255;
  VAR_32 /= (127*127*900);
  if (VAR_32 > 0xff)
   FUNC_0("bad pxval: %ld\n", VAR_32);
  VAR_27[VAR_28] = VAR_32;
 }

 VAR_27[14] = 0;
 VAR_27[15] = 0;

 for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
  u32 VAR_33 = (VAR_27[VAR_28*4] << 24) | (VAR_27[(VAR_28*4)+1] << 16) |
   (VAR_27[(VAR_28*4)+2] << 8) | (VAR_27[(VAR_28*4)+3]);
  FUNC_2(VAR_21 + (VAR_28 * 4), VAR_33);
 }


 FUNC_2(VAR_15, 0);
 FUNC_2(VAR_16, 0);
 FUNC_2(VAR_5, 0x00007f00);
 FUNC_2(VAR_6, 0x0000000e);
 FUNC_2(VAR_7, 0x000e0000);
 FUNC_2(VAR_8, 0x68000300);
 FUNC_2(VAR_9, 0x42000000);
 FUNC_2(VAR_10, 0x00140031);
 FUNC_2(VAR_11, 0);
 FUNC_2(VAR_12, 0);

 for (VAR_28 = 0; VAR_28 < 8; VAR_28++)
  FUNC_2(VAR_22 + (VAR_28 * 4), 0);


 FUNC_2(VAR_4, 0x80000019);

 VAR_26 = FUNC_1(VAR_13);

 VAR_25->ips.corr = (VAR_26 & VAR_14);
}
