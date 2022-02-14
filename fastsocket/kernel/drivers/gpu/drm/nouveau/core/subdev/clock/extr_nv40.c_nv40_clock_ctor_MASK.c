
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pll_prog; int pll_calc; int pll_set; } ;
struct nv40_clock_priv {TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv40_clock_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_object* FUNC_1 (struct nv40_clock_priv*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
  struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
  struct nouveau_object **VAR_8)
{
 struct nv40_clock_priv *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_9);
 *VAR_8 = FUNC_1(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9->base.pll_set = VAR_2;
 VAR_9->base.pll_calc = VAR_0;
 VAR_9->base.pll_prog = VAR_1;
 return 0;
}
