
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int flush; int unmap; int umap; int kmap; int alloc; } ;
struct nvc0_bar_priv {int lock; TYPE_3__ base; TYPE_2__* bar; } ;
struct nouveau_vm {TYPE_1__* pgt; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int addr; } ;
struct nouveau_device {struct pci_dev* pdev; } ;
struct TYPE_5__ {struct nouveau_gpuobj* pgd; struct nouveau_vm* vm; struct nouveau_gpuobj* mem; } ;
struct TYPE_4__ {int* refcount; struct nouveau_gpuobj** obj; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nvc0_bar_priv**) ;
 int FUNC_2 (struct nouveau_object*,int *,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_3 (struct nouveau_device*,int ,int,int ,struct nouveau_vm**) ;
 int FUNC_4 (struct nouveau_vm*,struct nouveau_vm**,struct nouveau_gpuobj*) ;
 int VAR_2 ;
 struct nouveau_device* FUNC_5 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_6 (struct nvc0_bar_priv*) ;
 int FUNC_7 (struct nouveau_gpuobj*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
       struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
       struct nouveau_object **VAR_11)
{
 struct nouveau_device *VAR_12 = FUNC_5(VAR_6);
 struct pci_dev *VAR_13 = VAR_12->pdev;
 struct nvc0_bar_priv *VAR_14;
 struct nouveau_gpuobj *VAR_15;
 struct nouveau_vm *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_6, VAR_7, VAR_8, &VAR_14);
 *VAR_11 = FUNC_6(VAR_14);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_2(VAR_6, ((void*)0), 0x1000, 0, 0, &VAR_14->bar[0].mem);
 VAR_15 = VAR_14->bar[0].mem;
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_6, ((void*)0), 0x8000, 0, 0, &VAR_14->bar[0].pgd);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_12, 0, FUNC_8(VAR_13, 3), 0, &VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_6, ((void*)0),
     (FUNC_8(VAR_13, 3) >> 12) * 8,
     0x1000, VAR_0,
     &VAR_16->pgt[0].obj[0]);
 VAR_16->pgt[0].refcount[0] = 1;
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_4(VAR_16, &VAR_14->bar[0].vm, VAR_14->bar[0].pgd);
 FUNC_4(((void*)0), &VAR_16, ((void*)0));
 if (VAR_17)
  return VAR_17;

 FUNC_7(VAR_15, 0x0200, FUNC_0(VAR_14->bar[0].pgd->addr));
 FUNC_7(VAR_15, 0x0204, FUNC_10(VAR_14->bar[0].pgd->addr));
 FUNC_7(VAR_15, 0x0208, FUNC_0(FUNC_8(VAR_13, 3) - 1));
 FUNC_7(VAR_15, 0x020c, FUNC_10(FUNC_8(VAR_13, 3) - 1));


 VAR_17 = FUNC_2(VAR_6, ((void*)0), 0x1000, 0, 0, &VAR_14->bar[1].mem);
 VAR_15 = VAR_14->bar[1].mem;
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_6, ((void*)0), 0x8000, 0, 0, &VAR_14->bar[1].pgd);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_12, 0, FUNC_8(VAR_13, 1), 0, &VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_4(VAR_16, &VAR_14->bar[1].vm, VAR_14->bar[1].pgd);
 FUNC_4(((void*)0), &VAR_16, ((void*)0));
 if (VAR_17)
  return VAR_17;

 FUNC_7(VAR_15, 0x0200, FUNC_0(VAR_14->bar[1].pgd->addr));
 FUNC_7(VAR_15, 0x0204, FUNC_10(VAR_14->bar[1].pgd->addr));
 FUNC_7(VAR_15, 0x0208, FUNC_0(FUNC_8(VAR_13, 1) - 1));
 FUNC_7(VAR_15, 0x020c, FUNC_10(FUNC_8(VAR_13, 1) - 1));

 VAR_14->base.alloc = VAR_1;
 VAR_14->base.kmap = VAR_3;
 VAR_14->base.umap = VAR_4;
 VAR_14->base.unmap = VAR_5;
 VAR_14->base.flush = VAR_2;
 FUNC_9(&VAR_14->lock);
 return 0;
}
