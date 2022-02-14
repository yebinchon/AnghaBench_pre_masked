
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv04_clock_priv {int dummy; } ;
struct nouveau_pll_vals {int dummy; } ;
struct nouveau_clock {int dummy; } ;
struct TYPE_3__ {int chip; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 TYPE_2__* FUNC_0 (struct nouveau_clock*) ;
 int FUNC_1 (struct nv04_clock_priv*,int,struct nouveau_pll_vals*) ;
 int FUNC_2 (struct nv04_clock_priv*,int,struct nouveau_pll_vals*) ;
 int FUNC_3 (struct nv04_clock_priv*,int,struct nouveau_pll_vals*) ;

int
FUNC_4(struct nouveau_clock *VAR_0, u32 VAR_1,
      struct nouveau_pll_vals *VAR_2)
{
 struct nv04_clock_priv *VAR_3 = (void *)VAR_0;
 int VAR_4 = FUNC_0(VAR_0)->version.chip;

 if (VAR_4 == 0x30 || VAR_4 == 0x31 || VAR_4 == 0x35 || VAR_4 == 0x36 ||
     VAR_4 >= 0x40) {
  if (VAR_1 > 0x405c)
   FUNC_1(VAR_3, VAR_1, VAR_2);
  else
   FUNC_2(VAR_3, VAR_1, VAR_2);
 } else
  FUNC_3(VAR_3, VAR_1, VAR_2);

 return 0;
}
