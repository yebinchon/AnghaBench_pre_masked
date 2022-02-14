
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; struct pci_dev* pdev; } ;
typedef TYPE_1__ vlsi_irda_dev_t ;
struct pci_dev {int dummy; } ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct pci_dev*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(vlsi_irda_dev_t *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;
 struct net_device *VAR_6 = FUNC_3(VAR_5);
 unsigned VAR_7 = VAR_6->base_addr;
 unsigned long VAR_8;

 FUNC_4(&VAR_4->lock,VAR_8);
 FUNC_1(0, VAR_7+VAR_2);
 FUNC_1(0, VAR_7+VAR_1);


 FUNC_0(0, VAR_7+VAR_3);
 FUNC_10();
 FUNC_0(VAR_0, VAR_7+VAR_3);
 FUNC_5(&VAR_4->lock,VAR_8);

 FUNC_9(VAR_4);
 FUNC_8(VAR_4);

 FUNC_6(VAR_7);
 FUNC_7(VAR_5);

 FUNC_2(VAR_5);

 return 0;
}
