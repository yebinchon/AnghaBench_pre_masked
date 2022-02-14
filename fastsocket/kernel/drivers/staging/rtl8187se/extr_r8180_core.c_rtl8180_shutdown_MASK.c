
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int FUNC_0 (struct pci_dev*) ;
 struct net_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3 (struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->netdev_ops->ndo_stop)
  VAR_1->netdev_ops->ndo_stop(VAR_1);
 FUNC_0(VAR_0);
}
