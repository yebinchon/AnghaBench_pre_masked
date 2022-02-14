
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; } ;
struct TYPE_2__ {int lock; struct pci_dev* dev; int nr_virtfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 FUNC_0(VAR_0->sriov->nr_virtfn);

 if (VAR_0 != VAR_0->sriov->dev)
  FUNC_3(VAR_0->sriov->dev);

 FUNC_2(&VAR_0->sriov->lock);

 FUNC_1(VAR_0->sriov);
 VAR_0->sriov = ((void*)0);
}
