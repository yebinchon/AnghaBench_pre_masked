
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dn*) ;
 size_t FUNC_1 (struct pci_dn*,scalar_t__*,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (struct pci_dn*) ;
 int FUNC_3 (struct pci_dn*,int ) ;
 int FUNC_4 (struct pci_dn*,int,scalar_t__*,size_t) ;

void FUNC_5(struct pci_dn *VAR_3, int VAR_4)
{
 size_t VAR_5 = 0;
 VAR_2[0] = 0;

 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_4(VAR_3, VAR_4, VAR_2, VAR_5);
}
