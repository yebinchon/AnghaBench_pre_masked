
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_13__ {int ac; } ;
struct TYPE_12__ {int mmwc; } ;
struct TYPE_10__ {int sch_no; } ;
struct TYPE_14__ {scalar_t__ cda; int count; int flags; int cmd_code; } ;
struct TYPE_9__ {int count; int cmd; } ;
struct qdio_irq {scalar_t__ state; int setup_mutex; TYPE_6__ qib; TYPE_5__ ssqd_desc; TYPE_3__ schid; TYPE_7__ ccw; scalar_t__ qdr; TYPE_2__ equeue; } ;
struct qdio_initialize {struct ccw_device* cdev; } ;
struct ccw_device {TYPE_4__* private; } ;
typedef scalar_t__ addr_t ;
struct TYPE_8__ {int sch_no; } ;
struct TYPE_11__ {scalar_t__ state; int wait_q; struct qdio_irq* qdio_data; TYPE_1__ schid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,TYPE_7__*,int ,int ,int ) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qdio_irq*) ;
 int FUNC_8 (struct qdio_irq*) ;
 int FUNC_9 (struct qdio_irq*) ;
 int FUNC_10 (struct qdio_irq*,struct ccw_device*) ;
 int FUNC_11 (struct qdio_irq*,struct ccw_device*) ;
 int FUNC_12 (struct qdio_initialize*) ;
 int FUNC_13 (struct qdio_irq*) ;
 int FUNC_14 (struct ccw_device*,int ) ;
 int FUNC_15 (int ,unsigned long) ;
 int FUNC_16 (int ,unsigned long) ;
 int FUNC_17 (int ,int,int ) ;

int FUNC_18(struct qdio_initialize *VAR_10)
{
 struct qdio_irq *VAR_11;
 struct ccw_device *VAR_12 = VAR_10->cdev;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_1("qestablish:%4x", VAR_12->private->schid.sch_no);

 VAR_11 = VAR_12->private->qdio_data;
 if (!VAR_11)
  return -VAR_4;

 if (VAR_12->private->state != VAR_1)
  return -VAR_2;

 FUNC_5(&VAR_11->setup_mutex);
 FUNC_12(VAR_10);

 VAR_14 = FUNC_8(VAR_11);
 if (VAR_14) {
  FUNC_6(&VAR_11->setup_mutex);
  FUNC_14(VAR_12, VAR_7);
  return VAR_14;
 }


 VAR_11->ccw.cmd_code = VAR_11->equeue.cmd;
 VAR_11->ccw.flags = VAR_0;
 VAR_11->ccw.count = VAR_11->equeue.count;
 VAR_11->ccw.cda = (u32)((addr_t)VAR_11->qdr);

 FUNC_15(FUNC_4(VAR_12), VAR_13);
 FUNC_2(VAR_12, 0);

 VAR_14 = FUNC_3(VAR_12, &VAR_11->ccw, VAR_6, 0, 0);
 if (VAR_14) {
  FUNC_0("%4x est IO ERR", VAR_11->schid.sch_no);
  FUNC_0("rc:%4x", VAR_14);
 }
 FUNC_16(FUNC_4(VAR_12), VAR_13);

 if (VAR_14) {
  FUNC_6(&VAR_11->setup_mutex);
  FUNC_14(VAR_12, VAR_7);
  return VAR_14;
 }

 FUNC_17(VAR_12->private->wait_q,
  VAR_11->state == VAR_9 ||
  VAR_11->state == VAR_8, VAR_5);

 if (VAR_11->state != VAR_9) {
  FUNC_6(&VAR_11->setup_mutex);
  FUNC_14(VAR_12, VAR_7);
  return -VAR_3;
 }

 FUNC_13(VAR_11);
 FUNC_1("qDmmwc:%2x", VAR_11->ssqd_desc.mmwc);
 FUNC_1("qib ac:%4x", VAR_11->qib.ac);

 FUNC_7(VAR_11);


 FUNC_9(VAR_11);

 FUNC_6(&VAR_11->setup_mutex);
 FUNC_10(VAR_11, VAR_12);
 FUNC_11(VAR_11, VAR_12);
 return 0;
}
