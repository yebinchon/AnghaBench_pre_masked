
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int revision; scalar_t__ vendor; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 struct pci_dev* VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_2)
{
 u8 VAR_3;
 struct pci_dev *VAR_4;






 if (VAR_2->revision <= 0x20) {
  FUNC_4(VAR_2, 0x53, &VAR_3);
  VAR_3 |= 0x03;
  FUNC_5(VAR_2, 0x53, VAR_3);
 } else {
  FUNC_4(VAR_2, 0x4a, &VAR_3);
  FUNC_5(VAR_2, 0x4a, VAR_3 | 0x20);
  FUNC_4(VAR_2, 0x4B, &VAR_3);
  if (VAR_2->revision < 0xC2)


   VAR_3 &= 0x7F;

  if (VAR_2->revision >= 0xc2)
   VAR_3 |= 0x01;
  FUNC_5(VAR_2, 0x4B, VAR_3 | 0x08);





  FUNC_4(VAR_2, 0x53, &VAR_3);
  if (VAR_2->revision >= 0xc7)
   VAR_3 |= 0x03;
  else
   VAR_3 |= 0x01;
  FUNC_5(VAR_2, 0x53, VAR_3);
 }
 VAR_4 = FUNC_3(0, FUNC_0(0,0));
 if (VAR_4 && VAR_4->vendor == VAR_0 && VAR_1) {


  FUNC_4(VAR_1, 0x79, &VAR_3);
  if (VAR_2->revision == 0xC2)
   FUNC_5(VAR_1, 0x79, VAR_3 | 0x04);
  else if (VAR_2->revision > 0xC2 && VAR_2->revision < 0xC5)
   FUNC_5(VAR_1, 0x79, VAR_3 | 0x02);
 }
 FUNC_2(VAR_4);
 FUNC_1(VAR_2);
}
