
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* xhci_get_quirks_t ) (struct device*,struct xhci_hcd*) ;
typedef int u32 ;
struct xhci_hcd {int hcs_params1; int hcs_params2; int hcs_params3; int hcc_params; TYPE_2__* cap_regs; int hci_version; TYPE_2__* run_regs; TYPE_2__* op_regs; struct usb_hcd* main_hcd; } ;
struct TYPE_6__ {int no_stop_on_short; struct device* controller; TYPE_1__* root_hub; int sg_tablesize; } ;
struct usb_hcd {int has_tt; TYPE_3__ self; TYPE_2__* regs; int speed; scalar_t__ hcd_priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int hcc_params; int hc_capbase; int hcs_params3; int hcs_params2; int hcs_params1; int run_regs_off; } ;
struct TYPE_4__ {int speed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct device*,int ) ;
 struct xhci_hcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct xhci_hcd*) ;
 struct xhci_hcd* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (struct xhci_hcd*,char*) ;
 int FUNC_10 (struct xhci_hcd*) ;
 int FUNC_11 (struct usb_hcd*) ;
 int FUNC_12 (struct xhci_hcd*) ;
 int FUNC_13 (struct xhci_hcd*,int *) ;
 int FUNC_14 (struct xhci_hcd*) ;

int FUNC_15(struct usb_hcd *VAR_5, xhci_get_quirks_t VAR_6)
{
 struct xhci_hcd *VAR_7;
 struct device *VAR_8 = VAR_5->self.controller;
 int VAR_9;
 u32 VAR_10;


 VAR_5->self.sg_tablesize = ~0;

 VAR_5->self.no_stop_on_short = 1;

 if (FUNC_8(VAR_5)) {
  VAR_7 = FUNC_7(sizeof(struct xhci_hcd), VAR_1);
  if (!VAR_7)
   return -VAR_0;
  *((struct xhci_hcd **) VAR_5->hcd_priv) = VAR_7;
  VAR_7->main_hcd = VAR_5;



  VAR_5->speed = VAR_2;
  VAR_5->self.root_hub->speed = VAR_4;





  VAR_5->has_tt = 1;
 } else {



  VAR_7 = FUNC_5(VAR_5);
  VAR_10 = FUNC_13(VAR_7, &VAR_7->cap_regs->hcc_params);
  if (FUNC_1(VAR_10)) {
   FUNC_9(VAR_7, "Enabling 64-bit DMA addresses.\n");
   FUNC_4(VAR_5->self.controller, FUNC_0(64));
  } else {
   FUNC_4(VAR_5->self.controller, FUNC_0(32));
  }
  return 0;
 }

 VAR_7->cap_regs = VAR_5->regs;
 VAR_7->op_regs = VAR_5->regs +
  FUNC_2(FUNC_13(VAR_7, &VAR_7->cap_regs->hc_capbase));
 VAR_7->run_regs = VAR_5->regs +
  (FUNC_13(VAR_7, &VAR_7->cap_regs->run_regs_off) & VAR_3);

 VAR_7->hcs_params1 = FUNC_13(VAR_7, &VAR_7->cap_regs->hcs_params1);
 VAR_7->hcs_params2 = FUNC_13(VAR_7, &VAR_7->cap_regs->hcs_params2);
 VAR_7->hcs_params3 = FUNC_13(VAR_7, &VAR_7->cap_regs->hcs_params3);
 VAR_7->hcc_params = FUNC_13(VAR_7, &VAR_7->cap_regs->hc_capbase);
 VAR_7->hci_version = FUNC_3(VAR_7->hcc_params);
 VAR_7->hcc_params = FUNC_13(VAR_7, &VAR_7->cap_regs->hcc_params);
 FUNC_12(VAR_7);

 VAR_6(VAR_8, VAR_7);


 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9)
  goto error;

 FUNC_9(VAR_7, "Resetting HCD\n");

 VAR_9 = FUNC_14(VAR_7);
 if (VAR_9)
  goto error;
 FUNC_9(VAR_7, "Reset complete\n");

 VAR_10 = FUNC_13(VAR_7, &VAR_7->cap_regs->hcc_params);
 if (FUNC_1(VAR_10)) {
  FUNC_9(VAR_7, "Enabling 64-bit DMA addresses.\n");
  FUNC_4(VAR_5->self.controller, FUNC_0(64));
 } else {
  FUNC_4(VAR_5->self.controller, FUNC_0(32));
 }

 FUNC_9(VAR_7, "Calling HCD init\n");

 VAR_9 = FUNC_11(VAR_5);
 if (VAR_9)
  goto error;
 FUNC_9(VAR_7, "Called HCD init\n");
 return 0;
error:
 FUNC_6(VAR_7);
 return VAR_9;
}
