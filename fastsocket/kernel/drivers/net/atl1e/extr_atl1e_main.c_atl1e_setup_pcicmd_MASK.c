
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_6)
{
 u16 VAR_7;

 FUNC_1(VAR_6, VAR_0, &VAR_7);
 VAR_7 &= ~(VAR_1 | VAR_2);
 VAR_7 |= (VAR_4 | VAR_3);
 FUNC_3(VAR_6, VAR_0, VAR_7);






 FUNC_2(VAR_6, VAR_5, 0);
 FUNC_0(1);
}
