
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; struct Port* driver_data; } ;
struct file {int f_flags; } ;
struct TYPE_9__ {int open_wait; struct tty_struct* tty; int count; } ;
struct TYPE_13__ {TYPE_2__ port; int xmit_cnt; } ;
struct Port {size_t RupNum; int State; int Config; int PortState; int ModemState; int portSem; int opens; scalar_t__ statsGather; TYPE_6__ gs; int InUse; scalar_t__ CookMode; int firstOpen; int Mapped; int WaitUntilBooted; TYPE_4__* HostP; } ;
struct TYPE_12__ {scalar_t__ RIOHalted; struct Port** RIOPortp; scalar_t__ RIOFailed; } ;
struct TYPE_11__ {int Flags; TYPE_3__* Mapping; } ;
struct TYPE_10__ {int Flags; } ;
struct TYPE_8__ {int c_cflag; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct Port*,int ) ;
 int FUNC_1 (struct Port*,int ,int,int ) ;
 int FUNC_2 (TYPE_5__*,struct Port*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_5__* VAR_25 ;
 int FUNC_6 (int ,char*,...) ;
 unsigned int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct tty_struct *VAR_26, struct file *VAR_27)
{
 unsigned int VAR_28;
 int VAR_29 = 250;
 struct Port *VAR_30;
 unsigned long VAR_31;
 int VAR_32 = 0;

 FUNC_3();




 VAR_26->driver_data = ((void*)0);

 VAR_28 = FUNC_7(VAR_26);

 if (VAR_25->RIOFailed) {
  FUNC_6(VAR_16, "System initialisation failed\n");
  FUNC_4();
  return -VAR_3;
 }

 FUNC_6(VAR_16, "port open SysPort %d (mapped:%d)\n", VAR_28, VAR_25->RIOPortp[VAR_28]->Mapped);







 if (VAR_28 >= VAR_20) {
  FUNC_6(VAR_16, "Illegal port number %d\n", VAR_28);
  FUNC_4();
  return -VAR_3;
 }




 VAR_30 = VAR_25->RIOPortp[VAR_28];
 FUNC_6(VAR_16, "PortP: %p\n", VAR_30);
 if (!VAR_30->Mapped) {




  FUNC_6(VAR_16, "port not mapped into system\n");
  FUNC_4();
  return -VAR_3;
 }

 VAR_26->driver_data = VAR_30;

 VAR_30->gs.port.tty = VAR_26;
 VAR_30->gs.port.count++;

 FUNC_6(VAR_16, "%d bytes in tx buffer\n", VAR_30->gs.xmit_cnt);

 VAR_32 = FUNC_5(&VAR_30->gs);
 if (VAR_32) {
  VAR_30->gs.port.count--;
  return -VAR_3;
 }




 if ((VAR_30->HostP->Flags & VAR_24) != VAR_9) {
  FUNC_6(VAR_16, "Host not running\n");
  FUNC_4();
  return -VAR_3;
 }
 FUNC_6(VAR_16, "Checking if RTA has booted... \n");
 while (!(VAR_30->HostP->Mapping[VAR_30->RupNum].Flags & VAR_23)) {
  if (!VAR_30->WaitUntilBooted) {
   FUNC_6(VAR_16, "RTA never booted\n");
   FUNC_4();
   return -VAR_3;
  }





  if (FUNC_0(VAR_30, VAR_4) == VAR_17) {
   FUNC_6(VAR_16, "RTA_wait_for_boot: EINTR in delay \n");
   FUNC_4();
   return -VAR_1;
  }
  if (VAR_29-- <= 0) {
   FUNC_6(VAR_16, "Waiting for RTA to boot timeout\n");
   FUNC_4();
   return -VAR_2;
  }
 }
 FUNC_6(VAR_16, "RTA has been booted\n");
 FUNC_8(&VAR_30->portSem, VAR_31);
 if (VAR_25->RIOHalted) {
  goto bombout;
 }






 while ((VAR_30->State & VAR_14) && !VAR_25->RIOHalted) {
  FUNC_6(VAR_16, "Waiting for RIO_CLOSING to go away\n");
  if (VAR_29-- <= 0) {
   FUNC_6(VAR_16, "Waiting for not idle closed broken by signal\n");
   FUNC_2(VAR_25, VAR_30, VAR_10);
   VAR_32 = -VAR_1;
   goto bombout;
  }
  FUNC_9(&VAR_30->portSem, VAR_31);
  if (FUNC_0(VAR_30, VAR_4) == VAR_17) {
   FUNC_8(&VAR_30->portSem, VAR_31);
   VAR_32 = -VAR_1;
   goto bombout;
  }
  FUNC_8(&VAR_30->portSem, VAR_31);
 }

 if (!VAR_30->Mapped) {
  FUNC_6(VAR_16, "Port unmapped while closing!\n");
  FUNC_9(&VAR_30->portSem, VAR_31);
  VAR_32 = -VAR_3;
  FUNC_4();
  return VAR_32;
 }

 if (VAR_25->RIOHalted) {
  goto bombout;
 }
 if (!(VAR_30->State & (VAR_18 | VAR_19))) {
  VAR_30->Config &= ~(VAR_15 | VAR_21);
 }

 if (!(VAR_30->firstOpen)) {
  FUNC_6(VAR_16, "First open for this port\n");


  VAR_30->firstOpen++;
  VAR_30->CookMode = 0;
  VAR_30->InUse = VAR_5;




  FUNC_9(&VAR_30->portSem, VAR_31);





  FUNC_1(VAR_30, VAR_12, 1, VAR_6);
  FUNC_8(&VAR_30->portSem, VAR_31);




  while (!(VAR_30->PortState & VAR_8) && !VAR_25->RIOHalted) {
   FUNC_6(VAR_16, "Waiting for PORT_ISOPEN-currently %x\n", VAR_30->PortState);
   FUNC_9(&VAR_30->portSem, VAR_31);
   if (FUNC_0(VAR_30, VAR_4) == VAR_17) {
    FUNC_6(VAR_16, "Waiting for open to finish broken by signal\n");
    FUNC_2(VAR_25, VAR_30, VAR_10);
    FUNC_4();
    return -VAR_1;
   }
   FUNC_8(&VAR_30->portSem, VAR_31);
  }

  if (VAR_25->RIOHalted) {
   VAR_32 = -VAR_2;
        bombout:

   FUNC_9(&VAR_30->portSem, VAR_31);
   return VAR_32;
  }
  FUNC_6(VAR_16, "PORT_ISOPEN found\n");
 }
 FUNC_6(VAR_16, "Modem - test for carrier\n");





 if ((VAR_30->gs.port.tty->termios->c_cflag & VAR_0) ||
   (VAR_30->ModemState & VAR_11)) {
  FUNC_6(VAR_16, "open(%d) Modem carr on\n", VAR_28);




  VAR_30->State |= VAR_13;
  FUNC_10(&VAR_30->gs.port.open_wait);
 } else {




  while (!(VAR_30->State & VAR_13) && !(VAR_27->f_flags & VAR_7) && !VAR_25->RIOHalted) {
    FUNC_6(VAR_16, "open(%d) sleeping for carr on\n", VAR_28);



   VAR_30->State |= VAR_22;
   FUNC_9(&VAR_30->portSem, VAR_31);
   if (FUNC_0(VAR_30, VAR_4) == VAR_17) {
    FUNC_8(&VAR_30->portSem, VAR_31);





    FUNC_6(VAR_16, "open(%d) sleeping for carr broken by signal\n", VAR_28);
    FUNC_2(VAR_25, VAR_30, VAR_10);



    VAR_30->State &= ~VAR_22;
    FUNC_9(&VAR_30->portSem, VAR_31);
    FUNC_4();
    return -VAR_1;
   }
   FUNC_8(&VAR_30->portSem, VAR_31);
  }
  VAR_30->State &= ~VAR_22;
 }
 if (VAR_25->RIOHalted)
  goto bombout;
 FUNC_6(VAR_16, "Setting RIO_MOPEN\n");
 VAR_30->State |= VAR_19;

 if (VAR_25->RIOHalted)
  goto bombout;

 FUNC_6(VAR_16, "high level open done\n");




 if (VAR_30->statsGather)
  VAR_30->opens++;

 FUNC_9(&VAR_30->portSem, VAR_31);
 FUNC_6(VAR_16, "Returning from open\n");
 FUNC_4();
 return 0;
}
