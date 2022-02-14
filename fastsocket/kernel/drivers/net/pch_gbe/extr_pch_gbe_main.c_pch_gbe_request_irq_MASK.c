
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_adapter {int have_msi; TYPE_1__* pdev; struct net_device* netdev; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *,int,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct pch_gbe_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;
 int VAR_5;

 VAR_5 = VAR_0;
 VAR_2->have_msi = 0;
 VAR_4 = FUNC_0(VAR_2->pdev);
 FUNC_1("call pci_enable_msi\n");
 if (VAR_4) {
  FUNC_1("call pci_enable_msi - Error: %d\n", VAR_4);
 } else {
  VAR_5 = 0;
  VAR_2->have_msi = 1;
 }
 VAR_4 = FUNC_3(VAR_2->pdev->irq, &VAR_1,
     VAR_5, VAR_3->name, VAR_3);
 if (VAR_4)
  FUNC_2("Unable to allocate interrupt Error: %d\n", VAR_4);
 FUNC_1("adapter->have_msi : %d  flags : 0x%04x  return : 0x%04x\n",
   VAR_2->have_msi, VAR_5, VAR_4);
 return VAR_4;
}
