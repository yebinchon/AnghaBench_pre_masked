
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {scalar_t__ total; int ctrl; scalar_t__ drvttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pci_dev *VAR_3, u16 VAR_4)
{
 if (!VAR_3 || !VAR_3->is_physfn || (VAR_4 > VAR_3->sriov->total))
  return -VAR_1;


 if (VAR_3->sriov->ctrl & VAR_2)
  return -VAR_0;
 else
  VAR_3->sriov->drvttl = VAR_4;

 return 0;
}
