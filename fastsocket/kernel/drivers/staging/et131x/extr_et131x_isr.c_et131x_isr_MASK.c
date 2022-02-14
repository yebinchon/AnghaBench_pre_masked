
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_11__ {int InterruptStatus; } ;
struct TYPE_8__ {scalar_t__ UnfinishedReceives; } ;
struct TYPE_7__ {TYPE_6__* CurrSendHead; } ;
struct et131x_adapter {scalar_t__ FlowControl; int task; TYPE_5__ Stats; TYPE_4__* regs; TYPE_2__ RxRing; TYPE_1__ TxRing; } ;
typedef int irqreturn_t ;
struct TYPE_12__ {int PacketStaleCount; } ;
struct TYPE_9__ {int watchdog_timer; int int_status; } ;
struct TYPE_10__ {TYPE_3__ global; } ;
typedef TYPE_6__* PMP_TCB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 struct et131x_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 bool VAR_9 = 1;
 struct net_device *VAR_10 = (struct net_device *)VAR_8;
 struct et131x_adapter *VAR_11 = ((void*)0);
 u32 VAR_12;

 if (!FUNC_4(VAR_10)) {
  VAR_9 = 0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10);






 FUNC_1(VAR_11);




 VAR_12 = FUNC_5(&VAR_11->regs->global.int_status);

 if (VAR_11->FlowControl == VAR_6 ||
     VAR_11->FlowControl == VAR_0) {
  VAR_12 &= ~VAR_4;
 } else {
  VAR_12 &= ~VAR_5;
 }


 if (!VAR_12) {
  VAR_9 = 0;
  FUNC_2(VAR_11);
  goto out;
 }



 if (VAR_12 & VAR_3) {
  PMP_TCB VAR_13 = VAR_11->TxRing.CurrSendHead;

  if (VAR_13)
   if (++VAR_13->PacketStaleCount > 1)
    VAR_12 |= VAR_2;

  if (VAR_11->RxRing.UnfinishedReceives)
   VAR_12 |= VAR_1;
  else if (VAR_13 == ((void*)0))
   FUNC_7(0, &VAR_11->regs->global.watchdog_timer);

  VAR_12 &= ~VAR_3;
 }

 if (VAR_12 == 0) {





  FUNC_2(VAR_11);
  goto out;
 }





 VAR_11->Stats.InterruptStatus = VAR_12;





 FUNC_6(&VAR_11->task);
out:
 return FUNC_0(VAR_9);
}
