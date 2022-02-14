
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct atl1_hw {int phy_configured; struct atl1_adapter* back; } ;
struct atl1_adapter {struct pci_dev* pdev; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct atl1_hw*) ;
 scalar_t__ FUNC_1 (struct atl1_hw*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct atl1_adapter*) ;

__attribute__((used)) static s32 FUNC_4(struct atl1_hw *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->back->pdev;
 struct atl1_adapter *VAR_2 = VAR_0->back;
 s32 VAR_3;







 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  if (FUNC_3(VAR_2))
   FUNC_2(&VAR_1->dev,
    "error setting up autonegotiation\n");
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  if (FUNC_3(VAR_2))
   FUNC_2(&VAR_1->dev, "error resetting phy\n");
  return VAR_3;
 }
 VAR_0->phy_configured = 1;
 return VAR_3;
}
