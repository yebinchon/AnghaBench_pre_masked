
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
struct nve0_fifo_priv {TYPE_3__ base; TYPE_1__ user; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_10__ {int sclass; int * cclass; } ;
struct TYPE_9__ {int unit; int intr; } ;
struct TYPE_7__ {struct nve0_fifo_priv* priv; int disable; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,struct nve0_fifo_priv**) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct nouveau_object*,int *,int,int,int ,int *) ;
 TYPE_5__* FUNC_3 (struct nve0_fifo_priv*) ;
 struct nouveau_object* FUNC_4 (struct nve0_fifo_priv*) ;
 TYPE_4__* FUNC_5 (struct nve0_fifo_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_7, struct nouveau_object *VAR_8,
        struct nouveau_oclass *VAR_9, void *VAR_10, u32 VAR_11,
        struct nouveau_object **VAR_12)
{
 struct nve0_fifo_priv *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_9, 0, 4095, &VAR_13);
 *VAR_12 = FUNC_4(VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_7, ((void*)0), 4096 * 0x200, 0x1000,
     VAR_0, &VAR_13->user.mem);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_13->user.mem, VAR_1,
    &VAR_13->user.bar);
 if (VAR_14)
  return VAR_14;

 VAR_13->base.uevent->enable = VAR_6;
 VAR_13->base.uevent->disable = VAR_5;
 VAR_13->base.uevent->priv = VAR_13;

 FUNC_5(VAR_13)->unit = 0x00000100;
 FUNC_5(VAR_13)->intr = VAR_3;
 FUNC_3(VAR_13)->cclass = &VAR_2;
 FUNC_3(VAR_13)->sclass = VAR_4;
 return 0;
}
