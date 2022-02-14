
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int regions; int prog; int fini; int comp; int init; } ;
struct TYPE_4__ {int init; } ;
struct TYPE_6__ {TYPE_2__ tile; TYPE_1__ ram; int memtype_valid; } ;
struct nv40_fb_priv {TYPE_3__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv40_fb_priv**) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nouveau_object* FUNC_2 (struct nv40_fb_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
      struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
      struct nouveau_object **VAR_11)
{
 struct nv40_fb_priv *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_12);
 *VAR_11 = FUNC_2(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->base.memtype_valid = VAR_0;
 VAR_12->base.ram.init = VAR_5;
 VAR_12->base.tile.regions = 8;
 VAR_12->base.tile.init = VAR_3;
 VAR_12->base.tile.comp = VAR_4;
 VAR_12->base.tile.fini = VAR_1;
 VAR_12->base.tile.prog = VAR_2;
 return FUNC_1(&VAR_12->base);
}
