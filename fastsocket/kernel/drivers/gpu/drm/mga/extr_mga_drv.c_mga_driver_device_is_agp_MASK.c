
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int device; TYPE_2__* bus; } ;
struct drm_device {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {int vendor; int device; } ;



__attribute__((used)) static int FUNC_0(struct drm_device *VAR_0)
{
 const struct pci_dev *const VAR_1 = VAR_0->pdev;
 if ((VAR_1->device == 0x0525) && VAR_1->bus->self
     && (VAR_1->bus->self->vendor == 0x3388)
     && (VAR_1->bus->self->device == 0x0021)) {
  return 0;
 }

 return 2;
}
