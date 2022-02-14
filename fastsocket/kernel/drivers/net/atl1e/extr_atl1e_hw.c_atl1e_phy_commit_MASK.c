
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1e_hw {struct atl1e_adapter* adapter; } ;
struct atl1e_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int) ;

int FUNC_4(struct atl1e_hw *VAR_7)
{
 struct atl1e_adapter *VAR_8 = VAR_7->adapter;
 struct pci_dev *VAR_9 = VAR_8->pdev;
 int VAR_10;
 u16 VAR_11;

 VAR_11 = VAR_4 | VAR_3 | VAR_5;

 VAR_10 = FUNC_1(VAR_7, VAR_2, VAR_11);
 if (VAR_10) {
  u32 VAR_12;
  int VAR_13;



  for (VAR_13 = 0; VAR_13 < 25; VAR_13++) {
   FUNC_3(1);
   VAR_12 = FUNC_0(VAR_7, VAR_6);
   if (!(VAR_12 & (VAR_1 | VAR_0)))
    break;
  }

  if (0 != (VAR_12 & (VAR_1 | VAR_0))) {
   FUNC_2(&VAR_9->dev,
    "pcie linkdown at least for 25ms\n");
   return VAR_10;
  }

  FUNC_2(&VAR_9->dev, "pcie linkup after %d ms\n", VAR_13);
 }
 return 0;
}
