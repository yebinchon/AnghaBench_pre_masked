
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_rx; int rx_ring; struct pci_dev* pdev; } ;
typedef TYPE_1__ vlsi_irda_dev_t ;
typedef int u8 ;
struct pci_dev {int dummy; } ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_9(vlsi_irda_dev_t *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct net_device *VAR_8 = FUNC_3(VAR_7);
 unsigned VAR_9 = VAR_8->base_addr;
 u8 VAR_10;



 FUNC_4(VAR_7, VAR_3, &VAR_10);
 VAR_10 &= ~(VAR_0 | VAR_1);
 FUNC_6(VAR_7, VAR_3, VAR_10);



 FUNC_6(VAR_7, VAR_4, VAR_2);
 FUNC_5(VAR_7);

 if (FUNC_8(VAR_7) < 0) {
  FUNC_2(VAR_7);
  return -1;
 }

 FUNC_7(VAR_6->rx_ring);

 FUNC_0(&VAR_6->last_rx);

 FUNC_1(0, VAR_9+VAR_5);

 return 0;
}
