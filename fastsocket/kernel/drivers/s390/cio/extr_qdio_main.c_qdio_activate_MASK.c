
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sch_no; } ;
struct TYPE_10__ {scalar_t__ cda; int count; int flags; int cmd_code; } ;
struct TYPE_8__ {int count; int cmd; } ;
struct qdio_irq {int state; int setup_mutex; TYPE_4__ schid; TYPE_5__ ccw; TYPE_3__ aqueue; } ;
struct ccw_device {TYPE_2__* private; } ;
struct TYPE_6__ {int sch_no; } ;
struct TYPE_7__ {scalar_t__ state; struct qdio_irq* qdio_data; TYPE_1__ schid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*,TYPE_5__*,int ,int ,int ) ;
 int FUNC_4 (struct ccw_device*) ;
 scalar_t__ FUNC_5 (struct qdio_irq*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct qdio_irq*,int ) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (struct qdio_irq*) ;

int FUNC_13(struct ccw_device *VAR_11)
{
 struct qdio_irq *VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 FUNC_1("qactivate:%4x", VAR_11->private->schid.sch_no);

 VAR_12 = VAR_11->private->qdio_data;
 if (!VAR_12)
  return -VAR_7;

 if (VAR_11->private->state != VAR_2)
  return -VAR_5;

 FUNC_7(&VAR_12->setup_mutex);
 if (VAR_12->state == VAR_10) {
  VAR_13 = -VAR_4;
  goto out;
 }

 VAR_12->ccw.cmd_code = VAR_12->aqueue.cmd;
 VAR_12->ccw.flags = VAR_1;
 VAR_12->ccw.count = VAR_12->aqueue.count;
 VAR_12->ccw.cda = 0;

 FUNC_10(FUNC_4(VAR_11), VAR_14);
 FUNC_2(VAR_11, VAR_0);

 VAR_13 = FUNC_3(VAR_11, &VAR_12->ccw, VAR_8,
         0, VAR_3);
 if (VAR_13) {
  FUNC_0("%4x act IO ERR", VAR_12->schid.sch_no);
  FUNC_0("rc:%4x", VAR_13);
 }
 FUNC_11(FUNC_4(VAR_11), VAR_14);

 if (VAR_13)
  goto out;

 if (FUNC_5(VAR_12))
  FUNC_12(VAR_12);


 FUNC_6(5);

 switch (VAR_12->state) {
 case 128:
 case 129:
  VAR_13 = -VAR_6;
  break;
 default:
  FUNC_9(VAR_12, VAR_9);
  VAR_13 = 0;
 }
out:
 FUNC_8(&VAR_12->setup_mutex);
 return VAR_13;
}
