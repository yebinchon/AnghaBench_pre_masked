
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_5)
{
 u8 VAR_6;
 FUNC_1(VAR_5, VAR_1, (VAR_0 / 4));
 FUNC_1(VAR_5, VAR_2, 0x78);
 FUNC_1(VAR_5, VAR_4, 0x08);
 FUNC_1(VAR_5, VAR_3, 0x08);

 FUNC_0(VAR_5, 0x51, &VAR_6);
 if (VAR_6 & 0x80)
  FUNC_1(VAR_5, 0x51, VAR_6 & ~0x80);
}
