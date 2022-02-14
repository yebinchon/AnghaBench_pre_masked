
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwsq_ucode {int dummy; } ;
struct nv50_pm_state {struct hwsq_ucode mclk_hwsq; } ;
struct nouveau_mem_exec_func {struct nv50_pm_state* priv; } ;


 int FUNC_0 (struct hwsq_ucode*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_mem_exec_func *VAR_0)
{
 struct nv50_pm_state *VAR_1 = VAR_0->priv;
 struct hwsq_ucode *VAR_2 = &VAR_1->mclk_hwsq;

 FUNC_0(VAR_2, 0x1002d4, 0x00000001);
}
