
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev_flags; int vendor; struct pci_dev* physfn; scalar_t__ is_virtfn; TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {scalar_t__ pos; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_dev* FUNC_0 (int ,unsigned short,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,unsigned short*) ;

int FUNC_2(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3;
 unsigned int VAR_4 = 0;
 unsigned short VAR_5;


 if (!VAR_2->is_physfn)
  return 0;





 FUNC_1(VAR_2, VAR_2->sriov->pos + VAR_1, &VAR_5);


 VAR_3 = FUNC_0(VAR_2->vendor, VAR_5, ((void*)0));
 while (VAR_3) {




  if (VAR_3->is_virtfn && (VAR_3->physfn == VAR_2) &&
      (VAR_3->dev_flags & VAR_0))
   VAR_4++;

  VAR_3 = FUNC_0(VAR_2->vendor, VAR_5, VAR_3);
 }

 return VAR_4;
}
