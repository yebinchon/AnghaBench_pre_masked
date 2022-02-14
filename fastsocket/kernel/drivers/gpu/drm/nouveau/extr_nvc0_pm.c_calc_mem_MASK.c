
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_pm_clock {int coef; } ;
struct nvbios_pll {scalar_t__ refclk; } ;
struct nouveau_device {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_device*,int,int,int) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct nouveau_device*,int,int,int) ;
 int FUNC_5 (struct nouveau_device*,int,int) ;
 int FUNC_6 (struct drm_device*,struct nvbios_pll*,int,int*,int *,int*,int*) ;
 int FUNC_7 (struct nouveau_bios*,int,struct nvbios_pll*) ;
 scalar_t__ FUNC_8 (struct drm_device*,int) ;

__attribute__((used)) static int
FUNC_9(struct drm_device *VAR_1, struct nvc0_pm_clock *VAR_2, u32 VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_1);
 struct nouveau_bios *VAR_5 = FUNC_0(VAR_4);
 struct nvbios_pll VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;


 VAR_11 = FUNC_3(VAR_4, 0x132020);
 if (!(VAR_11 & 0x00000001)) {





  FUNC_5(VAR_4, 0x137320, 0x00000103);
  FUNC_5(VAR_4, 0x137330, 0x81200606);
  FUNC_4(VAR_4, 0x132020, 0x00010000, 0x00010000);
  FUNC_5(VAR_4, 0x132024, 0x0001150f);
  FUNC_2(VAR_4, 0x132020, 0x00000001, 0x00000001);
  FUNC_4(VAR_4, 0x137390, 0x00020000, 0x00020000);
  FUNC_2(VAR_4, 0x132020, 0x00000004, 0x00000004);
 }




 VAR_10 = FUNC_7(VAR_5, 0x132000, &VAR_6);
 if (VAR_10 == 0) {
  VAR_6.refclk = FUNC_8(VAR_1, 0x132020);
  if (VAR_6.refclk) {
   VAR_10 = FUNC_6(VAR_1, &VAR_6, VAR_3, &VAR_7, ((void*)0), &VAR_8, &VAR_9);
   if (VAR_10 > 0) {
    VAR_2->coef = (VAR_9 << 16) | (VAR_7 << 8) | VAR_8;
    return 0;
   }
  }
 }

 return -VAR_0;
}
