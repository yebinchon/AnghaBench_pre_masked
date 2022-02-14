
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct pci_dev *VAR_0)
{
    struct net_device *VAR_1;
    struct usbdrv_private *VAR_2;

    if (!(VAR_1 = (struct net_device *) FUNC_0(VAR_0)))
        return;

    VAR_2 = VAR_1->ml_priv;
    FUNC_1(VAR_1);

    FUNC_2(VAR_1);
}
