
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_sriov {int nr_virtfn; int cap; int ctrl; scalar_t__ link; scalar_t__ pos; } ;
struct TYPE_2__ {int kobj; } ;
struct pci_dev {scalar_t__ devfn; TYPE_1__ dev; struct pci_sriov* sriov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_4)
{
 int VAR_5;
 struct pci_sriov *VAR_6 = VAR_4->sriov;

 if (!VAR_6->nr_virtfn)
  return;

 if (VAR_6->cap & VAR_0)
  FUNC_3(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_6->nr_virtfn; VAR_5++)
  FUNC_6(VAR_4, VAR_5, 0);

 VAR_6->ctrl &= ~(VAR_3 | VAR_2);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_6->pos + VAR_1, VAR_6->ctrl);
 FUNC_4(1);
 FUNC_1(VAR_4);

 if (VAR_6->link != VAR_4->devfn)
  FUNC_5(&VAR_4->dev.kobj, "dep_link");

 VAR_6->nr_virtfn = 0;
}
