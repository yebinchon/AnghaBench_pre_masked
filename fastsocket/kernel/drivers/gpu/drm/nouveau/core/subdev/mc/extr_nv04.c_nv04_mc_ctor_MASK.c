
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int intr_map; } ;
struct nv04_mc_priv {TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_mc_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_object* FUNC_1 (struct nv04_mc_priv*) ;
 TYPE_2__* FUNC_2 (struct nv04_mc_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
      struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
      struct nouveau_object **VAR_7)
{
 struct nv04_mc_priv *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8);
 *VAR_7 = FUNC_1(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_8)->intr = VAR_0;
 VAR_8->base.intr_map = VAR_1;
 return 0;
}
