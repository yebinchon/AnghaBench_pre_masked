
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* vblank; } ;
struct nv50_disp_priv {TYPE_2__ base; int sclass; } ;
struct nv50_disp_base {int ramht; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {int disable; int enable; struct nv50_disp_priv* priv; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int ,int ,struct nv50_disp_base**) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int,int ,int *) ;
 struct nouveau_object* FUNC_2 (struct nv50_disp_base*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_2,
      struct nouveau_object *VAR_3,
      struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
      struct nouveau_object **VAR_7)
{
 struct nv50_disp_priv *VAR_8 = (void *)VAR_3;
 struct nv50_disp_base *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, 0,
        VAR_8->sclass, 0, &VAR_9);
 *VAR_7 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_8->base.vblank->priv = VAR_8;
 VAR_8->base.vblank->enable = VAR_1;
 VAR_8->base.vblank->disable = VAR_0;

 return FUNC_1(VAR_2, VAR_2, 0x1000, 0, &VAR_9->ramht);
}
