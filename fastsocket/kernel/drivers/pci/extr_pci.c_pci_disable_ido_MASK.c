
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;

void FUNC_1(struct pci_dev *VAR_5, unsigned long VAR_6)
{
 u16 VAR_7 = 0;

 if (VAR_6 & VAR_3)
  VAR_7 |= VAR_4;
 if (VAR_6 & VAR_2)
  VAR_7 |= VAR_1;
 if (VAR_7)
  FUNC_0(VAR_5, VAR_0, VAR_7);
}
