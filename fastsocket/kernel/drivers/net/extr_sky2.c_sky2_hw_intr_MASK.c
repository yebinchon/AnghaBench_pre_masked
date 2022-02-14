
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sky2_hw {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sky2_hw*,int,int) ;
 int FUNC_3 (struct sky2_hw*,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int) ;
 int FUNC_5 (struct sky2_hw*,scalar_t__) ;
 int FUNC_6 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_7 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct sky2_hw *VAR_16)
{
 struct pci_dev *VAR_17 = VAR_16->pdev;
 u32 VAR_18 = FUNC_5(VAR_16, VAR_1);
 u32 VAR_19 = FUNC_5(VAR_16, VAR_0);

 VAR_18 &= VAR_19;

 if (VAR_18 & VAR_15)
  FUNC_7(VAR_16, VAR_3, VAR_4);

 if (VAR_18 & (VAR_13 | VAR_12)) {
  u16 VAR_20;

  FUNC_7(VAR_16, VAR_2, VAR_9);
  VAR_20 = FUNC_3(VAR_16, VAR_6);
  if (FUNC_1())
   FUNC_0(&VAR_17->dev, "PCI hardware error (0x%x)\n",
           VAR_20);

  FUNC_4(VAR_16, VAR_6,
          VAR_20 | VAR_7);
  FUNC_7(VAR_16, VAR_2, VAR_8);
 }

 if (VAR_18 & VAR_14) {

  u32 VAR_21;

  FUNC_7(VAR_16, VAR_2, VAR_9);
  VAR_21 = FUNC_5(VAR_16, VAR_10 + VAR_5);
  FUNC_6(VAR_16, VAR_10 + VAR_5,
        0xfffffffful);
  if (FUNC_1())
   FUNC_0(&VAR_17->dev, "PCI Express error (0x%x)\n", VAR_21);

  FUNC_5(VAR_16, VAR_10 + VAR_5);
  FUNC_7(VAR_16, VAR_2, VAR_8);
 }

 if (VAR_18 & VAR_11)
  FUNC_2(VAR_16, 0, VAR_18);
 VAR_18 >>= 8;
 if (VAR_18 & VAR_11)
  FUNC_2(VAR_16, 1, VAR_18);
}
