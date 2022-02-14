
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {TYPE_1__* self; } ;
struct TYPE_2__ {scalar_t__ ari_enabled; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_bus *VAR_0)
{
 return VAR_0->self && VAR_0->self->ari_enabled;
}
