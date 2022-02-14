
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* controller; } ;
struct usb_hcd {TYPE_2__ self; } ;
struct omap_usb_config {scalar_t__ rwc; scalar_t__ otg; } ;
struct ohci_hcd {TYPE_1__* regs; int hc_control; } ;
struct TYPE_6__ {struct omap_usb_config* platform_data; } ;
struct TYPE_4__ {int control; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5 (struct usb_hcd *VAR_2)
{
 struct omap_usb_config *VAR_3;
 struct ohci_hcd *VAR_4 = FUNC_1 (VAR_2);
 int VAR_5;

 if (!VAR_1)
  return 0;
 VAR_3 = VAR_2->self.controller->platform_data;
 if (VAR_3->otg || VAR_3->rwc) {
  VAR_4->hc_control = VAR_0;
  FUNC_4(VAR_0, &VAR_4->regs->control);
 }

 if ((VAR_5 = FUNC_2 (VAR_4)) < 0) {
  FUNC_0(VAR_2->self.controller, "can't start\n");
  FUNC_3 (VAR_2);
  return VAR_5;
 }
 return 0;
}
