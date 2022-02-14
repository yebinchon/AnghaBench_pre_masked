
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* events; int sense; int drive; int reset; } ;
struct nv50_gpio_priv {TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int chipset; } ;
struct TYPE_7__ {int intr; } ;
struct TYPE_5__ {int disable; int enable; struct nv50_gpio_priv* priv; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nv50_gpio_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_2 (struct nv50_gpio_priv*) ;
 TYPE_3__* FUNC_3 (struct nv50_gpio_priv*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
        struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
        struct nouveau_object **VAR_11)
{
 struct nv50_gpio_priv *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8,
      FUNC_1(VAR_6)->chipset >= 0x90 ? 32 : 16,
      &VAR_12);
 *VAR_11 = FUNC_2(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->base.reset = VAR_4;
 VAR_12->base.drive = VAR_0;
 VAR_12->base.sense = VAR_5;
 VAR_12->base.events->priv = VAR_12;
 VAR_12->base.events->enable = VAR_3;
 VAR_12->base.events->disable = VAR_2;
 FUNC_3(VAR_12)->intr = VAR_1;
 return 0;
}
