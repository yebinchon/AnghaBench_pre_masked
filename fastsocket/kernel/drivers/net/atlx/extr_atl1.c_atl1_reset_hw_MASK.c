
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
struct atl1_hw {scalar_t__ hw_addr; struct atl1_adapter* back; } ;
struct atl1_adapter {struct pci_dev* pdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct atl1_adapter*) ;

__attribute__((used)) static s32 FUNC_8(struct atl1_hw *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->back->pdev;
 struct atl1_adapter *VAR_6 = VAR_4->back;
 u32 VAR_7;
 int VAR_8;
 FUNC_5(VAR_0, VAR_4->hw_addr + VAR_2);
 FUNC_3(VAR_4->hw_addr + VAR_2);

 FUNC_4(1, VAR_4->hw_addr + VAR_3);
 FUNC_2(VAR_4->hw_addr + VAR_3);


 FUNC_6(1);


 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_7 = FUNC_3(VAR_4->hw_addr + VAR_1);
  if (!VAR_7)
   break;

  FUNC_6(1);

  FUNC_0();
 }

 if (VAR_7) {
  if (FUNC_7(VAR_6))
   FUNC_1(&VAR_5->dev, "ICR = 0x%x\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
