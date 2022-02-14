
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_5__ {scalar_t__ state; int irq_pending; int ccw; int ccwdev; } ;
struct qeth_card {int read_or_write_problem; int wait_q; TYPE_2__ read; TYPE_1__* gdev; } ;
typedef int addr_t ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct qeth_cmd_buffer* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_5)
{
 int VAR_6;
 struct qeth_cmd_buffer *VAR_7;

 FUNC_1(VAR_4, 5, "issnxrd");
 if (VAR_5->read.state != VAR_0)
  return -VAR_1;
 VAR_7 = FUNC_6(&VAR_5->read);
 if (!VAR_7) {
  FUNC_5(&VAR_5->gdev->dev, "The qeth device driver "
   "failed to recover an error on the device\n");
  FUNC_0(2, "%s issue_next_read failed: no iob "
   "available\n", FUNC_4(&VAR_5->gdev->dev));
  return -VAR_2;
 }
 FUNC_8(&VAR_5->read, VAR_7->data, VAR_3);
 FUNC_1(VAR_4, 6, "noirqpnd");
 VAR_6 = FUNC_3(VAR_5->read.ccwdev, &VAR_5->read.ccw,
         (addr_t) VAR_7, 0, 0);
 if (VAR_6) {
  FUNC_0(2, "%s error in starting next read ccw! "
   "rc=%i\n", FUNC_4(&VAR_5->gdev->dev), VAR_6);
  FUNC_2(&VAR_5->read.irq_pending, 0);
  VAR_5->read_or_write_problem = 1;
  FUNC_7(VAR_5);
  FUNC_9(&VAR_5->wait_q);
 }
 return VAR_6;
}
