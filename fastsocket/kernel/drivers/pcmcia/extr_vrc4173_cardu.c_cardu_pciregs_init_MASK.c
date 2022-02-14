
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


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
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_20)
{
 u32 VAR_21;
 u16 VAR_22;
 u8 VAR_23;

 FUNC_4(VAR_20, 0x1c, 0x10000000);
 FUNC_4(VAR_20, 0x20, 0x17fff000);
 FUNC_4(VAR_20, 0x2c, 0);
 FUNC_4(VAR_20, 0x30, 0xfffc);

 FUNC_2(VAR_20, VAR_2, &VAR_22);
 VAR_22 &= ~VAR_8;
 FUNC_5(VAR_20, VAR_2, VAR_22);

 FUNC_1(VAR_20, VAR_17, &VAR_21);
 VAR_21 &= ~(VAR_1|VAR_12|VAR_4|VAR_16|VAR_10);
 VAR_21 |= (VAR_5|VAR_0);
 FUNC_4(VAR_20, VAR_17, VAR_21);

 FUNC_0(VAR_20, VAR_6, &VAR_23);
 VAR_23 &= ~(VAR_19|VAR_14|VAR_11|VAR_9);
 VAR_23 |= (VAR_15|VAR_7);
 FUNC_3(VAR_20, VAR_6, VAR_23);

 FUNC_3(VAR_20, VAR_3, VAR_18);

 FUNC_3(VAR_20, VAR_13, 0);
}
