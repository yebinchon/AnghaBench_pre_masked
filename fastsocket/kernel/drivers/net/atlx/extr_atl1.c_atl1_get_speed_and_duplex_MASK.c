
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1_hw {struct atl1_adapter* back; } ;
struct atl1_adapter {struct pci_dev* pdev; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct atl1_hw*,int ,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct atl1_adapter*) ;

__attribute__((used)) static s32 FUNC_3(struct atl1_hw *VAR_11, u16 *VAR_12, u16 *VAR_13)
{
 struct pci_dev *VAR_14 = VAR_11->back->pdev;
 struct atl1_adapter *VAR_15 = VAR_11->back;
 s32 VAR_16;
 u16 VAR_17;


 VAR_16 = FUNC_0(VAR_11, VAR_4, &VAR_17);
 if (VAR_16)
  return VAR_16;

 if (!(VAR_17 & VAR_6))
  return VAR_0;

 switch (VAR_17 & VAR_7) {
 case 130:
  *VAR_12 = VAR_10;
  break;
 case 129:
  *VAR_12 = VAR_9;
  break;
 case 128:
  *VAR_12 = VAR_8;
  break;
 default:
  if (FUNC_2(VAR_15))
   FUNC_1(&VAR_14->dev, "error getting speed\n");
  return VAR_1;
  break;
 }
 if (VAR_17 & VAR_5)
  *VAR_13 = VAR_2;
 else
  *VAR_13 = VAR_3;

 return 0;
}
