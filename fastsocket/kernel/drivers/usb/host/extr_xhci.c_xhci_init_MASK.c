
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int hci_version; int quirks; int lock; } ;
struct usb_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*) ;
 scalar_t__ FUNC_1 () ;
 struct xhci_hcd* FUNC_2 (struct usb_hcd*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xhci_hcd*,char*) ;
 int FUNC_5 (struct xhci_hcd*,int ) ;

int FUNC_6(struct usb_hcd *VAR_4)
{
 struct xhci_hcd *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0;

 FUNC_4(VAR_5, "xhci_init\n");
 FUNC_3(&VAR_5->lock);
 if (VAR_5->hci_version == 0x95 && VAR_3) {
  FUNC_4(VAR_5, "QUIRK: Not clearing Link TRB chain bits.\n");
  VAR_5->quirks |= VAR_2;
 } else {
  FUNC_4(VAR_5, "xHCI doesn't need link TRB QUIRK\n");
 }
 VAR_6 = FUNC_5(VAR_5, VAR_0);
 FUNC_4(VAR_5, "Finished xhci_init\n");


 if (FUNC_1()) {
  VAR_5->quirks |= VAR_1;
  FUNC_0(VAR_5);
 }

 return VAR_6;
}
