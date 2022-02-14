
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvbios_pll {int bias_p; } ;
struct hwsq_ucode {int dummy; } ;
struct nv50_pm_state {int mctrl; int mcoef; struct hwsq_ucode mclk_hwsq; } ;
struct nouveau_pm_level {int memory; } ;
struct nouveau_mem_exec_func {struct nv50_pm_state* priv; int timing_set; int clock_set; int mrs; int mrg; int wait; int refresh_self; int refresh_auto; int refresh; int precharge; struct drm_device* dev; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int,struct nvbios_pll*,int ,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct hwsq_ucode*) ;
 int FUNC_3 (struct hwsq_ucode*) ;
 int FUNC_4 (struct hwsq_ucode*,int,int) ;
 int FUNC_5 (struct hwsq_ucode*,int,int) ;
 int FUNC_6 (struct hwsq_ucode*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nouveau_device* FUNC_7 (struct drm_device*) ;
 struct nouveau_drm* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct nouveau_mem_exec_func*,struct nouveau_pm_level*) ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (struct nouveau_device*,int) ;
 int FUNC_12 (struct drm_device*,int ) ;

__attribute__((used)) static int
FUNC_13(struct drm_device *VAR_11, struct nouveau_pm_level *VAR_12,
   struct nv50_pm_state *VAR_13)
{
 struct nouveau_drm *VAR_14 = FUNC_8(VAR_11);
 struct nouveau_device *VAR_15 = FUNC_7(VAR_11);
 u32 VAR_16 = 0;
 struct nouveau_mem_exec_func VAR_17 = {
  .dev = VAR_11,
  .precharge = VAR_5,
  .refresh = VAR_6,
  .refresh_auto = VAR_7,
  .refresh_self = VAR_8,
  .wait = VAR_10,
  .mrg = VAR_3,
  .mrs = VAR_4,
  .clock_set = VAR_2,
  .timing_set = VAR_9,
  .priv = VAR_13
 };
 struct hwsq_ucode *VAR_18 = &VAR_13->mclk_hwsq;
 struct nvbios_pll VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;


 VAR_13->mctrl = FUNC_11(VAR_15, 0x004008);
 VAR_13->mctrl &= ~0x81ff0200;
 if (FUNC_1(VAR_12->memory, FUNC_12(VAR_11, VAR_1))) {
  VAR_13->mctrl |= 0x00000200 | (VAR_19.bias_p << 19);
 } else {
  VAR_23 = FUNC_0(VAR_11, 0x4008, &VAR_19, VAR_12->memory, &VAR_20, &VAR_21, &VAR_22);
  if (VAR_23 == 0)
   return -VAR_0;

  VAR_13->mctrl |= 0x80000000 | (VAR_22 << 22) | (VAR_22 << 16);
  VAR_13->mctrl |= VAR_19.bias_p << 19;
  VAR_13->mcoef = (VAR_20 << 8) | VAR_21;
 }


 FUNC_3(VAR_18);
 if (VAR_16) {
  FUNC_4(VAR_18, VAR_16, 0x00);
  FUNC_4(VAR_18, VAR_16, 0x01);
 }
 if (FUNC_10(VAR_14->device)->chipset >= 0x92)
  FUNC_6(VAR_18, 0x611200, 0x00003300);
 FUNC_5(VAR_18, 0x10, 0);
 FUNC_4(VAR_18, 0x00, 0x01);

 VAR_23 = FUNC_9(&VAR_17, VAR_12);
 if (VAR_23)
  return VAR_23;

 FUNC_5(VAR_18, 0x10, 1);
 FUNC_4(VAR_18, 0x00, 0x00);
 if (FUNC_10(VAR_14->device)->chipset >= 0x92)
  FUNC_6(VAR_18, 0x611200, 0x00003330);
 FUNC_2(VAR_18);
 return 0;
}
