
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {scalar_t__ ari_enabled; } ;



__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_0)
{
 return VAR_0->bus->self && VAR_0->bus->self->ari_enabled;
}
