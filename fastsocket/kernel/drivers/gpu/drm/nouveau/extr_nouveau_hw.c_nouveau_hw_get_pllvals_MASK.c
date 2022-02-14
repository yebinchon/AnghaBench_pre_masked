
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvbios_pll {int reg; int refclk; } ;
struct nouveau_pll_vals {int refclk; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int card_type; } ;
struct nouveau_bios {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nouveau_bios* FUNC_1 (struct nouveau_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int,int,int,struct nouveau_pll_vals*) ;
 struct nouveau_device* FUNC_4 (int ) ;
 int FUNC_5 (struct nouveau_device*,int) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct nouveau_bios*,int,struct nvbios_pll*) ;

int
FUNC_8(struct drm_device *VAR_6, enum nvbios_pll_type VAR_7,
         struct nouveau_pll_vals *VAR_8)
{
 struct nouveau_drm *VAR_9 = FUNC_2(VAR_6);
 struct nouveau_device *VAR_10 = FUNC_4(VAR_9->device);
 struct nouveau_bios *VAR_11 = FUNC_1(VAR_10);
 uint32_t VAR_12, VAR_13, VAR_14 = 0;
 struct nvbios_pll VAR_15;
 int VAR_16;

 VAR_16 = FUNC_7(VAR_11, VAR_7, &VAR_15);
 if (VAR_16 || !(VAR_12 = VAR_15.reg))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_10, VAR_12);
 if (VAR_12 <= 0x405c)
  VAR_14 = FUNC_5(VAR_10, VAR_12 + 4);
 else if (FUNC_6(VAR_6)) {
  uint32_t VAR_17 = VAR_12 + (VAR_12 == VAR_5 ? 0x5c : 0x70);

  VAR_14 = FUNC_5(VAR_10, VAR_17);
 }

 if (FUNC_4(VAR_9->device)->card_type == 0x40 && VAR_12 >= VAR_2) {
  uint32_t VAR_18 = FUNC_0(VAR_6, 0, VAR_1);


  if (VAR_12 == VAR_2) {
   if (VAR_18 & VAR_3)
    VAR_14 = 0;
  } else
   if (VAR_18 & VAR_4)
    VAR_14 = 0;
 }

 FUNC_3(VAR_6, VAR_12, VAR_13, VAR_14, VAR_8);
 VAR_8->refclk = VAR_15.refclk;
 return 0;
}
