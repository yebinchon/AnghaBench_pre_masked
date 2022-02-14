
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_clock {int (* pll_set ) (struct nouveau_clock*,scalar_t__,int) ;} ;


 scalar_t__ VAR_0 ;
 struct nouveau_clock* FUNC_0 (struct nv50_disp_priv*) ;
 int FUNC_1 (struct nv50_disp_priv*,int) ;
 int FUNC_2 (struct nv50_disp_priv*,int,int) ;
 int FUNC_3 (struct nouveau_clock*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_disp_priv *VAR_1, int VAR_2)
{
 struct nouveau_clock *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = FUNC_1(VAR_1, 0x660450 + (VAR_2 * 0x300)) / 1000;
 if (VAR_4)
  VAR_3->pll_set(VAR_3, VAR_0 + VAR_2, VAR_4);
 FUNC_2(VAR_1, 0x612200 + (VAR_2 * 0x800), 0x00000000);
}
