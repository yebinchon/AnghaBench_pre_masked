
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {int nr_virtfn; } ;



int FUNC_0(struct pci_dev *VAR_0)
{
 if (!VAR_0 || !VAR_0->is_physfn)
  return 0;
 else
  return VAR_0->sriov->nr_virtfn;
}
