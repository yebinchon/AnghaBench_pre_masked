
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pll; int clk; } ;
struct nva3_pm_state {int r004018; int* rammap; int* ramcfg; int r100760; TYPE_1__ mclk; } ;
struct nouveau_mem_exec_func {struct nva3_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 int FUNC_0 (int) ;
 struct nouveau_device* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_device*,int,int,int) ;
 int FUNC_3 (struct nouveau_device*,int) ;
 int FUNC_4 (struct nouveau_device*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_1(VAR_0->dev);
 struct nva3_pm_state *VAR_2 = VAR_0->priv;
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_1, 0x004000);
 if (!(VAR_3 & 0x00000008) && VAR_2->mclk.pll) {
  FUNC_4(VAR_1, 0x004000, (VAR_3 |= 0x00000008));
  FUNC_2(VAR_1, 0x1110e0, 0x00088000, 0x00088000);
  FUNC_4(VAR_1, 0x004018, 0x00001000);
  FUNC_4(VAR_1, 0x004000, (VAR_3 &= ~0x00000001));
  FUNC_4(VAR_1, 0x004004, VAR_2->mclk.pll);
  FUNC_4(VAR_1, 0x004000, (VAR_3 |= 0x00000001));
  FUNC_5(64);
  FUNC_4(VAR_1, 0x004018, 0x00005000 | VAR_2->r004018);
  FUNC_5(20);
 } else
 if (!VAR_2->mclk.pll) {
  FUNC_2(VAR_1, 0x004168, 0x003f3040, VAR_2->mclk.clk);
  FUNC_4(VAR_1, 0x004000, (VAR_3 |= 0x00000008));
  FUNC_2(VAR_1, 0x1110e0, 0x00088000, 0x00088000);
  FUNC_4(VAR_1, 0x004018, 0x0000d000 | VAR_2->r004018);
 }

 if (VAR_2->rammap) {
  if (VAR_2->ramcfg && (VAR_2->rammap[4] & 0x08)) {
   u32 VAR_4 = (FUNC_0(VAR_2->ramcfg[5]) << 8) |
          VAR_2->ramcfg[5];
   u32 VAR_5 = FUNC_0(VAR_2->ramcfg[7]);
   u32 VAR_6 = (VAR_2->ramcfg[9] & 0xf0) << 16 |
         (VAR_2->ramcfg[3] & 0x0f) << 16 |
         (VAR_2->ramcfg[9] & 0x0f) |
         0x80000000;
   FUNC_4(VAR_1, 0x1005a0, VAR_4);
   FUNC_4(VAR_1, 0x1005a4, VAR_5);
   FUNC_4(VAR_1, 0x10f804, VAR_6);
   FUNC_2(VAR_1, 0x10053c, 0x00001000, 0x00000000);
  } else {
   FUNC_2(VAR_1, 0x10053c, 0x00001000, 0x00001000);
   FUNC_2(VAR_1, 0x10f804, 0x80000000, 0x00000000);
   FUNC_2(VAR_1, 0x100760, 0x22222222, VAR_2->r100760);
   FUNC_2(VAR_1, 0x1007a0, 0x22222222, VAR_2->r100760);
   FUNC_2(VAR_1, 0x1007e0, 0x22222222, VAR_2->r100760);
  }
 }

 if (VAR_2->mclk.pll) {
  FUNC_2(VAR_1, 0x1110e0, 0x00088000, 0x00011000);
  FUNC_4(VAR_1, 0x004000, (VAR_3 &= ~0x00000008));
 }
}
