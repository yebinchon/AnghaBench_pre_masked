
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct controller {TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_3(struct controller *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pcie->port;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_6)
  return;
 FUNC_1(VAR_4, VAR_6 + VAR_1, &VAR_5);
 if (!(VAR_5 & VAR_0))
  return;
 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_6 + VAR_1, VAR_5);
}
