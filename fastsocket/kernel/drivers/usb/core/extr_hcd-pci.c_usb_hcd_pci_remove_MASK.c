
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int rsrc_len; int rsrc_start; int regs; TYPE_1__* driver; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*) ;
 struct usb_hcd* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct usb_hcd*) ;
 int FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (struct usb_hcd*) ;

void FUNC_10(struct pci_dev *VAR_1)
{
 struct usb_hcd *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2)
  return;





 FUNC_1();
 FUNC_7(0, VAR_2);
 FUNC_2();

 FUNC_9(VAR_2);
 if (VAR_2->driver->flags & VAR_0) {
  FUNC_0(VAR_2->regs);
  FUNC_5(VAR_2->rsrc_start, VAR_2->rsrc_len);
 } else {
  FUNC_6(VAR_2->rsrc_start, VAR_2->rsrc_len);
 }
 FUNC_8(VAR_2);
 FUNC_3(VAR_1);
}
