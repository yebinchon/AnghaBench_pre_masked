
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwsq_ucode {int dummy; } ;
struct nv50_pm_state {struct hwsq_ucode mclk_hwsq; } ;
struct nouveau_mem_exec_func {struct nv50_pm_state* priv; } ;


 int FUNC_0 (struct hwsq_ucode*,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_mem_exec_func *VAR_0, u32 VAR_1)
{
 struct nv50_pm_state *VAR_2 = VAR_0->priv;
 struct hwsq_ucode *VAR_3 = &VAR_2->mclk_hwsq;

 if (VAR_1 > 1000)
  FUNC_0(VAR_3, (VAR_1 + 500) / 1000);
}
