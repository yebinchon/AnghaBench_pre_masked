
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pll_calc; int pll_set; } ;
struct nva3_clock_priv {TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nva3_clock_priv**) ;
 struct nouveau_object* FUNC_1 (struct nva3_clock_priv*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
  struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
  struct nouveau_object **VAR_7)
{
 struct nva3_clock_priv *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8);
 *VAR_7 = FUNC_1(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8->base.pll_set = VAR_1;
 VAR_8->base.pll_calc = VAR_0;
 return 0;
}
