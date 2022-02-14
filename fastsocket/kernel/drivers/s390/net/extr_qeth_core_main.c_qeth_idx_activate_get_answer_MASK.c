
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_cmd_buffer {void (* callback ) (struct qeth_channel*,struct qeth_cmd_buffer*) ;int data; } ;
struct TYPE_3__ {scalar_t__ cda; int count; } ;
struct qeth_channel {scalar_t__ state; int irq_pending; int ccwdev; TYPE_1__ ccw; } ;
struct qeth_card {int wait_q; } ;
struct ccw1 {int dummy; } ;
typedef int addr_t ;
typedef scalar_t__ __u32 ;


 struct qeth_card* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (struct qeth_channel*) ;
 struct qeth_cmd_buffer* FUNC_11 (struct qeth_channel*) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int ,unsigned long) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct qeth_channel *VAR_7,
  void (*VAR_8)(struct qeth_channel *,
   struct qeth_cmd_buffer *))
{
 struct qeth_cmd_buffer *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 struct qeth_card *VAR_12;

 FUNC_2(VAR_6, 2, "idxanswr");
 VAR_12 = FUNC_0(VAR_7->ccwdev);
 VAR_9 = FUNC_11(VAR_7);
 VAR_9->callback = VAR_8;
 FUNC_9(&VAR_7->ccw, VAR_5, sizeof(struct ccw1));
 VAR_7->ccw.count = VAR_3;
 VAR_7->ccw.cda = (__u32) FUNC_4(VAR_9->data);

 FUNC_14(VAR_12->wait_q,
     FUNC_5(&VAR_7->irq_pending, 0, 1) == 0);
 FUNC_2(VAR_6, 6, "noirqpnd");
 FUNC_12(FUNC_8(VAR_7->ccwdev), VAR_10);
 VAR_11 = FUNC_7(VAR_7->ccwdev,
         &VAR_7->ccw, (addr_t) VAR_9, 0, 0);
 FUNC_13(FUNC_8(VAR_7->ccwdev), VAR_10);

 if (VAR_11) {
  FUNC_1(2, "Error2 in activating channel rc=%d\n", VAR_11);
  FUNC_3(VAR_6, 2, "2err%d", VAR_11);
  FUNC_6(&VAR_7->irq_pending, 0);
  FUNC_16(&VAR_12->wait_q);
  return VAR_11;
 }
 VAR_11 = FUNC_15(VAR_12->wait_q,
    VAR_7->state == VAR_0, VAR_4);
 if (VAR_11 == -VAR_1)
  return VAR_11;
 if (VAR_7->state != VAR_0) {
  VAR_11 = -VAR_2;
  FUNC_3(VAR_6, 2, "3err%d", VAR_11);
  FUNC_10(VAR_7);
 } else
  VAR_11 = 0;
 return VAR_11;
}
