
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ no_d1d2; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {unsigned int no_d1d2; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_0)
{
 unsigned int VAR_1 = 0;

 if (VAR_0->bus->self)
  VAR_1 = VAR_0->bus->self->no_d1d2;
 return (VAR_0->no_d1d2 || VAR_1);

}
