
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dn*,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dn *VAR_3)
{
 unsigned int VAR_4 = 0;







 FUNC_1(VAR_3->node, &VAR_4);

 if (VAR_4)
  FUNC_3(VAR_3, 3);
 else
  FUNC_3(VAR_3, 1);





 FUNC_2 (250);




 FUNC_0 (VAR_3->node, VAR_0);

 FUNC_3 (VAR_3, 0);





 FUNC_2 (1800);
}
