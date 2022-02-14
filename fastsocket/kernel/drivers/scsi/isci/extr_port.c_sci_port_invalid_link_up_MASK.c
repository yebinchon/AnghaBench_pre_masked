
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_port {struct isci_host* owning_controller; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int invalid_phy_mask; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct isci_port *VAR_0, struct isci_phy *VAR_1)
{
 struct isci_host *VAR_2 = VAR_0->owning_controller;






 if ((VAR_2->invalid_phy_mask & (1 << VAR_1->phy_index)) == 0) {
  VAR_2->invalid_phy_mask |= 1 << VAR_1->phy_index;
  FUNC_0(&VAR_2->pdev->dev, "Invalid link up!\n");
 }
}
