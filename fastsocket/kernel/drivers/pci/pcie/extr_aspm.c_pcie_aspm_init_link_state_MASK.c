
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcie_link_state {int dummy; } ;
struct pci_dev {TYPE_2__* subordinate; TYPE_1__* bus; scalar_t__ link_state; } ;
struct TYPE_4__ {int devices; } ;
struct TYPE_3__ {scalar_t__ self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pcie_link_state* FUNC_0 (struct pci_dev*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pcie_link_state*,int) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pcie_link_state*,int) ;
 int FUNC_10 (struct pcie_link_state*) ;
 int FUNC_11 (struct pcie_link_state*,int ) ;
 int FUNC_12 (struct pcie_link_state*) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct pci_dev *VAR_9)
{
 struct pcie_link_state *VAR_10;
 int VAR_11 = !!FUNC_8(VAR_9);

 if (!VAR_7)
  return;

 if (!FUNC_5(VAR_9) || VAR_9->link_state)
  return;
 if (FUNC_6(VAR_9) != VAR_1 &&
     FUNC_6(VAR_9) != VAR_0)
  return;

 if (VAR_4 && !VAR_3)
  return;


 if (FUNC_6(VAR_9) == VAR_1 &&
     VAR_9->bus->self)
  return;

 FUNC_1(&VAR_8);
 if (FUNC_2(&VAR_9->subordinate->devices))
  goto out;

 FUNC_3(&VAR_5);
 VAR_10 = FUNC_0(VAR_9);
 if (!VAR_10)
  goto unlock;





 FUNC_7(VAR_10, VAR_11);


 FUNC_9(VAR_10, VAR_11);
 if (VAR_6 != VAR_2 || VAR_3) {
  FUNC_10(VAR_10);
  FUNC_11(VAR_10, FUNC_12(VAR_10));
 }

unlock:
 FUNC_4(&VAR_5);
out:
 FUNC_13(&VAR_8);
}
