
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 unsigned long FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(struct pci_dev *VAR_2, unsigned long *VAR_3,
    int VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;


 if (FUNC_0(VAR_2, VAR_1) < 0) {
  FUNC_4
      ("comedi%d: Failed to enable PCI device and request regions\n",
       VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_2, 1);
 VAR_8 = FUNC_2(VAR_2, 1);

 FUNC_4("comedi%d: local config registers at address 0x%4lx [0x%4lx]\n",
        VAR_4, VAR_7, VAR_8);


 VAR_5 = FUNC_3(VAR_2, 2);
 VAR_6 = FUNC_1(VAR_2, 2) - VAR_5 + 1;

 FUNC_4("comedi%d: 6208 registers at address 0x%4lx [0x%4lx]\n",
        VAR_4, VAR_5, VAR_6);

 *VAR_3 = VAR_5;





 return 0;
}
