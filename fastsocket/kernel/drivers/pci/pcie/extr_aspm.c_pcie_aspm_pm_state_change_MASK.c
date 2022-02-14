
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int root; } ;
struct pci_dev {struct pcie_link_state* link_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pcie_link_state*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct pci_dev *VAR_5)
{
 struct pcie_link_state *VAR_6 = VAR_5->link_state;

 if (VAR_2 || !FUNC_3(VAR_5) || !VAR_6)
  return;
 if ((FUNC_4(VAR_5) != VAR_1) &&
     (FUNC_4(VAR_5) != VAR_0))
  return;




 FUNC_0(&VAR_4);
 FUNC_1(&VAR_3);
 FUNC_6(VAR_6->root);
 FUNC_5(VAR_6);
 FUNC_2(&VAR_3);
 FUNC_7(&VAR_4);
}
