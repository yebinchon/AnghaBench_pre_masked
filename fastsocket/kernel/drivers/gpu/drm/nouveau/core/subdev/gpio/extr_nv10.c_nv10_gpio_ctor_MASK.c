
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* events; int sense; int drive; } ;
struct nv10_gpio_priv {TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {int intr; } ;
struct TYPE_4__ {int disable; int enable; struct nv10_gpio_priv* priv; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nv10_gpio_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nouveau_object* FUNC_1 (struct nv10_gpio_priv*) ;
 TYPE_3__* FUNC_2 (struct nv10_gpio_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_5, struct nouveau_object *VAR_6,
        struct nouveau_oclass *VAR_7, void *VAR_8, u32 VAR_9,
        struct nouveau_object **VAR_10)
{
 struct nv10_gpio_priv *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_7, 16, &VAR_11);
 *VAR_10 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11->base.drive = VAR_0;
 VAR_11->base.sense = VAR_4;
 VAR_11->base.events->priv = VAR_11;
 VAR_11->base.events->enable = VAR_3;
 VAR_11->base.events->disable = VAR_2;
 FUNC_2(VAR_11)->intr = VAR_1;
 return 0;
}
