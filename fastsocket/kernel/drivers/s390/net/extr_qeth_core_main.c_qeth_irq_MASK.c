
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_cmd_buffer {scalar_t__ state; int (* callback ) (struct qeth_channel*,struct qeth_cmd_buffer*) ;} ;
struct qeth_channel {scalar_t__ state; size_t buf_no; struct qeth_cmd_buffer* iob; struct ccw_device* ccwdev; int irq_pending; } ;
struct qeth_card {int wait_q; struct qeth_channel read; struct qeth_channel data; struct qeth_channel write; } ;
struct TYPE_8__ {scalar_t__ cons; } ;
struct TYPE_9__ {TYPE_3__ erw; } ;
struct TYPE_10__ {TYPE_4__ esw0; } ;
struct TYPE_6__ {int cstat; int dstat; int fctl; } ;
struct TYPE_7__ {TYPE_1__ cmd; } ;
struct irb {struct irb* ecw; TYPE_5__ esw; TYPE_2__ scsw; } ;
struct ccw_device {int dev; } ;
typedef int addr_t ;
typedef size_t __u8 ;


 scalar_t__ VAR_0 ;
 struct qeth_card* FUNC_0 (struct ccw_device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (int,char*,int ,int,int) ;
 int FUNC_2 (int ,int,char*) ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (struct ccw_device*,unsigned long,struct irb*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,char*,int ,int,int,struct irb*,int,int) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (struct ccw_device*,struct irb*) ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_card*) ;
 int FUNC_13 (struct qeth_channel*,struct qeth_cmd_buffer*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ccw_device *VAR_17, unsigned long VAR_18,
  struct irb *VAR_19)
{
 int VAR_20;
 int VAR_21, VAR_22;
 struct qeth_cmd_buffer *VAR_23;
 struct qeth_channel *VAR_24;
 struct qeth_card *VAR_25;
 struct qeth_cmd_buffer *VAR_26;
 __u8 VAR_27;

 FUNC_2(VAR_16, 5, "irq");

 if (FUNC_3(VAR_17, VAR_18, VAR_19))
  return;
 VAR_21 = VAR_19->scsw.cmd.cstat;
 VAR_22 = VAR_19->scsw.cmd.dstat;

 VAR_25 = FUNC_0(VAR_17);
 if (!VAR_25)
  return;

 if (VAR_25->read.ccwdev == VAR_17) {
  VAR_24 = &VAR_25->read;
  FUNC_2(VAR_16, 5, "read");
 } else if (VAR_25->write.ccwdev == VAR_17) {
  VAR_24 = &VAR_25->write;
  FUNC_2(VAR_16, 5, "write");
 } else {
  VAR_24 = &VAR_25->data;
  FUNC_2(VAR_16, 5, "data");
 }
 FUNC_5(&VAR_24->irq_pending, 0);

 if (VAR_19->scsw.cmd.fctl & (VAR_14))
  VAR_24->state = VAR_4;

 if (VAR_19->scsw.cmd.fctl & (VAR_15))
  VAR_24->state = VAR_2;


 if ((VAR_24 == &VAR_25->data) && (VAR_18 != 0) &&
     (VAR_18 != VAR_13))
  goto out;

 if (VAR_18 == VAR_10) {
  FUNC_2(VAR_16, 6, "clrchpar");

  VAR_18 = 0;
 }
 if (VAR_18 == VAR_12) {
  FUNC_2(VAR_16, 6, "hltchpar");

  VAR_18 = 0;
 }
 if ((VAR_22 & VAR_7) ||
     (VAR_22 & VAR_6) ||
     (VAR_21)) {
  if (VAR_19->esw.esw0.erw.cons) {
   FUNC_7(&VAR_24->ccwdev->dev,
    "The qeth device driver failed to recover "
    "an error on the device\n");
   FUNC_1(2, "%s sense data available. cstat "
    "0x%X dstat 0x%X\n",
    FUNC_6(&VAR_24->ccwdev->dev), VAR_21, VAR_22);
   FUNC_8(VAR_9, "qeth: irb ",
    VAR_8, 16, 1, VAR_19, 32, 1);
   FUNC_8(VAR_9, "qeth: sense data ",
    VAR_8, 16, 1, VAR_19->ecw, 32, 1);
  }
  if (VAR_18 == VAR_13) {
   VAR_24->state = VAR_1;
   goto out;
  }
  VAR_20 = FUNC_10(VAR_17, VAR_19);
  if (VAR_20) {
   FUNC_9(VAR_25);
   FUNC_12(VAR_25);
   goto out;
  }
 }

 if (VAR_18 == VAR_13) {
  VAR_24->state = VAR_3;
  goto out;
 }
 if (VAR_18) {
  VAR_23 = (struct qeth_cmd_buffer *) FUNC_4((addr_t)VAR_18);
  VAR_23->state = VAR_0;
 }
 if (VAR_24 == &VAR_25->data)
  return;
 if (VAR_24 == &VAR_25->read &&
     VAR_24->state == VAR_5)
  FUNC_11(VAR_25);

 VAR_26 = VAR_24->iob;
 VAR_27 = VAR_24->buf_no;
 while (VAR_26[VAR_27].state == VAR_0) {
  if (VAR_26[VAR_27].callback != ((void*)0))
   VAR_26[VAR_27].callback(VAR_24, VAR_26 + VAR_27);

  VAR_27 = (VAR_27 + 1) % VAR_11;
 }
 VAR_24->buf_no = VAR_27;
out:
 FUNC_14(&VAR_25->wait_q);
 return;
}
