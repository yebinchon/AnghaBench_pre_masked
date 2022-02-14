
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct cp_private {scalar_t__ wol_enabled; int regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct cp_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10 (struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_5(VAR_1);
 struct cp_private *VAR_3 = FUNC_2(VAR_2);

 FUNC_9(VAR_2);
 FUNC_1(VAR_3->regs);
 if (VAR_3->wol_enabled)
  FUNC_8 (VAR_1, VAR_0);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(VAR_1, ((void*)0));
 FUNC_0(VAR_2);
}
