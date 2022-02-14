
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwsq_ucode {int dummy; } ;
struct nv50_pm_state {int mmast; int mctrl; int mcoef; struct hwsq_ucode mclk_hwsq; } ;
struct nouveau_mem_exec_func {struct nv50_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 int FUNC_0 (struct hwsq_ucode*,int,int) ;
 struct nouveau_device* FUNC_1 (int ) ;
 void* FUNC_2 (struct nouveau_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_1(VAR_0->dev);
 struct nv50_pm_state *VAR_2 = VAR_0->priv;
 struct hwsq_ucode *VAR_3 = &VAR_2->mclk_hwsq;
 u32 VAR_4 = FUNC_2(VAR_1, 0x004008);

 VAR_2->mmast = FUNC_2(VAR_1, 0x00c040);
 VAR_2->mmast &= ~0xc0000000;
 VAR_2->mmast |= 0x0000c000;

 FUNC_0(VAR_3, 0xc040, VAR_2->mmast);
 FUNC_0(VAR_3, 0x4008, VAR_4 | 0x00000200);
 if (VAR_2->mctrl & 0x80000000)
  FUNC_0(VAR_3, 0x400c, VAR_2->mcoef);
 FUNC_0(VAR_3, 0x4008, VAR_2->mctrl);
}
