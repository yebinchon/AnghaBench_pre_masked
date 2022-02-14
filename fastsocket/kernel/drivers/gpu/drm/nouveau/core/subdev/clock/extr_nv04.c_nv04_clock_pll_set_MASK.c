
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvbios_pll {int dummy; } ;
struct nv04_clock_priv {int dummy; } ;
struct nouveau_pll_vals {int dummy; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;int (* pll_prog ) (struct nouveau_clock*,int,struct nouveau_pll_vals*) ;} ;


 int FUNC_0 (struct nv04_clock_priv*) ;
 int FUNC_1 (int ,int,struct nvbios_pll*) ;
 int FUNC_2 (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;
 int FUNC_3 (struct nouveau_clock*,int,struct nouveau_pll_vals*) ;

int
FUNC_4(struct nouveau_clock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nv04_clock_priv *VAR_3 = (void *)VAR_0;
 struct nouveau_pll_vals VAR_4;
 struct nvbios_pll VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_1 > 0x405c ?
          VAR_1 : VAR_1 - 4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_0->pll_calc(VAR_0, &VAR_5, VAR_2, &VAR_4);
 if (!VAR_6)
  return VAR_6;

 return VAR_0->pll_prog(VAR_0, VAR_1, &VAR_4);
}
