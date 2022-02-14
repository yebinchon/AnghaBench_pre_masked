
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_3(struct pci_dev *VAR_6)
{
 int VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_7 + VAR_4, &VAR_8);
  VAR_8 &= ~VAR_5;
  FUNC_2(VAR_6, VAR_7 + VAR_4, VAR_8);
 }
 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_7 + VAR_2, &VAR_8);
  VAR_8 &= ~VAR_3;
  FUNC_2(VAR_6, VAR_7 + VAR_2, VAR_8);
 }
}
