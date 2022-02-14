
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct usb_hcd*) ;} ;


 struct usb_hcd* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct usb_hcd*) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 struct usb_hcd *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 if (VAR_1->driver->shutdown)
  VAR_1->driver->shutdown(VAR_1);
}
