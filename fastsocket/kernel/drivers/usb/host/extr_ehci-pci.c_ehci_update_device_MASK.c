
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct usb_device {int portnum; int devnum; TYPE_1__* parent; } ;
struct ehci_hcd {scalar_t__ has_lpm; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (struct ehci_hcd*,int ) ;
 int FUNC_1 (struct ehci_hcd*,int ,int ) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_0, struct usb_device *VAR_1)
{
 struct ehci_hcd *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;

 if (!VAR_1->parent)
  VAR_3 = -1;

 if (VAR_2->has_lpm && !VAR_1->parent->parent) {
  VAR_3 = FUNC_1(VAR_2, VAR_1->devnum, VAR_1->portnum);
  if (!VAR_3)
   VAR_3 = FUNC_0(VAR_2, VAR_1->portnum);
 }
 return VAR_3;
}
