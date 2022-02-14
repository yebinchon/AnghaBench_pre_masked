
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1_hw {int media_type; scalar_t__ hw_addr; struct atl1_adapter* back; } ;
struct atl1_adapter {struct pci_dev* pdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct atl1_hw*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct atl1_adapter*) ;

__attribute__((used)) static s32 FUNC_6(struct atl1_hw *VAR_11)
{
 struct pci_dev *VAR_12 = VAR_11->back->pdev;
 struct atl1_adapter *VAR_13 = VAR_11->back;
 s32 VAR_14;
 u16 VAR_15;

 if (VAR_11->media_type == VAR_3 ||
     VAR_11->media_type == VAR_2)
  VAR_15 = VAR_7 | VAR_5;
 else {
  switch (VAR_11->media_type) {
  case 130:
   VAR_15 =
       VAR_6 | VAR_9 |
       VAR_7;
   break;
  case 129:
   VAR_15 = VAR_9 | VAR_7;
   break;
  case 128:
   VAR_15 =
       VAR_6 | VAR_8 | VAR_7;
   break;
  default:

   VAR_15 = VAR_8 | VAR_7;
   break;
  }
 }

 VAR_14 = FUNC_0(VAR_11, VAR_4, VAR_15);
 if (VAR_14) {
  u32 VAR_16;
  int VAR_17;

  if (FUNC_5(VAR_13))
   FUNC_1(&VAR_12->dev, "pcie phy link down\n");

  for (VAR_17 = 0; VAR_17 < 25; VAR_17++) {
   FUNC_4(1);
   VAR_16 = FUNC_3(VAR_11->hw_addr + VAR_10);
   if (!(VAR_16 & (VAR_1 | VAR_0)))
    break;
  }

  if ((VAR_16 & (VAR_1 | VAR_0)) != 0) {
   if (FUNC_5(VAR_13))
    FUNC_2(&VAR_12->dev,
     "pcie link down at least 25ms\n");
   return VAR_14;
  }
 }
 return 0;
}
