
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0)
{
 u8 VAR_1;
 u32 VAR_2;
 int VAR_3;

 for(VAR_3 = 0; VAR_3 < 0x5000; VAR_3++) {
  FUNC_3(50);
  FUNC_0(VAR_0, 0x5b, &VAR_1);
  if (VAR_1 & 0x80) {

   for(VAR_3 = 0; VAR_3 < 0x1000; VAR_3 ++) {
    FUNC_0(VAR_0, 0x5b, &VAR_1);

    if ((VAR_1 & 0x80) == 0)
     return 0;
   }

   FUNC_1(VAR_0, 0x5c, &VAR_2);
   FUNC_2(VAR_0, 0x5c, VAR_2 & ~ 0x100);
   return 1;
  }
 }

 return 0;
}
