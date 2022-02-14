
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_12__ {int cstat; int dstat; int cpa; } ;
struct TYPE_13__ {TYPE_4__ cmd; } ;
struct irb {TYPE_5__ scsw; int * ecw; } ;
struct TYPE_9__ {int rx_errors; } ;
struct claw_privbk {struct chbk* channel; TYPE_1__ stats; struct claw_env* p_env; } ;
struct claw_env {int adapter_name; int host_name; } ;
struct TYPE_15__ {unsigned long data; int expires; void* function; } ;
struct chbk {int last_dstat; int claw_state; int tasklet; int flag_a; int IO_active; TYPE_6__* irb; TYPE_7__ timer; int flag; int wait; int devno; scalar_t__ ndev; struct ccw_device* cdev; } ;
struct ccw_device {int dev; } ;
struct TYPE_10__ {int stctl; int dstat; int cstat; } ;
struct TYPE_11__ {TYPE_2__ cmd; } ;
struct TYPE_14__ {int* ecw; TYPE_3__ scsw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct chbk*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (int ,struct net_device*) ;
 int FUNC_9 (struct chbk*) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (int ,void*) ;
 struct claw_privbk* FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int ,...) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (TYPE_7__*) ;
 int VAR_17 ;
 int FUNC_15 (TYPE_6__*,struct irb*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,void*) ;
 int VAR_18 ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct ccw_device *VAR_19,
 unsigned long VAR_20, struct irb *VAR_21)
{
        struct chbk *VAR_22 = ((void*)0);
        struct claw_privbk *VAR_23 = ((void*)0);
        struct net_device *VAR_24 = ((void*)0);
        struct claw_env *VAR_25;
        struct chbk *VAR_26=((void*)0);

 FUNC_0(4, VAR_18, "clawirq");

 VAR_23 = FUNC_11(&VAR_19->dev);
 if (!VAR_23) {
  FUNC_13(&VAR_19->dev, "An uninitialized CLAW device received an"
   " IRQ, c-%02x d-%02x\n",
   VAR_21->scsw.cmd.cstat, VAR_21->scsw.cmd.dstat);
  FUNC_0(2, VAR_18, "badirq");
                return;
        }


 if (VAR_23->channel[VAR_7].cdev == VAR_19)
  VAR_22 = &VAR_23->channel[VAR_7];
 else if (VAR_23->channel[VAR_15].cdev == VAR_19)
  VAR_22 = &VAR_23->channel[VAR_15];
 else {
  FUNC_13(&VAR_19->dev, "The device is not a CLAW device\n");
  FUNC_0(2, VAR_18, "badchan");
  return;
 }
 FUNC_1(4, VAR_18, "IRQCH=%d", VAR_22->flag);

 VAR_24 = (struct net_device *) (VAR_22->ndev);
        VAR_25=VAR_23->p_env;


 FUNC_15(VAR_22->irb, VAR_21, sizeof(struct irb));


 if (VAR_21->scsw.cmd.cstat && !(VAR_21->scsw.cmd.cstat & VAR_8)) {
  FUNC_12(&VAR_19->dev,
   "%s: subchannel check for device: %04x -"
   " Sch Stat %02x  Dev Stat %02x CPA - %04x\n",
                        VAR_24->name, VAR_22->devno,
   VAR_21->scsw.cmd.cstat, VAR_21->scsw.cmd.dstat,
   VAR_21->scsw.cmd.cpa);
  FUNC_0(2, VAR_18, "chanchk");

        }


 if (VAR_21->scsw.cmd.dstat & VAR_3)
                FUNC_3(VAR_22, VAR_21->ecw[0]);


 VAR_22->last_dstat = VAR_21->scsw.cmd.dstat;

        switch (VAR_22->claw_state) {
 case 128:
  if (!((VAR_22->irb->scsw.cmd.stctl & VAR_10) ||
  (VAR_22->irb->scsw.cmd.stctl == VAR_11) ||
  (VAR_22->irb->scsw.cmd.stctl ==
  (VAR_9 | VAR_11))))
   return;
  FUNC_18(&VAR_22->wait);
  FUNC_0(4, VAR_18, "stop");
  return;
 case 131:
  if (!((VAR_22->irb->scsw.cmd.stctl & VAR_10) ||
  (VAR_22->irb->scsw.cmd.stctl == VAR_11) ||
  (VAR_22->irb->scsw.cmd.stctl ==
  (VAR_9 | VAR_11)))) {
   FUNC_0(4, VAR_18, "haltio");
   return;
  }
  if (VAR_22->flag == VAR_1) {
   VAR_22->claw_state = 130;
   FUNC_18(&VAR_22->wait);
  } else if (VAR_22->flag == VAR_2) {
   VAR_22->claw_state = 129;

   FUNC_7(VAR_24, VAR_6);
   FUNC_6(VAR_24,
    VAR_12,
    0, 0, 0,
    VAR_25->host_name,
    VAR_25->adapter_name);
  } else {
   FUNC_13(&VAR_19->dev, "The CLAW device received"
    " an unexpected IRQ, "
    "c-%02x d-%02x\n",
    VAR_21->scsw.cmd.cstat,
    VAR_21->scsw.cmd.dstat);
   return;
   }
  FUNC_0(4, VAR_18, "haltio");
  return;
 case 130:
  FUNC_0(4, VAR_18, "ReadIRQ");
  if (VAR_22->irb->scsw.cmd.dstat & VAR_3) {
   FUNC_10(0, (void *)&VAR_22->IO_active);
   if ((VAR_22->irb->ecw[0] & 0x41) == 0x41 ||
       (VAR_22->irb->ecw[0] & 0x40) == 0x40 ||
       (VAR_22->irb->ecw[0]) == 0) {
    VAR_23->stats.rx_errors++;
    FUNC_12(&VAR_19->dev,
     "%s: Restart is required after remote "
     "side recovers \n",
     VAR_24->name);
   }
   FUNC_0(4, VAR_18, "notrdy");
   return;
  }
  if ((VAR_22->irb->scsw.cmd.cstat & VAR_8) &&
   (VAR_22->irb->scsw.cmd.dstat == 0)) {
   if (FUNC_17(VAR_0,
    (void *)&VAR_22->flag_a) == 0)
    FUNC_16(&VAR_22->tasklet);
   else
    FUNC_0(4, VAR_18, "PCINoBH");
   FUNC_0(4, VAR_18, "PCI_read");
   return;
  }
  if (!((VAR_22->irb->scsw.cmd.stctl & VAR_10) ||
   (VAR_22->irb->scsw.cmd.stctl == VAR_11) ||
   (VAR_22->irb->scsw.cmd.stctl ==
   (VAR_9 | VAR_11)))) {
   FUNC_0(4, VAR_18, "SPend_rd");
   return;
  }
  FUNC_10(0, (void *)&VAR_22->IO_active);
  FUNC_5(VAR_13, VAR_24);
  if (FUNC_17(VAR_0,
   (void *)&VAR_22->flag_a) == 0)
   FUNC_16(&VAR_22->tasklet);
  else
   FUNC_0(4, VAR_18, "RdBHAct");
  FUNC_0(4, VAR_18, "RdIRQXit");
  return;
 case 129:
  if (VAR_22->irb->scsw.cmd.dstat & VAR_3) {
   FUNC_12(&VAR_19->dev,
    "%s: Unit Check Occured in "
    "write channel\n", VAR_24->name);
   FUNC_10(0, (void *)&VAR_22->IO_active);
   if (VAR_22->irb->ecw[0] & 0x80) {
    FUNC_12(&VAR_19->dev,
     "%s: Resetting Event "
     "occurred:\n", VAR_24->name);
    FUNC_14(&VAR_22->timer);
    VAR_22->timer.function =
     (void *)VAR_16;
    VAR_22->timer.data = (unsigned long)VAR_22;
    VAR_22->timer.expires = VAR_17 + 10*VAR_5;
    FUNC_2(&VAR_22->timer);
    FUNC_12(&VAR_19->dev,
     "%s: write connection "
     "restarting\n", VAR_24->name);
   }
   FUNC_0(4, VAR_18, "rstrtwrt");
   return;
  }
  if (VAR_22->irb->scsw.cmd.dstat & VAR_4) {
   FUNC_10(0, (void *)&VAR_22->IO_active);
   FUNC_12(&VAR_19->dev,
    "%s: Unit Exception "
    "occurred in write channel\n",
    VAR_24->name);
  }
  if (!((VAR_22->irb->scsw.cmd.stctl & VAR_10) ||
  (VAR_22->irb->scsw.cmd.stctl == VAR_11) ||
  (VAR_22->irb->scsw.cmd.stctl ==
  (VAR_9 | VAR_11)))) {
   FUNC_0(4, VAR_18, "writeUE");
   return;
  }
  FUNC_10(0, (void *)&VAR_22->IO_active);
  if (FUNC_8(VAR_14, VAR_24) == 0) {
   FUNC_9(VAR_22);
   FUNC_5(VAR_14, VAR_24);
   FUNC_4(VAR_24);
  }
  VAR_26 = (struct chbk *)&VAR_23->channel[VAR_7];
  if (FUNC_17(VAR_0,
   (void *)&VAR_26->flag_a) == 0)
   FUNC_16(&VAR_26->tasklet);
  FUNC_0(4, VAR_18, "StWtExit");
  return;
 default:
  FUNC_13(&VAR_19->dev,
   "The CLAW device for %s received an unexpected IRQ\n",
    VAR_24->name);
  FUNC_0(2, VAR_18, "badIRQ");
  return;
        }

}
