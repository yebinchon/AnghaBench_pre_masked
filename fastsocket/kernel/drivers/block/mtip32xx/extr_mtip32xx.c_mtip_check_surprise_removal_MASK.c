
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;

__attribute__((used)) static bool FUNC_1(struct pci_dev *VAR_0)
{
 u16 VAR_1 = 0;


 FUNC_0(VAR_0, 0x00, &VAR_1);
 if (VAR_1 == 0xFFFF)
  return 1;

 return 0;
}
