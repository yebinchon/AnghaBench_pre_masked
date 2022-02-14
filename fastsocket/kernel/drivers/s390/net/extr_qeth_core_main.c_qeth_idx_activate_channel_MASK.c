
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct qeth_cmd_buffer {void (* callback ) (struct qeth_channel*,struct qeth_cmd_buffer*) ;TYPE_4__* data; } ;
struct TYPE_25__ {int count; scalar_t__ cda; } ;
struct qeth_channel {scalar_t__ state; TYPE_5__* ccwdev; int irq_pending; TYPE_4__ ccw; } ;
struct TYPE_24__ {int func_level; int cula; int unit_addr2; scalar_t__ portno; } ;
struct TYPE_23__ {int issuer_rm_w; } ;
struct TYPE_22__ {int trans_hdr; } ;
struct qeth_card {int wait_q; TYPE_3__ info; TYPE_2__ token; TYPE_1__ seqno; struct qeth_channel write; } ;
struct ccw_dev_id {int devno; } ;
struct ccw1 {int dummy; } ;
typedef int addr_t ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;
struct TYPE_26__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 struct qeth_card* FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int,char*,int) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_10 (TYPE_4__*) ;
 int VAR_9 ;
 int* VAR_10 ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,struct ccw_dev_id*) ;
 int FUNC_15 (TYPE_5__*,TYPE_4__*,int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_4__*,int*,int) ;
 int FUNC_20 (struct qeth_channel*) ;
 struct qeth_cmd_buffer* FUNC_21 (struct qeth_channel*) ;
 int FUNC_22 (struct qeth_channel*,void (*) (struct qeth_channel*,struct qeth_cmd_buffer*)) ;
 int FUNC_23 (int ,unsigned long) ;
 int FUNC_24 (int ,unsigned long) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int,int ) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct qeth_channel *VAR_11,
  void (*VAR_12)(struct qeth_channel *,
   struct qeth_cmd_buffer *))
{
 struct qeth_card *VAR_13;
 struct qeth_cmd_buffer *VAR_14;
 unsigned long VAR_15;
 __u16 VAR_16;
 __u8 VAR_17;
 int VAR_18;
 struct ccw_dev_id VAR_19;

 VAR_13 = FUNC_1(VAR_11->ccwdev);

 FUNC_3(VAR_9, 2, "idxactch");

 VAR_14 = FUNC_21(VAR_11);
 VAR_14->callback = VAR_12;
 FUNC_19(&VAR_11->ccw, VAR_10, sizeof(struct ccw1));
 VAR_11->ccw.count = VAR_4;
 VAR_11->ccw.cda = (__u32) FUNC_11(VAR_14->data);
 if (VAR_11 == &VAR_13->write) {
  FUNC_19(VAR_14->data, VAR_5, VAR_4);
  FUNC_19(FUNC_10(VAR_14->data),
         &VAR_13->seqno.trans_hdr, VAR_7);
  VAR_13->seqno.trans_hdr++;
 } else {
  FUNC_19(VAR_14->data, VAR_3, VAR_4);
  FUNC_19(FUNC_10(VAR_14->data),
         &VAR_13->seqno.trans_hdr, VAR_7);
 }
 VAR_17 = ((__u8)VAR_13->info.portno) | 0x80;
 FUNC_19(FUNC_7(VAR_14->data), &VAR_17, 1);
 FUNC_19(FUNC_6(VAR_14->data),
        &VAR_13->token.issuer_rm_w, VAR_6);
 FUNC_19(FUNC_5(VAR_14->data),
        &VAR_13->info.func_level, sizeof(__u16));
 FUNC_14(FUNC_0(VAR_13), &VAR_19);
 FUNC_19(FUNC_8(VAR_14->data), &VAR_19.devno, 2);
 VAR_16 = (VAR_13->info.cula << 8) + VAR_13->info.unit_addr2;
 FUNC_19(FUNC_9(VAR_14->data), &VAR_16, 2);

 FUNC_25(VAR_13->wait_q,
     FUNC_12(&VAR_11->irq_pending, 0, 1) == 0);
 FUNC_3(VAR_9, 6, "noirqpnd");
 FUNC_23(FUNC_18(VAR_11->ccwdev), VAR_15);
 VAR_18 = FUNC_15(VAR_11->ccwdev,
         &VAR_11->ccw, (addr_t) VAR_14, 0, 0);
 FUNC_24(FUNC_18(VAR_11->ccwdev), VAR_15);

 if (VAR_18) {
  FUNC_2(2, "Error1 in activating channel. rc=%d\n",
   VAR_18);
  FUNC_4(VAR_9, 2, "1err%d", VAR_18);
  FUNC_13(&VAR_11->irq_pending, 0);
  FUNC_27(&VAR_13->wait_q);
  return VAR_18;
 }
 VAR_18 = FUNC_26(VAR_13->wait_q,
   VAR_11->state == VAR_0, VAR_8);
 if (VAR_18 == -VAR_1)
  return VAR_18;
 if (VAR_11->state != VAR_0) {
  FUNC_17(&VAR_11->ccwdev->dev, "The qeth device driver"
   " failed to recover an error on the device\n");
  FUNC_2(2, "%s IDX activate timed out\n",
   FUNC_16(&VAR_11->ccwdev->dev));
  FUNC_4(VAR_9, 2, "2err%d", -VAR_2);
  FUNC_20(VAR_11);
  return -VAR_2;
 }
 return FUNC_22(VAR_11, VAR_12);
}
