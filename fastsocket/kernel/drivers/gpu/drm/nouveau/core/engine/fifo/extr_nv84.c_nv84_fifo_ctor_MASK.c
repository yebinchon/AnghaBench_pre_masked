
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* uevent; } ;
struct nv50_fifo_priv {TYPE_2__ base; int * playlist; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int sclass; int * cclass; } ;
struct TYPE_7__ {int unit; int intr; } ;
struct TYPE_5__ {struct nv50_fifo_priv* priv; int disable; int enable; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,struct nv50_fifo_priv**) ;
 int FUNC_1 (struct nouveau_object*,int *,int,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (struct nv50_fifo_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv50_fifo_priv*) ;
 TYPE_3__* FUNC_4 (struct nv50_fifo_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_5, struct nouveau_object *VAR_6,
        struct nouveau_oclass *VAR_7, void *VAR_8, u32 VAR_9,
        struct nouveau_object **VAR_10)
{
 struct nv50_fifo_priv *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_7, 1, 127, &VAR_11);
 *VAR_10 = FUNC_3(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_5, ((void*)0), 128 * 4, 0x1000, 0,
    &VAR_11->playlist[0]);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_5, ((void*)0), 128 * 4, 0x1000, 0,
    &VAR_11->playlist[1]);
 if (VAR_12)
  return VAR_12;

 VAR_11->base.uevent->enable = VAR_4;
 VAR_11->base.uevent->disable = VAR_3;
 VAR_11->base.uevent->priv = VAR_11;

 FUNC_4(VAR_11)->unit = 0x00000100;
 FUNC_4(VAR_11)->intr = VAR_0;
 FUNC_2(VAR_11)->cclass = &VAR_1;
 FUNC_2(VAR_11)->sclass = VAR_2;
 return 0;
}
