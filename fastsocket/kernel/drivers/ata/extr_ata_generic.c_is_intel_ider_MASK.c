
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0)
{


 u32 VAR_1;
 u16 VAR_2;


 FUNC_0(VAR_0, 0xF8, &VAR_1);

 if (VAR_1 != 0)
  return 0;


 FUNC_1(VAR_0, 0x40, &VAR_2);
 if (VAR_2 != 0)
  return 0;



 FUNC_2(VAR_0, 0x40, 1);
 FUNC_1(VAR_0, 0x40, &VAR_2);
 if (VAR_2) {
  FUNC_2(VAR_0, 0x40, 0);
  return 0;
 }
 return 1;
}
