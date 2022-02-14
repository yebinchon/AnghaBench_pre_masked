
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pll; int clk; } ;
struct nva3_pm_state {int r004018; int r100760; int* ramcfg; int* rammap; TYPE_1__ mclk; TYPE_2__* perflvl; } ;
struct nouveau_mem_exec_func {struct nva3_pm_state* priv; int timing_set; int clock_set; int mrs; int mrg; int wait; int refresh_self; int refresh_auto; int refresh; int precharge; struct drm_device* dev; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_mem_exec_func*,TYPE_2__*) ;
 int FUNC_2 (struct nouveau_device*,int,int,int) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct nouveau_device*,int,int,int) ;
 int FUNC_5 (struct nouveau_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_9, struct nva3_pm_state *VAR_10)
{
 struct nouveau_device *VAR_11 = FUNC_0(VAR_9);
 struct nouveau_mem_exec_func VAR_12 = {
  .dev = VAR_9,
  .precharge = VAR_3,
  .refresh = VAR_4,
  .refresh_auto = VAR_5,
  .refresh_self = VAR_6,
  .wait = VAR_8,
  .mrg = VAR_1,
  .mrs = VAR_2,
  .clock_set = VAR_0,
  .timing_set = VAR_7,
  .priv = VAR_10
 };
 u32 VAR_13;


 if (VAR_10->perflvl->memory <= 750000) {
  VAR_10->r004018 = 0x10000000;
  VAR_10->r100760 = 0x22222222;
 }

 VAR_13 = FUNC_3(VAR_11, 0x004000);
 if (VAR_13 & 0x00000008) {
  if (VAR_10->mclk.pll) {
   FUNC_2(VAR_11, 0x004128, 0x00000101, 0x00000101);
   FUNC_5(VAR_11, 0x004004, VAR_10->mclk.pll);
   FUNC_5(VAR_11, 0x004000, (VAR_13 |= 0x00000001));
   FUNC_5(VAR_11, 0x004000, (VAR_13 &= 0xffffffef));
   FUNC_4(VAR_11, 0x004000, 0x00020000, 0x00020000);
   FUNC_5(VAR_11, 0x004000, (VAR_13 |= 0x00000010));
   FUNC_5(VAR_11, 0x004018, 0x00005000 | VAR_10->r004018);
   FUNC_5(VAR_11, 0x004000, (VAR_13 |= 0x00000004));
  }
 } else {
  u32 VAR_14 = 0x00000101;
  if (VAR_10->mclk.clk)
   VAR_14 |= VAR_10->mclk.clk;
  else
   VAR_14 |= 0x00080000;
  FUNC_2(VAR_11, 0x004168, 0x003f3141, VAR_13);
 }

 if (VAR_10->ramcfg) {
  if (VAR_10->ramcfg[2] & 0x10) {
   FUNC_2(VAR_11, 0x111104, 0x00000600, 0x00000000);
  } else {
   FUNC_2(VAR_11, 0x111100, 0x40000000, 0x40000000);
   FUNC_2(VAR_11, 0x111104, 0x00000180, 0x00000000);
  }
 }
 if (VAR_10->rammap && !(VAR_10->rammap[4] & 0x02))
  FUNC_2(VAR_11, 0x100200, 0x00000800, 0x00000000);
 FUNC_5(VAR_11, 0x611200, 0x00003300);
 if (!(VAR_10->ramcfg[2] & 0x10))
  FUNC_5(VAR_11, 0x111100, 0x4c020000);

 FUNC_1(&VAR_12, VAR_10->perflvl);

 FUNC_5(VAR_11, 0x611200, 0x00003330);
 if (VAR_10->rammap && (VAR_10->rammap[4] & 0x02))
  FUNC_2(VAR_11, 0x100200, 0x00000800, 0x00000800);
 if (VAR_10->ramcfg) {
  if (VAR_10->ramcfg[2] & 0x10) {
   FUNC_2(VAR_11, 0x111104, 0x00000180, 0x00000180);
   FUNC_2(VAR_11, 0x111100, 0x40000000, 0x00000000);
  } else {
   FUNC_2(VAR_11, 0x111104, 0x00000600, 0x00000600);
  }
 }

 if (VAR_10->mclk.pll) {
  FUNC_2(VAR_11, 0x004168, 0x00000001, 0x00000000);
  FUNC_2(VAR_11, 0x004168, 0x00000100, 0x00000000);
 } else {
  FUNC_2(VAR_11, 0x004000, 0x00000001, 0x00000000);
  FUNC_2(VAR_11, 0x004128, 0x00000001, 0x00000000);
  FUNC_2(VAR_11, 0x004128, 0x00000100, 0x00000000);
 }
}
