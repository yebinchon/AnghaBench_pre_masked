
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int unchar ;
struct TYPE_12__ {scalar_t__ phase; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__ SCp; } ;
typedef int irqreturn_t ;
struct TYPE_11__ {TYPE_5__* icmb; } ;
struct TYPE_17__ {TYPE_3__* sh; scalar_t__ iobase; int int_counter; TYPE_1__ mb; } ;
struct TYPE_16__ {int status; scalar_t__ phase; } ;
struct TYPE_15__ {int status; scalar_t__ scbptr; } ;
struct TYPE_14__ {int op; int vue; int status; struct scsi_cmnd* SCpnt; } ;
struct TYPE_13__ {int host_lock; } ;
typedef TYPE_4__ Scb ;
typedef TYPE_5__ Mailbox ;
typedef TYPE_6__ IcbAny ;
typedef TYPE_7__ Adapter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (TYPE_7__*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 Adapter *VAR_10 = (Adapter *) VAR_9;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 Scb *VAR_17;
 IcbAny *VAR_18;
 struct scsi_cmnd *VAR_19;
 Mailbox *VAR_20 = VAR_10->mb.icmb;
 unsigned long VAR_21;

 FUNC_6(VAR_10->sh->host_lock, VAR_21);
 VAR_10->int_counter++;

 FUNC_0("wd7000_intr: irq = %d, host = 0x%06lx\n", VAR_8, (long) VAR_10);

 VAR_11 = FUNC_2(VAR_10->iobase + VAR_0);

 FUNC_0("wd7000_intr: intr stat = 0x%02x\n", VAR_11);

 if (!(FUNC_2(VAR_10->iobase + VAR_1) & VAR_4)) {
  FUNC_0("wd7000_intr: phantom interrupt...\n");
  goto ack;
 }

 if (!(VAR_11 & VAR_6))
  goto ack;


 if (!(VAR_11 & VAR_3)) {
  FUNC_0("wd7000_intr: free outgoing mailbox\n");





  goto ack;
 }


 VAR_12 = VAR_11 & VAR_7;
 VAR_14 = VAR_20[VAR_12].status;
 if (VAR_14 & 0x80) {
  FUNC_0("wd7000_intr: unsolicited interrupt 0x%02x\n", VAR_14);
  goto ack;
 }


 VAR_17 = FUNC_3(FUNC_5((unchar *) VAR_20[VAR_12].scbptr));
 VAR_20[VAR_12].status = 0;
 if (VAR_17->op & VAR_2) {
  VAR_18 = (IcbAny *) VAR_17;
  VAR_18->status = VAR_14;
  VAR_18->phase = 0;
  goto ack;
 }

 VAR_19 = VAR_17->SCpnt;
 if (--(VAR_19->SCp.phase) <= 0) {
  VAR_15 = VAR_17->vue | (VAR_14 << 8);
  VAR_16 = VAR_17->status;
  VAR_13 = FUNC_4(VAR_15, VAR_16);
  VAR_19->result = VAR_13;

  FUNC_1(VAR_17);

  VAR_19->scsi_done(VAR_19);
 }

 ack:
 FUNC_0("wd7000_intr: return from interrupt handler\n");
 FUNC_9(VAR_10);

 FUNC_7(VAR_10->sh->host_lock, VAR_21);
 return VAR_5;
}
