
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {scalar_t__ state; int rh_timer; } ;
struct oxu_hcd {int reclaim_ready; scalar_t__* reset_done; int lock; TYPE_1__* regs; int hcs_params; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int configured_flag; int command; int status; int * port_status; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int FUNC_1 (struct oxu_hcd*,char*,int) ;
 int FUNC_2 (struct oxu_hcd*,char*,int) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (struct oxu_hcd*) ;
 struct oxu_hcd* FUNC_5 (struct usb_hcd*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct oxu_hcd*,char*,...) ;
 int FUNC_10 (struct oxu_hcd*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct usb_hcd*) ;
 int FUNC_16 (struct usb_hcd*) ;
 int FUNC_17 (struct usb_hcd*) ;
 int FUNC_18 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_19(struct usb_hcd *VAR_14)
{
 struct oxu_hcd *VAR_15 = FUNC_5(VAR_14);
 u32 VAR_16, VAR_17 = 0;
 int VAR_18;

 FUNC_12(&VAR_15->lock);

 VAR_16 = FUNC_11(&VAR_15->regs->status);


 if (VAR_16 == ~(u32) 0) {
  FUNC_9(VAR_15, "device removed\n");
  goto dead;
 }


 VAR_16 &= VAR_2;
 if (!VAR_16 || FUNC_14(VAR_14->state == VAR_1)) {
  FUNC_13(&VAR_15->lock);
  return VAR_4;
 }


 FUNC_18(VAR_16, &VAR_15->regs->status);
 FUNC_11(&VAR_15->regs->command);
 VAR_18 = 0;
 if (FUNC_6((VAR_16 & (VAR_11|VAR_7)) != 0))
  VAR_18 = 1;


 if (VAR_16 & VAR_10) {
  VAR_15->reclaim_ready = 1;
  VAR_18 = 1;
 }


 if (VAR_16 & VAR_12) {
  unsigned VAR_19 = FUNC_0(VAR_15->hcs_params);
  VAR_17 = VAR_16;


  if (!(FUNC_11(&VAR_15->regs->command) & VAR_0))
   FUNC_17(VAR_14);

  while (VAR_19--) {
   int VAR_20 = FUNC_11(&VAR_15->regs->port_status[VAR_19]);

   if (VAR_20 & VAR_5)
    continue;
   if (!(VAR_20 & VAR_6)
     || VAR_15->reset_done[VAR_19] != 0)
    continue;





   VAR_15->reset_done[VAR_19] = VAR_13 + FUNC_8(20);
   FUNC_9(VAR_15, "port %d remote wakeup\n", VAR_19 + 1);
   FUNC_7(&VAR_14->rh_timer, VAR_15->reset_done[VAR_19]);
  }
 }


 if (FUNC_14((VAR_16 & VAR_8) != 0)) {

  VAR_16 = FUNC_11(&VAR_15->regs->status);
  FUNC_1(VAR_15, "fatal", FUNC_11(&VAR_15->regs->command));
  FUNC_2(VAR_15, "fatal", VAR_16);
  if (VAR_16 & VAR_9) {
   FUNC_10(VAR_15, "fatal error\n");
dead:
   FUNC_3(VAR_15);
   FUNC_18(0, &VAR_15->regs->configured_flag);
   FUNC_15(VAR_14);



   VAR_18 = 1;
  }
 }

 if (VAR_18)
  FUNC_4(VAR_15);
 FUNC_13(&VAR_15->lock);
 if (VAR_17 & VAR_12)
  FUNC_16(VAR_14);
 return VAR_3;
}
