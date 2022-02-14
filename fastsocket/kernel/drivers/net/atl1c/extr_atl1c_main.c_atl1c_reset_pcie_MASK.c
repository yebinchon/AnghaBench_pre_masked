
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct atl1c_hw {TYPE_1__* adapter; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct atl1c_hw*) ;
 int FUNC_3 (struct atl1c_hw*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct atl1c_hw *VAR_20, u32 VAR_21)
{
 u32 VAR_22;
 u32 VAR_23;
 struct pci_dev *VAR_24 = VAR_20->adapter->pdev;
 int VAR_25;

 FUNC_0(VAR_20, VAR_2, &VAR_23);
 VAR_23 &= ~VAR_3;
 VAR_23 |= (VAR_6 | VAR_5 |
  VAR_4);
 FUNC_1(VAR_20, VAR_2, VAR_23);




 FUNC_5(VAR_24, VAR_8, 0);
 FUNC_5(VAR_24, VAR_7, 0);

 FUNC_0(VAR_20, VAR_19, &VAR_22);
 FUNC_1(VAR_20, VAR_19, 0);




 VAR_25 = FUNC_6(VAR_24, VAR_17);
 FUNC_7(VAR_24, VAR_25 + VAR_9, &VAR_22);
 VAR_22 &= ~(VAR_10 | VAR_11);
 FUNC_8(VAR_24, VAR_25 + VAR_9, VAR_22);

 FUNC_9(VAR_24, VAR_12,
   VAR_15 |
   VAR_14 |
   VAR_13 |
   VAR_16);

 FUNC_0(VAR_20, VAR_18, &VAR_22);
 VAR_22 &= ~VAR_1;
 FUNC_1(VAR_20, VAR_18, VAR_22);

 FUNC_3(VAR_20);
 if (VAR_21 & VAR_0)
  FUNC_2(VAR_20);

 FUNC_4(5);
}
