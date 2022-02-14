
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* vblank; } ;
struct nv04_disp_priv {TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int sclass; } ;
struct TYPE_7__ {int intr; } ;
struct TYPE_5__ {int disable; int enable; struct nv04_disp_priv* priv; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,char*,char*,struct nv04_disp_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (struct nv04_disp_priv*) ;
 struct nouveau_object* FUNC_2 (struct nv04_disp_priv*) ;
 TYPE_3__* FUNC_3 (struct nv04_disp_priv*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_4, struct nouveau_object *VAR_5,
        struct nouveau_oclass *VAR_6, void *VAR_7, u32 VAR_8,
        struct nouveau_object **VAR_9)
{
 struct nv04_disp_priv *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, 2, "DISPLAY",
      "display", &VAR_10);
 *VAR_9 = FUNC_2(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_1(VAR_10)->sclass = VAR_1;
 FUNC_3(VAR_10)->intr = VAR_0;
 VAR_10->base.vblank->priv = VAR_10;
 VAR_10->base.vblank->enable = VAR_3;
 VAR_10->base.vblank->disable = VAR_2;
 return 0;
}
