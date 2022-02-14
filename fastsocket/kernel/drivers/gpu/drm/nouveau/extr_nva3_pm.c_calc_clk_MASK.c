
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_pll {int refclk; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;
struct creg {int pll; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int) ;
 int FUNC_1 (struct nouveau_drm*,char*,int,int,int) ;
 int FUNC_2 (int,int) ;
 struct nouveau_bios* FUNC_3 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_4 (struct drm_device*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct nouveau_device*,int) ;
 int FUNC_7 (struct drm_device*,struct nvbios_pll*,int,int*,int *,int*,int*) ;
 int FUNC_8 (struct nouveau_bios*,int,struct nvbios_pll*) ;
 int FUNC_9 (struct drm_device*,int,int) ;
 int FUNC_10 (struct drm_device*,int) ;

__attribute__((used)) static int
FUNC_11(struct drm_device *VAR_2, int VAR_3, u32 VAR_4, u32 VAR_5, struct creg *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_5(VAR_2);
 struct nouveau_device *VAR_8 = FUNC_4(VAR_2);
 struct nouveau_bios *VAR_9 = FUNC_3(VAR_8);
 struct nvbios_pll VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_6->pll = 0;
 VAR_6->clk = 0;
 if (!VAR_5) {
  FUNC_0(VAR_7, "no clock for 0x%04x/0x%02x\n", VAR_4, VAR_3);
  return 0;
 }

 switch (VAR_5) {
 case 27000:
  VAR_6->clk = 0x00000100;
  return VAR_5;
 case 100000:
  VAR_6->clk = 0x00002100;
  return VAR_5;
 case 108000:
  VAR_6->clk = 0x00002140;
  return VAR_5;
 default:
  VAR_12 = FUNC_10(VAR_2, VAR_3);
  VAR_13 = FUNC_2((VAR_12 * 2) / (VAR_5 - 2999), (u32)65);
  if (VAR_13 > 4) {
   VAR_11 = (VAR_12 * 2) / VAR_13;
   VAR_17 = VAR_5 - VAR_11;
   if (!VAR_4 || (VAR_17 >= -2000 && VAR_17 < 3000)) {
    VAR_6->clk = (((VAR_13 - 2) << 16) | 0x00003100);
    return VAR_11;
   }
  }

  if (!VAR_4) {
   FUNC_1(VAR_7, "bad freq %02x: %d %d\n", VAR_3, VAR_5, VAR_12);
   return -VAR_1;
  }

  break;
 }

 VAR_18 = FUNC_8(VAR_9, VAR_4, &VAR_10);
 if (VAR_18)
  return VAR_18;

 VAR_10.refclk = FUNC_9(VAR_2, VAR_3 - 0x10, 1);
 if (!VAR_10.refclk)
  return -VAR_0;

 VAR_18 = FUNC_7(VAR_2, &VAR_10, VAR_5, &VAR_15, ((void*)0), &VAR_16, &VAR_14);
 if (VAR_18 >= 0) {
  VAR_6->clk = FUNC_6(VAR_8, 0x4120 + (VAR_3 * 4));
  VAR_6->pll = (VAR_14 << 16) | (VAR_15 << 8) | VAR_16;
 }

 return VAR_18;
}
