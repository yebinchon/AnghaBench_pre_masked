
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcie_link_state {int sibling; struct pcie_link_state* root; struct pcie_link_state* parent; int children; int link; struct pci_dev* pdev; } ;
struct pci_dev {struct pcie_link_state* link_state; TYPE_3__* bus; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct TYPE_5__ {TYPE_1__* self; } ;
struct TYPE_4__ {struct pcie_link_state* link_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pcie_link_state*) ;
 struct pcie_link_state* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static struct pcie_link_state *FUNC_5(struct pci_dev *VAR_3)
{
 struct pcie_link_state *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->sibling);
 FUNC_0(&VAR_4->children);
 FUNC_0(&VAR_4->link);
 VAR_4->pdev = VAR_3;
 if (FUNC_4(VAR_3) == VAR_1) {
  struct pcie_link_state *VAR_5;
  VAR_5 = VAR_3->bus->parent->self->link_state;
  if (!VAR_5) {
   FUNC_1(VAR_4);
   return ((void*)0);
  }
  VAR_4->parent = VAR_5;
  FUNC_3(&VAR_4->link, &VAR_5->children);
 }

 if (!VAR_4->parent)
  VAR_4->root = VAR_4;
 else
  VAR_4->root = VAR_4->parent->root;

 FUNC_3(&VAR_4->sibling, &VAR_2);
 VAR_3->link_state = VAR_4;
 return VAR_4;
}
