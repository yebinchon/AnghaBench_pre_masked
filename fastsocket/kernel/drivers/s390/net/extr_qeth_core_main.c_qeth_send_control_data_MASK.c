
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qeth_reply {int (* callback ) (struct qeth_card*,struct qeth_reply*,unsigned long) ;int rc; int received; TYPE_3__* card; int list; int wait_q; scalar_t__ seqno; void* param; } ;
struct TYPE_8__ {scalar_t__ command; scalar_t__ prot_version; } ;
struct qeth_ipa_cmd {TYPE_2__ hdr; } ;
struct qeth_cmd_buffer {int channel; scalar_t__ data; } ;
struct TYPE_10__ {int buf_no; int irq_pending; TYPE_5__* ccwdev; int ccw; } ;
struct TYPE_7__ {int ipa; } ;
struct qeth_card {scalar_t__ state; TYPE_4__ write; int wait_q; int lock; int cmd_waiter_list; TYPE_1__ seqno; scalar_t__ read_or_write_problem; } ;
typedef int addr_t ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 (int,char*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int,char*,int) ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_5__*,int *,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *) ;
 unsigned long VAR_14 ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 struct qeth_reply* FUNC_16 (struct qeth_card*) ;
 int FUNC_17 (struct qeth_card*,int,struct qeth_cmd_buffer*) ;
 int FUNC_18 (struct qeth_reply*) ;
 int FUNC_19 (int ,struct qeth_cmd_buffer*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 scalar_t__ FUNC_22 (unsigned long,unsigned long) ;
 int FUNC_23 (int ,int ,unsigned long) ;
 int FUNC_24 (int *) ;

int FUNC_25(struct qeth_card *VAR_15, int VAR_16,
  struct qeth_cmd_buffer *VAR_17,
  int (*VAR_18)(struct qeth_card *, struct qeth_reply *,
   unsigned long),
  void *VAR_19)
{
 int VAR_20;
 unsigned long VAR_21;
 struct qeth_reply *VAR_22 = ((void*)0);
 unsigned long VAR_23, VAR_24;
 struct qeth_ipa_cmd *VAR_25;

 FUNC_3(VAR_13, 2, "sendctl");

 if (VAR_15->read_or_write_problem) {
  FUNC_19(VAR_17->channel, VAR_17);
  return -VAR_2;
 }
 VAR_22 = FUNC_16(VAR_15);
 if (!VAR_22) {
  return -VAR_3;
 }
 VAR_22->callback = VAR_18;
 VAR_22->param = VAR_19;
 if (VAR_15->state == VAR_0)
  VAR_22->seqno = VAR_9;
 else
  VAR_22->seqno = VAR_15->seqno.ipa++;
 FUNC_13(&VAR_22->wait_q);
 FUNC_20(&VAR_15->lock, VAR_21);
 FUNC_14(&VAR_22->list, &VAR_15->cmd_waiter_list);
 FUNC_21(&VAR_15->lock, VAR_21);
 FUNC_1(VAR_1, 2, VAR_17->data, VAR_8);

 while (FUNC_5(&VAR_15->write.irq_pending, 0, 1)) ;
 FUNC_17(VAR_15, VAR_16, VAR_17);

 if (FUNC_0(VAR_17->data))
  VAR_24 = VAR_10;
 else
  VAR_24 = VAR_12;
 VAR_23 = VAR_14 + VAR_24;

 FUNC_3(VAR_13, 6, "noirqpnd");
 FUNC_20(FUNC_12(VAR_15->write.ccwdev), VAR_21);
 VAR_20 = FUNC_9(VAR_15->write.ccwdev, &VAR_15->write.ccw,
         (addr_t) VAR_17, 0, 0);
 FUNC_21(FUNC_12(VAR_15->write.ccwdev), VAR_21);
 if (VAR_20) {
  FUNC_2(2, "%s qeth_send_control_data: "
   "ccw_device_start rc = %i\n",
   FUNC_11(&VAR_15->write.ccwdev->dev), VAR_20);
  FUNC_4(VAR_13, 2, " err%d", VAR_20);
  FUNC_20(&VAR_15->lock, VAR_21);
  FUNC_15(&VAR_22->list);
  FUNC_18(VAR_22);
  FUNC_21(&VAR_15->lock, VAR_21);
  FUNC_19(VAR_17->channel, VAR_17);
  FUNC_8(&VAR_15->write.irq_pending, 0);
  FUNC_24(&VAR_15->wait_q);
  return VAR_20;
 }



 VAR_25 = (struct qeth_ipa_cmd *)(VAR_17->data+VAR_6);
 if ((VAR_25->hdr.command == VAR_5) &&
     (VAR_25->hdr.prot_version == VAR_11)) {
  if (!FUNC_23(VAR_22->wait_q,
      FUNC_7(&VAR_22->received), VAR_24))
   goto time_err;
 } else {
  while (!FUNC_7(&VAR_22->received)) {
   if (FUNC_22(VAR_14, VAR_23))
    goto time_err;
   FUNC_10();
  };
 }

 if (VAR_22->rc == -VAR_2)
  goto error;
 VAR_20 = VAR_22->rc;
 FUNC_18(VAR_22);
 return VAR_20;

time_err:
 VAR_22->rc = -VAR_4;
 FUNC_20(&VAR_22->card->lock, VAR_21);
 FUNC_15(&VAR_22->list);
 FUNC_21(&VAR_22->card->lock, VAR_21);
 FUNC_6(&VAR_22->received);
error:
 FUNC_8(&VAR_15->write.irq_pending, 0);
 FUNC_19(VAR_17->channel, VAR_17);
 VAR_15->write.buf_no = (VAR_15->write.buf_no + 1) % VAR_7;
 VAR_20 = VAR_22->rc;
 FUNC_18(VAR_22);
 return VAR_20;
}
