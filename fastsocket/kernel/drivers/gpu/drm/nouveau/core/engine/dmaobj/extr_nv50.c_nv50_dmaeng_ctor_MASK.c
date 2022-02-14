
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bind; } ;
struct nv50_dmaeng_priv {TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int sclass; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_dmaeng_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct nv50_dmaeng_priv*) ;
 struct nouveau_object* FUNC_2 (struct nv50_dmaeng_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
   struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
   struct nouveau_object **VAR_7)
{
 struct nv50_dmaeng_priv *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8);
 *VAR_7 = FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_8)->sclass = VAR_0;
 VAR_8->base.bind = VAR_1;
 return 0;
}
