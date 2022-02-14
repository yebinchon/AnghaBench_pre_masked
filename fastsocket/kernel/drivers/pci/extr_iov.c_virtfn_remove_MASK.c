
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_sriov {TYPE_2__* dev; } ;
struct TYPE_6__ {int kobj; } ;
struct pci_dev {int bus; TYPE_3__ dev; struct pci_sriov* sriov; } ;
struct pci_bus {int dummy; } ;
struct TYPE_5__ {TYPE_1__* sriov; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 struct pci_bus* FUNC_6 (int ,int ) ;
 struct pci_dev* FUNC_7 (struct pci_bus*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];
 struct pci_bus *VAR_5;
 struct pci_dev *VAR_6;
 struct pci_sriov *VAR_7 = VAR_1->sriov;

 VAR_5 = FUNC_6(FUNC_5(VAR_1->bus), FUNC_11(VAR_1, VAR_2));
 if (!VAR_5)
  return;

 VAR_6 = FUNC_7(VAR_5, FUNC_12(VAR_1, VAR_2));
 if (!VAR_6)
  return;

 FUNC_4(VAR_6);

 if (VAR_3) {
  FUNC_1(&VAR_6->dev);
  FUNC_0(VAR_6);
 }

 FUNC_9(VAR_4, "virtfn%u", VAR_2);
 FUNC_10(&VAR_1->dev.kobj, VAR_4);
 FUNC_10(&VAR_6->dev.kobj, "physfn");

 FUNC_2(&VAR_7->dev->sriov->lock);
 FUNC_8(VAR_6);
 FUNC_13(VAR_1->bus, FUNC_11(VAR_1, VAR_2));
 FUNC_3(&VAR_7->dev->sriov->lock);

 FUNC_4(VAR_1);
}
