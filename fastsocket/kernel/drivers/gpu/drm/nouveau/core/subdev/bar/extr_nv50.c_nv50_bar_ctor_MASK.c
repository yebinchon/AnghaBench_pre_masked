
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int flush; int unmap; int umap; int kmap; int alloc; } ;
struct nv50_bar_priv {int lock; TYPE_2__ base; struct nv50_bar_priv* bar1; struct nv50_bar_priv* pgd; struct nouveau_vm* bar1_vm; struct nv50_bar_priv* bar3; struct nouveau_vm* bar3_vm; struct nv50_bar_priv* pad; struct nv50_bar_priv* mem; } ;
struct nouveau_vm {TYPE_1__* pgt; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int chipset; int pdev; } ;
struct TYPE_3__ {int* refcount; struct nv50_bar_priv** obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_bar_priv**) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,int,int,int ,struct nv50_bar_priv**) ;
 int FUNC_3 (struct nouveau_device*,int,int,int,struct nouveau_vm**) ;
 int FUNC_4 (struct nouveau_vm*,struct nouveau_vm**,struct nv50_bar_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nouveau_device* FUNC_5 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_6 (struct nv50_bar_priv*) ;
 int FUNC_7 (struct nv50_bar_priv*,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_object *VAR_8, struct nouveau_object *VAR_9,
       struct nouveau_oclass *VAR_10, void *VAR_11, u32 VAR_12,
       struct nouveau_object **VAR_13)
{
 struct nouveau_device *VAR_14 = FUNC_5(VAR_8);
 struct nouveau_object *VAR_15;
 struct nouveau_vm *VAR_16;
 struct nv50_bar_priv *VAR_17;
 u64 VAR_18, VAR_19;
 int VAR_20;

 VAR_20 = FUNC_1(VAR_8, VAR_9, VAR_10, &VAR_17);
 *VAR_13 = FUNC_6(VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, ((void*)0), 0x20000, 0, VAR_0,
    &VAR_17->mem);
 VAR_15 = FUNC_6(VAR_17->mem);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, VAR_15, (VAR_14->chipset == 0x50) ?
     0x1400 : 0x0200, 0, 0, &VAR_17->pad);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, VAR_15, 0x4000, 0, 0, &VAR_17->pgd);
 if (VAR_20)
  return VAR_20;


 VAR_18 = 0x0100000000ULL;
 VAR_19 = VAR_18 + FUNC_8(VAR_14->pdev, 3);

 VAR_20 = FUNC_3(VAR_14, VAR_18, VAR_19, VAR_18, &VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, VAR_15, ((VAR_19-- - VAR_18) >> 12) * 8,
     0x1000, VAR_1,
     &VAR_16->pgt[0].obj[0]);
 VAR_16->pgt[0].refcount[0] = 1;
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_4(VAR_16, &VAR_17->bar3_vm, VAR_17->pgd);
 FUNC_4(((void*)0), &VAR_16, ((void*)0));
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, VAR_15, 24, 16, 0, &VAR_17->bar3);
 if (VAR_20)
  return VAR_20;

 FUNC_7(VAR_17->bar3, 0x00, 0x7fc00000);
 FUNC_7(VAR_17->bar3, 0x04, FUNC_0(VAR_19));
 FUNC_7(VAR_17->bar3, 0x08, FUNC_0(VAR_18));
 FUNC_7(VAR_17->bar3, 0x0c, FUNC_10(VAR_19) << 24 |
      FUNC_10(VAR_18));
 FUNC_7(VAR_17->bar3, 0x10, 0x00000000);
 FUNC_7(VAR_17->bar3, 0x14, 0x00000000);


 VAR_18 = 0x0000000000ULL;
 VAR_19 = VAR_18 + FUNC_8(VAR_14->pdev, 1);

 VAR_20 = FUNC_3(VAR_14, VAR_18, VAR_19--, VAR_18, &VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_4(VAR_16, &VAR_17->bar1_vm, VAR_17->pgd);
 FUNC_4(((void*)0), &VAR_16, ((void*)0));
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_8, VAR_15, 24, 16, 0, &VAR_17->bar1);
 if (VAR_20)
  return VAR_20;

 FUNC_7(VAR_17->bar1, 0x00, 0x7fc00000);
 FUNC_7(VAR_17->bar1, 0x04, FUNC_0(VAR_19));
 FUNC_7(VAR_17->bar1, 0x08, FUNC_0(VAR_18));
 FUNC_7(VAR_17->bar1, 0x0c, FUNC_10(VAR_19) << 24 |
      FUNC_10(VAR_18));
 FUNC_7(VAR_17->bar1, 0x10, 0x00000000);
 FUNC_7(VAR_17->bar1, 0x14, 0x00000000);

 VAR_17->base.alloc = VAR_2;
 VAR_17->base.kmap = VAR_4;
 VAR_17->base.umap = VAR_5;
 VAR_17->base.unmap = VAR_6;
 if (VAR_14->chipset == 0x50)
  VAR_17->base.flush = VAR_3;
 else
  VAR_17->base.flush = VAR_7;
 FUNC_9(&VAR_17->lock);
 return 0;
}
