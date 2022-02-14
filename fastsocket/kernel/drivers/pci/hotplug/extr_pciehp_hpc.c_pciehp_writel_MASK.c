
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct controller {TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int FUNC_0 (struct pci_dev*,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct controller *VAR_0, int VAR_1, u32 VAR_2)
{
 struct pci_dev *VAR_3 = VAR_0->pcie->port;
 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
