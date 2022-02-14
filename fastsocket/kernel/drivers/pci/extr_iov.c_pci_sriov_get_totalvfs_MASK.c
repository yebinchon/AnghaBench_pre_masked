
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {int drvttl; int total; } ;


 int VAR_0 ;

int FUNC_0(struct pci_dev *VAR_1)
{
 if (!VAR_1 || !VAR_1->is_physfn)
  return -VAR_0;

 if (VAR_1->sriov->drvttl)
  return VAR_1->sriov->drvttl;
 else
  return VAR_1->sriov->total;
}
