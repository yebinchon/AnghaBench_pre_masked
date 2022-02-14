
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_0);

 if (!FUNC_1(VAR_2))
  goto out_pci_suspend;

 if (VAR_2->netdev_ops->ndo_stop)
  VAR_2->netdev_ops->ndo_stop(VAR_2);

 FUNC_0(VAR_2);

out_pci_suspend:
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 FUNC_6(VAR_0, FUNC_2(VAR_0, VAR_1));
 return 0;
}
