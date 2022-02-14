
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* vpd; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* release ) (struct pci_dev*) ;} ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct pci_dev *VAR_0)
{
 if (VAR_0->vpd)
  VAR_0->vpd->ops->release(VAR_0);
}
