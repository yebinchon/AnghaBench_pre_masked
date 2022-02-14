
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int features; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1, struct rtl8169_private *VAR_2)
{
 if (VAR_2->features & VAR_0) {
  FUNC_0(VAR_1);
  VAR_2->features &= ~VAR_0;
 }
}
