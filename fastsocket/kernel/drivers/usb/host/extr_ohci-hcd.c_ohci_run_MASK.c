
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int controller; } ;
struct usb_hcd {int uses_new_polling; void* state; int flags; TYPE_2__ self; } ;
struct ohci_hcd {int fminterval; int hc_control; int flags; int * ed_to_check; scalar_t__ eds_scheduled; int unlink_watchdog; int lock; scalar_t__ next_statechange; TYPE_3__* regs; scalar_t__ hcca_dma; int hcca; } ;
struct ohci_hcca {int dummy; } ;
struct TYPE_4__ {int b; int status; int a; } ;
struct TYPE_6__ {int control; TYPE_1__ roothub; int intrenable; int intrstatus; int periodicstart; int fminterval; int hcca; int ed_bulkhead; int ed_controlhead; int cmdstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ohci_hcd*) ;
 scalar_t__ VAR_23 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ohci_hcd*,char*,...) ;
 int FUNC_7 (struct ohci_hcd*,int) ;
 int FUNC_8 (struct ohci_hcd*,char*,...) ;
 int FUNC_9 (struct ohci_hcd*,int *) ;
 struct usb_hcd* FUNC_10 (struct ohci_hcd*) ;
 int FUNC_11 (struct ohci_hcd*,int,int *) ;
 int FUNC_12 (struct ohci_hcd*) ;
 scalar_t__ FUNC_13 (struct ohci_hcd*) ;
 int FUNC_14 (struct ohci_hcd*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_20 (struct ohci_hcd *VAR_25)
{
 u32 VAR_26, VAR_27;
 int VAR_28 = VAR_25->fminterval == 0;
 struct usb_hcd *VAR_29 = FUNC_10(VAR_25);

 FUNC_2 (VAR_25);


 if (VAR_28) {

  VAR_27 = FUNC_9 (VAR_25, &VAR_25->regs->fminterval);
  VAR_25->fminterval = VAR_27 & 0x3fff;
  if (VAR_25->fminterval != VAR_1)
   FUNC_6 (VAR_25, "fminterval delta %d\n",
    VAR_25->fminterval - VAR_1);
  VAR_25->fminterval |= FUNC_0 (VAR_25->fminterval) << 16;

 }







 if ((VAR_25->hc_control & VAR_6) != 0)
  FUNC_1(VAR_29->self.controller, 1);

 switch (VAR_25->hc_control & VAR_5) {
 case 130:
  VAR_27 = 0;
  break;
 case 128:
 case 129:
  VAR_25->hc_control &= VAR_6;
  VAR_25->hc_control |= 129;
  VAR_27 = 10 ;
  break;

 default:
  VAR_25->hc_control &= VAR_6;
  VAR_25->hc_control |= VAR_13;
  VAR_27 = 50 ;
  break;
 }
 FUNC_11 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);

 (void) FUNC_9 (VAR_25, &VAR_25->regs->control);
 FUNC_5(VAR_27);

 FUNC_4 (VAR_25->hcca, 0, sizeof (struct ohci_hcca));


 FUNC_17 (&VAR_25->lock);

retry:

 FUNC_11 (VAR_25, VAR_7, &VAR_25->regs->cmdstatus);
 VAR_27 = 30;
 while ((FUNC_9 (VAR_25, &VAR_25->regs->cmdstatus) & VAR_7) != 0) {
  if (--VAR_27 == 0) {
   FUNC_18 (&VAR_25->lock);
   FUNC_8 (VAR_25, "USB HC reset timed out!\n");
   return -1;
  }
  FUNC_19 (1);
 }
 if (VAR_25->flags & VAR_11) {
  FUNC_11 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);

  (void) FUNC_9 (VAR_25, &VAR_25->regs->control);
 }



 FUNC_11 (VAR_25, 0, &VAR_25->regs->ed_controlhead);
 FUNC_11 (VAR_25, 0, &VAR_25->regs->ed_bulkhead);


 FUNC_11 (VAR_25, (u32) VAR_25->hcca_dma, &VAR_25->regs->hcca);

 FUNC_12 (VAR_25);




 if ((FUNC_9 (VAR_25, &VAR_25->regs->fminterval) & 0x3fff0000) == 0
   || !FUNC_9 (VAR_25, &VAR_25->regs->periodicstart)) {
  if (!(VAR_25->flags & VAR_11)) {
   VAR_25->flags |= VAR_11;
   FUNC_6 (VAR_25, "enabling initreset quirk\n");
   goto retry;
  }
  FUNC_18 (&VAR_25->lock);
  FUNC_8 (VAR_25, "init err (%08x %04x)\n",
   FUNC_9 (VAR_25, &VAR_25->regs->fminterval),
   FUNC_9 (VAR_25, &VAR_25->regs->periodicstart));
  return -VAR_0;
 }


 FUNC_15(VAR_2, &VAR_29->flags);
 VAR_29->uses_new_polling = 1;


 VAR_25->hc_control &= VAR_6;
 VAR_25->hc_control |= VAR_4 | 130;
 FUNC_11 (VAR_25, VAR_25->hc_control, &VAR_25->regs->control);
 VAR_29->state = VAR_3;


 FUNC_11 (VAR_25, VAR_20, &VAR_25->regs->roothub.status);


 VAR_26 = VAR_8;
 FUNC_11 (VAR_25, ~0, &VAR_25->regs->intrstatus);
 FUNC_11 (VAR_25, VAR_26, &VAR_25->regs->intrenable);


 VAR_27 = FUNC_14 (VAR_25);
 VAR_27 &= ~(VAR_18 | VAR_16);
 if (VAR_25->flags & VAR_12) {

  VAR_27 |= VAR_14;
  VAR_27 &= ~(VAR_17 | VAR_15);
  FUNC_11 (VAR_25, VAR_27, &VAR_25->regs->roothub.a);
 } else if ((VAR_25->flags & VAR_9) ||
   (VAR_25->flags & VAR_10)) {



  VAR_27 |= VAR_15;
  FUNC_11 (VAR_25, VAR_27, &VAR_25->regs->roothub.a);
 }
 FUNC_11 (VAR_25, VAR_21, &VAR_25->regs->roothub.status);
 FUNC_11 (VAR_25, (VAR_27 & VAR_15) ? 0 : VAR_19,
      &VAR_25->regs->roothub.b);

 (void) FUNC_9 (VAR_25, &VAR_25->regs->control);

 VAR_25->next_statechange = VAR_23 + VAR_22;
 FUNC_18 (&VAR_25->lock);


 FUNC_3 ((VAR_27 >> 23) & 0x1fe);
 VAR_29->state = VAR_3;

 if (FUNC_13(VAR_25)) {

  FUNC_16(&VAR_25->unlink_watchdog, VAR_24,
    (unsigned long) VAR_25);

  VAR_25->eds_scheduled = 0;
  VAR_25->ed_to_check = ((void*)0);
 }

 FUNC_7 (VAR_25, 1);

 return 0;
}
