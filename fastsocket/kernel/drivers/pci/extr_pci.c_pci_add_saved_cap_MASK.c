
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int saved_cap_space; } ;
struct pci_cap_saved_state {int next; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
 struct pci_cap_saved_state *VAR_1)
{
 FUNC_0(&VAR_1->next, &VAR_0->saved_cap_space);
}
