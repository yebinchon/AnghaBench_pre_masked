
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct pci_dev* pci_dev; } ;
struct pci_dev {scalar_t__ subsystem_vendor; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pci_dev;

 if ((VAR_2->subsystem_vendor != VAR_0) ||
     (VAR_2->subsystem_device != 0xe000))
  return;

 FUNC_0(VAR_1, 0x1f, 0x0001);
 FUNC_0(VAR_1, 0x10, 0xf01b);
 FUNC_0(VAR_1, 0x1f, 0x0000);
}
