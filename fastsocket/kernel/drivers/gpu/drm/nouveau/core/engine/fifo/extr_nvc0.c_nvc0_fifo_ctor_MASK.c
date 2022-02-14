
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_2__* uevent; } ;
struct TYPE_6__ {int bar; int mem; } ;
struct nvc0_fifo_priv {TYPE_3__ base; TYPE_1__ user; int * playlist; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_10__ {int sclass; int * cclass; } ;
struct TYPE_9__ {int unit; int intr; } ;
struct TYPE_7__ {struct nvc0_fifo_priv* priv; int disable; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,struct nvc0_fifo_priv**) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct nouveau_object*,int *,int,int,int ,int *) ;
 TYPE_5__* FUNC_3 (struct nvc0_fifo_priv*) ;
 struct nouveau_object* FUNC_4 (struct nvc0_fifo_priv*) ;
 TYPE_4__* FUNC_5 (struct nvc0_fifo_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
        struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
        struct nouveau_object **VAR_11)
{
 struct nvc0_fifo_priv *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, 0, 127, &VAR_12);
 *VAR_11 = FUNC_4(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_6, ((void*)0), 0x1000, 0x1000, 0,
    &VAR_12->playlist[0]);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_6, ((void*)0), 0x1000, 0x1000, 0,
    &VAR_12->playlist[1]);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_6, ((void*)0), 128 * 0x1000, 0x1000, 0,
    &VAR_12->user.mem);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_12->user.mem, VAR_0,
    &VAR_12->user.bar);
 if (VAR_13)
  return VAR_13;

 VAR_12->base.uevent->enable = VAR_5;
 VAR_12->base.uevent->disable = VAR_4;
 VAR_12->base.uevent->priv = VAR_12;

 FUNC_5(VAR_12)->unit = 0x00000100;
 FUNC_5(VAR_12)->intr = VAR_2;
 FUNC_3(VAR_12)->cclass = &VAR_1;
 FUNC_3(VAR_12)->sclass = VAR_3;
 return 0;
}
