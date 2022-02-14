
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_8)
{

 if (VAR_8->vendor != VAR_7 ||
   VAR_8->device != VAR_5)
   return;


 FUNC_0(VAR_8, 0x5E, 0x01);


 FUNC_0(VAR_8, 0x50, 0x00);
 FUNC_2(VAR_8, VAR_0,
         VAR_4 | VAR_1 |
         VAR_3 | VAR_2);
 FUNC_2(VAR_8, 0x40, 0xA0F3);

 FUNC_1(VAR_8,0x4C, 0x02040204);
 FUNC_0(VAR_8, 0x42, 0x36);
 FUNC_0(VAR_8, VAR_6, 0x20);
}
