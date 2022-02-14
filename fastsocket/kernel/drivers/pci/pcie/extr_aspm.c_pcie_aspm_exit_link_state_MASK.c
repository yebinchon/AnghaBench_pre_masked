
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcie_link_state {int link; int sibling; struct pcie_link_state* parent; struct pcie_link_state* root; } ;
struct pci_dev {struct pcie_link_state* link_state; TYPE_2__* subordinate; int bus_list; TYPE_1__* bus; } ;
struct TYPE_4__ {int devices; } ;
struct TYPE_3__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcie_link_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pcie_link_state*,int ) ;
 int FUNC_9 (struct pcie_link_state*) ;
 int FUNC_10 (struct pcie_link_state*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct pci_dev *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->bus->self;
 struct pcie_link_state *VAR_8, *VAR_9, *VAR_10;

 if ((VAR_3 && !VAR_2) || !FUNC_6(VAR_6) ||
     !VAR_7 || !VAR_7->link_state)
  return;
 if ((FUNC_7(VAR_7) != VAR_1) &&
     (FUNC_7(VAR_7) != VAR_0))
  return;

 FUNC_0(&VAR_5);
 FUNC_4(&VAR_4);




 if (!FUNC_3(&VAR_6->bus_list, &VAR_7->subordinate->devices))
  goto out;

 VAR_8 = VAR_7->link_state;
 VAR_9 = VAR_8->root;
 VAR_10 = VAR_8->parent;


 FUNC_8(VAR_8, 0);
 FUNC_2(&VAR_8->sibling);
 FUNC_2(&VAR_8->link);

 FUNC_1(VAR_8);


 if (VAR_10) {
  FUNC_10(VAR_9);
  FUNC_9(VAR_10);
 }
out:
 FUNC_5(&VAR_4);
 FUNC_11(&VAR_5);
}
