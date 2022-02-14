
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwsq_ucode {int dummy; } ;
struct nv50_pm_state {struct hwsq_ucode mclk_hwsq; struct nouveau_pm_level* perflvl; } ;
struct TYPE_2__ {int* reg; } ;
struct nouveau_pm_level {TYPE_1__ timing; } ;
struct nouveau_mem_exec_func {struct nv50_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 int FUNC_0 (struct hwsq_ucode*,int,int) ;
 struct nouveau_device* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_1(VAR_0->dev);
 struct nv50_pm_state *VAR_2 = VAR_0->priv;
 struct nouveau_pm_level *VAR_3 = VAR_2->perflvl;
 struct hwsq_ucode *VAR_4 = &VAR_2->mclk_hwsq;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  u32 VAR_6 = 0x100220 + (VAR_5 * 4);
  u32 VAR_7 = FUNC_2(VAR_1, VAR_6);
  if (VAR_7 != VAR_3->timing.reg[VAR_5])
   FUNC_0(VAR_4, VAR_6, VAR_3->timing.reg[VAR_5]);
 }
}
