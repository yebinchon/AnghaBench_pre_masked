
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {long closing_wait; TYPE_1__ port; } ;
struct Port {int State; scalar_t__ InUse; scalar_t__ TxBufferIn; scalar_t__ TxBufferOut; int PortState; int Config; int portSem; scalar_t__ firstOpen; int closes; scalar_t__ statsGather; int PortNum; int ModemState; TYPE_2__ gs; } ;
struct TYPE_8__ {scalar_t__ RIOHalted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct Port*) ;
 scalar_t__ FUNC_1 (struct Port*,int) ;
 scalar_t__ FUNC_2 (struct Port*,int) ;
 int FUNC_3 (TYPE_3__*,struct Port*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,struct Port*,int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long VAR_19 ;
 TYPE_3__* VAR_20 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

int FUNC_9(void *VAR_21)
{
 struct Port *VAR_22 = VAR_21;
 int VAR_23 = 0;
 int VAR_24 = -1;
 int VAR_25 = -1;

 unsigned long VAR_26;
 struct tty_struct *VAR_27;
 unsigned long VAR_28;
 int VAR_29 = 0;

 FUNC_5(VAR_12, "port close SysPort %d\n", VAR_22->PortNum);


 FUNC_5(VAR_12, "Port is at address %p\n", VAR_22);

 VAR_27 = VAR_22->gs.port.tty;
 FUNC_5(VAR_12, "TTY is at address %p\n", VAR_27);

 if (VAR_22->gs.closing_wait)
  VAR_26 = VAR_19 + VAR_22->gs.closing_wait;
 else
  VAR_26 = VAR_19 + VAR_3;

 FUNC_6(&VAR_22->portSem, VAR_28);





 VAR_22->State |= VAR_10;

 if ((VAR_22->State & VAR_13)) {
  FUNC_5(VAR_12, "Close on deleted RTA\n");
  VAR_23 = 1;
 }

 if (VAR_20->RIOHalted) {
  FUNC_0(VAR_22);
  VAR_29 = -VAR_1;
  goto close_end;
 }

 FUNC_5(VAR_12, "Clear bits\n");



 VAR_22->State &= ~VAR_17;
 VAR_22->State &= ~VAR_9;
 VAR_22->ModemState &= ~VAR_8;







 if ((VAR_22->State & (VAR_16 | VAR_17))) {




  FUNC_5(VAR_12, "Channel %d still open !\n", VAR_22->PortNum);
  VAR_22->State &= ~VAR_10;
  if (VAR_22->firstOpen)
   VAR_22->firstOpen--;
  FUNC_7(&VAR_22->portSem, VAR_28);
  return -VAR_1;
 }

 FUNC_5(VAR_12, "Closing down - everything must go!\n");

 VAR_22->State &= ~VAR_14;






 FUNC_5(VAR_12, "Timeout 1 starts\n");

 if (!VAR_23)
  while ((VAR_22->InUse != VAR_4) && !VAR_20->RIOHalted && (VAR_22->TxBufferIn != VAR_22->TxBufferOut)) {
   if (VAR_25-- <= 0) {
    VAR_29 = -VAR_0;
    FUNC_5(VAR_12, "Waiting for not idle closed broken by signal\n");
    FUNC_3(VAR_20, VAR_22, VAR_7);
    goto close_end;
   }
   FUNC_5(VAR_12, "Calling timeout to flush in closing\n");
   FUNC_7(&VAR_22->portSem, VAR_28);
   if (FUNC_2(VAR_22, VAR_2 * 10) == VAR_15) {
    FUNC_5(VAR_12, "RTA EINTR in delay \n");
    VAR_29 = -VAR_0;
    FUNC_6(&VAR_22->portSem, VAR_28);
    goto close_end;
   }
   FUNC_6(&VAR_22->portSem, VAR_28);
  }

 VAR_22->TxBufferIn = VAR_22->TxBufferOut = 0;
 VAR_25 = 0xff;

 VAR_22->InUse = 0;
 if ((VAR_22->State & (VAR_16 | VAR_17))) {




  FUNC_5(VAR_12, "Channel %d re-open!\n", VAR_22->PortNum);
  VAR_22->State &= ~VAR_10;
  FUNC_7(&VAR_22->portSem, VAR_28);
  if (VAR_22->firstOpen)
   VAR_22->firstOpen--;
  return -VAR_1;
 }

 if (VAR_20->RIOHalted) {
  FUNC_0(VAR_22);
  goto close_end;
 }


 FUNC_7(&VAR_22->portSem, VAR_28);

 if (FUNC_4(VAR_20, VAR_22, VAR_6, 1, 0) == VAR_15) {
  FUNC_3(VAR_20, VAR_22, VAR_7);
  FUNC_6(&VAR_22->portSem, VAR_28);
  goto close_end;
 }

 if (!VAR_23)
  while (VAR_24 && (VAR_22->PortState & VAR_5)) {
   VAR_24--;
   if (FUNC_8(VAR_19, VAR_26)) {
    FUNC_5(VAR_12, "Run out of tries - force the bugger shut!\n");
    FUNC_3(VAR_20, VAR_22, VAR_7);
    break;
   }
   FUNC_5(VAR_12, "Close: PortState:ISOPEN is %d\n", VAR_22->PortState & VAR_5);

   if (VAR_20->RIOHalted) {
    FUNC_0(VAR_22);
    FUNC_6(&VAR_22->portSem, VAR_28);
    goto close_end;
   }
   if (FUNC_1(VAR_22, VAR_2) == VAR_15) {
    FUNC_5(VAR_12, "RTA EINTR in delay \n");
    FUNC_3(VAR_20, VAR_22, VAR_7);
    break;
   }
  }
 FUNC_6(&VAR_22->portSem, VAR_28);
 FUNC_5(VAR_12, "Close: try was %d on completion\n", VAR_24);







 VAR_22->Config &= ~(VAR_11 | VAR_18);




 if (VAR_22->statsGather)
  VAR_22->closes++;

close_end:





 VAR_22->State &= ~(VAR_10 | VAR_13);
 if (VAR_22->firstOpen)
  VAR_22->firstOpen--;
 FUNC_7(&VAR_22->portSem, VAR_28);
 FUNC_5(VAR_12, "Return from close\n");
 return VAR_29;
}
