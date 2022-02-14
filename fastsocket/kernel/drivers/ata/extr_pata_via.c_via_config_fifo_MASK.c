
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4;


 FUNC_0(VAR_2, 0x40 , &VAR_4);
 VAR_4 &= 3;

 if (VAR_3 & VAR_1) {
  static const u8 VAR_5[4] = {0x00, 0x60, 0x00, 0x20};
  u8 VAR_6;

  FUNC_0(VAR_2, 0x43, &VAR_6);


  if (VAR_3 & VAR_0)
   VAR_6 &= 0x7F;
  else
   VAR_6 &= 0x9f;

  VAR_6 |= VAR_5[VAR_4];
  FUNC_1(VAR_2, 0x43, VAR_6);
 }
}
