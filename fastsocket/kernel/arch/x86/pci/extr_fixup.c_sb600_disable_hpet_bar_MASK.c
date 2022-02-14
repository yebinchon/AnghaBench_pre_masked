
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 u8 VAR_1;
 FUNC_2(VAR_0, 0x08, &VAR_1);

 if (VAR_1 < 0x2F) {
  FUNC_1(0x55, 0xCD6);
  VAR_1 = FUNC_0(0xCD7);


  FUNC_1(0x55, 0xCD6);
  FUNC_1(VAR_1 | 0x80, 0xCD7);
 }
}
