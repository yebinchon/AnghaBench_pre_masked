
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int reserved; int alloc; } ;
struct nv04_instmem_priv {int created; int ramfc; int ramro; int ramht; int vbios; TYPE_1__ base; int heap; int iomem; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int chipset; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct nouveau_object*,int *,int,int ,int ,int *) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_instmem_priv**) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (struct nouveau_object*,int *,int,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct nv04_instmem_priv*) ;
 struct nouveau_device* FUNC_7 (struct nouveau_object*) ;
 int FUNC_8 (struct nv04_instmem_priv*,char*) ;
 struct nouveau_object* FUNC_9 (struct nv04_instmem_priv*) ;
 int FUNC_10 (struct nv04_instmem_priv*,int) ;
 scalar_t__ FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int
FUNC_14(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
    struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
    struct nouveau_object **VAR_8)
{
 struct nouveau_device *VAR_9 = FUNC_7(VAR_3);
 struct pci_dev *VAR_10 = VAR_9->pdev;
 struct nv04_instmem_priv *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_11);
 *VAR_8 = FUNC_9(VAR_11);
 if (VAR_12)
  return VAR_12;


 if (FUNC_11(VAR_10, 2))
  VAR_13 = 2;
 else
  VAR_13 = 3;

 VAR_11->iomem = FUNC_1(FUNC_12(VAR_10, VAR_13),
         FUNC_11(VAR_10, VAR_13));
 if (!VAR_11->iomem) {
  FUNC_8(VAR_11, "unable to map PRAMIN BAR\n");
  return -VAR_0;
 }





 VAR_14 = FUNC_0((FUNC_10(VAR_11, 0x001540) & 0x0000ff00) >> 8);
 if (VAR_9->chipset == 0x40) VAR_11->base.reserved = 0x6aa0 * VAR_14;
 else if (VAR_9->chipset < 0x43) VAR_11->base.reserved = 0x4f00 * VAR_14;
 else if (FUNC_6(VAR_11)) VAR_11->base.reserved = 0x4980 * VAR_14;
 else VAR_11->base.reserved = 0x4a40 * VAR_14;
 VAR_11->base.reserved += 16 * 1024;
 VAR_11->base.reserved *= 32;
 VAR_11->base.reserved += 512 * 1024;
 VAR_11->base.reserved += 512 * 1024;

 VAR_11->base.reserved = FUNC_13(VAR_11->base.reserved, 4096);
 VAR_11->base.alloc = VAR_2;

 VAR_12 = FUNC_4(&VAR_11->heap, 0, VAR_11->base.reserved, 1);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_3, ((void*)0), 0x10000, 0, 0, &VAR_11->vbios);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_3, ((void*)0), 0x08000, 0, &VAR_11->ramht);
 if (VAR_12)
  return VAR_12;




 VAR_12 = FUNC_2(VAR_3, ((void*)0), 0x08000, 0, 0, &VAR_11->ramro);
 if (VAR_12)
  return VAR_12;




 VAR_12 = FUNC_2(VAR_3, ((void*)0), 0x20000, 0,
     VAR_1, &VAR_11->ramfc);
 if (VAR_12)
  return VAR_12;

 VAR_11->created = 1;
 return 0;
}
