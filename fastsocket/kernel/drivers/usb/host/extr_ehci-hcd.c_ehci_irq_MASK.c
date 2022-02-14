
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {scalar_t__ state; int rh_timer; } ;
struct TYPE_3__ {int reclaim; int error; int normal; } ;
struct ehci_hcd {scalar_t__* reset_done; int lock; TYPE_2__* regs; int suspended_ports; scalar_t__ has_ppcd; int hcs_params; TYPE_1__ stats; scalar_t__ reclaim; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int configured_flag; int * port_status; int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_2 (struct ehci_hcd*,char*,int) ;
 int FUNC_3 (struct ehci_hcd*,char*,int) ;
 int FUNC_4 (struct ehci_hcd*,char*,...) ;
 int FUNC_5 (struct ehci_hcd*,char*) ;
 int FUNC_6 (struct ehci_hcd*) ;
 int FUNC_7 (struct ehci_hcd*,int *) ;
 int FUNC_8 (struct ehci_hcd*) ;
 int FUNC_9 (struct ehci_hcd*) ;
 int FUNC_10 (struct ehci_hcd*,int,int *) ;
 int FUNC_11 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_12 (struct usb_hcd*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (unsigned int,int *) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct usb_hcd*) ;
 int FUNC_21 (struct usb_hcd*) ;
 int FUNC_22 (struct usb_hcd*) ;

__attribute__((used)) static irqreturn_t FUNC_23 (struct usb_hcd *VAR_16)
{
 struct ehci_hcd *VAR_17 = FUNC_12 (VAR_16);
 u32 VAR_18, VAR_19, VAR_20 = 0, VAR_21;
 int VAR_22;

 FUNC_16 (&VAR_17->lock);

 VAR_18 = FUNC_7(VAR_17, &VAR_17->regs->status);


 if (VAR_18 == ~(u32) 0) {
  FUNC_4 (VAR_17, "device removed\n");
  goto dead;
 }


 VAR_19 = VAR_18 & VAR_3;
 if (!VAR_19 || FUNC_19(VAR_16->state == VAR_2)) {
  FUNC_17(&VAR_17->lock);
  return VAR_5;
 }


 FUNC_10(VAR_17, VAR_19, &VAR_17->regs->status);
 VAR_21 = FUNC_7(VAR_17, &VAR_17->regs->command);
 VAR_22 = 0;
 if (FUNC_13 ((VAR_18 & (VAR_13|VAR_10)) != 0)) {
  if (FUNC_13 ((VAR_18 & VAR_10) == 0))
   FUNC_0 (VAR_17->stats.normal);
  else
   FUNC_0 (VAR_17->stats.error);
  VAR_22 = 1;
 }


 if (VAR_18 & VAR_12) {

  if (VAR_21 & VAR_0) {
   FUNC_10(VAR_17, VAR_21 & ~VAR_0,
     &VAR_17->regs->command);
   FUNC_4(VAR_17, "IAA with IAAD still set?\n");
  }
  if (VAR_17->reclaim) {
   FUNC_0(VAR_17->stats.reclaim);
   FUNC_11(VAR_17);
  } else
   FUNC_4(VAR_17, "IAA with nothing to reclaim?\n");
 }


 if (VAR_18 & VAR_14) {
  unsigned VAR_23 = FUNC_1 (VAR_17->hcs_params);
  u32 VAR_24 = 0;


  VAR_20 = VAR_18;


  if (!(VAR_21 & VAR_1))
   FUNC_22(VAR_16);


  if (VAR_17->has_ppcd)
   VAR_24 = VAR_18 >> 16;

  while (VAR_23--) {
   int VAR_25;


   if (VAR_17->has_ppcd && !(VAR_24 & (1 << VAR_23)))
    continue;
   VAR_25 = FUNC_7(VAR_17,
      &VAR_17->regs->port_status[VAR_23]);

   if (VAR_25 & VAR_6)
    continue;
   if (!(FUNC_18(VAR_23, &VAR_17->suspended_ports) &&
     ((VAR_25 & VAR_8) ||
      !(VAR_25 & VAR_9)) &&
     (VAR_25 & VAR_7) &&
     VAR_17->reset_done[VAR_23] == 0))
    continue;






   VAR_17->reset_done[VAR_23] = VAR_15 + FUNC_15(25);
   FUNC_4 (VAR_17, "port %d remote wakeup\n", VAR_23 + 1);
   FUNC_14(&VAR_16->rh_timer, VAR_17->reset_done[VAR_23]);
  }
 }


 if (FUNC_19 ((VAR_18 & VAR_11) != 0)) {
  FUNC_5(VAR_17, "fatal error\n");
  FUNC_2(VAR_17, "fatal", VAR_21);
  FUNC_3(VAR_17, "fatal", VAR_18);
  FUNC_6(VAR_17);
dead:
  FUNC_8(VAR_17);
  FUNC_10(VAR_17, 0, &VAR_17->regs->configured_flag);
  FUNC_20(VAR_16);



  VAR_22 = 1;
 }

 if (VAR_22)
  FUNC_9 (VAR_17);
 FUNC_17 (&VAR_17->lock);
 if (VAR_20)
  FUNC_21(VAR_16);
 return VAR_4;
}
