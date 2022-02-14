
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int channel; } ;
struct TYPE_2__ {int irq_pending; int ccwdev; int ccw; } ;
struct qeth_card {int wait_q; TYPE_1__ write; } ;
typedef int addr_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qeth_card*,int,struct qeth_cmd_buffer*) ;
 int FUNC_8 (int ,struct qeth_cmd_buffer*) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct qeth_card *VAR_1, int VAR_2,
      struct qeth_cmd_buffer *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_1(VAR_0, 5, "osndctrd");

 FUNC_11(VAR_1->wait_q,
     FUNC_3(&VAR_1->write.irq_pending, 0, 1) == 0);
 FUNC_7(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, 6, "osnoirqp");
 FUNC_9(FUNC_6(VAR_1->write.ccwdev), VAR_4);
 VAR_5 = FUNC_5(VAR_1->write.ccwdev, &VAR_1->write.ccw,
         (addr_t) VAR_3, 0, 0);
 FUNC_10(FUNC_6(VAR_1->write.ccwdev), VAR_4);
 if (VAR_5) {
  FUNC_0(2, "qeth_osn_send_control_data: "
      "ccw_device_start rc = %i\n", VAR_5);
  FUNC_2(VAR_0, 2, " err%d", VAR_5);
  FUNC_8(VAR_3->channel, VAR_3);
  FUNC_4(&VAR_1->write.irq_pending, 0);
  FUNC_12(&VAR_1->wait_q);
 }
 return VAR_5;
}
