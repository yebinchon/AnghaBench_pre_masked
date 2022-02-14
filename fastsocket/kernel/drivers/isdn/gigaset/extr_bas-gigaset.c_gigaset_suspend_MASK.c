
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int bcs; int dev; TYPE_1__ hw; } ;
struct bas_cardstate {int basstate; int timer_ctrl; int urb_int_in; int urb_ctrl; int pending; int waitqueue; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct bas_cardstate*,int,int) ;
 struct cardstate* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_11, pm_message_t VAR_12)
{
 struct cardstate *VAR_13 = FUNC_5(VAR_11);
 struct bas_cardstate *VAR_14 = VAR_13->hw.bas;
 int VAR_15;


 if (FUNC_4(VAR_14, VAR_6, 0) & VAR_6) {
  FUNC_2(VAR_7, "already suspended");
  return 0;
 }


 VAR_15 = FUNC_7(VAR_14->waitqueue,
   !(VAR_14->basstate &
     (VAR_4|VAR_5|VAR_2|VAR_3)),
   VAR_0*VAR_10/10);
 FUNC_2(VAR_7, "wait_event_timeout() -> %d", VAR_15);


 if (VAR_14->basstate & (VAR_4|VAR_5|VAR_2|VAR_3)) {
  FUNC_1(VAR_13->dev, "cannot suspend:\n");
  if (VAR_14->basstate & VAR_4)
   FUNC_1(VAR_13->dev, " B channel 1 open\n");
  if (VAR_14->basstate & VAR_5)
   FUNC_1(VAR_13->dev, " B channel 2 open\n");
  if (VAR_14->basstate & VAR_2)
   FUNC_1(VAR_13->dev, " receiving AT reply\n");
  if (VAR_14->basstate & VAR_3)
   FUNC_1(VAR_13->dev, " sending AT command\n");
  FUNC_4(VAR_14, 0, VAR_6);
  return -VAR_8;
 }


 if (VAR_14->basstate & VAR_1) {
  FUNC_2(VAR_7, "closing AT channel");
  VAR_15 = FUNC_3(VAR_13->bcs, VAR_9, 0, 0);
  if (VAR_15) {
   FUNC_4(VAR_14, 0, VAR_6);
   return VAR_15;
  }
  FUNC_7(VAR_14->waitqueue, !VAR_14->pending,
       VAR_0*VAR_10/10);

 }


 FUNC_6(VAR_14->urb_ctrl);
 FUNC_6(VAR_14->urb_int_in);
 FUNC_0(&VAR_14->timer_ctrl);

 FUNC_2(VAR_7, "suspend complete");
 return 0;
}
