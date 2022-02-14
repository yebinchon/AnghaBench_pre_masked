
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nv50_dmac {int base; int handle; scalar_t__ ptr; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,int *) ;
 TYPE_1__* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_1, struct nv50_dmac *VAR_2)
{
 if (VAR_2->ptr) {
  struct pci_dev *VAR_3 = FUNC_1(VAR_1)->pdev;
  FUNC_2(VAR_3, VAR_0, VAR_2->ptr, VAR_2->handle);
 }

 FUNC_0(VAR_1, &VAR_2->base);
}
