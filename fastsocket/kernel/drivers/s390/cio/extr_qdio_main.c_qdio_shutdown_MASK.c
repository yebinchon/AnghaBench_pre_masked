
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sch_no; } ;
struct qdio_irq {scalar_t__ state; int setup_mutex; scalar_t__ orig_handler; TYPE_2__ schid; } ;
struct ccw_device {scalar_t__ handler; TYPE_3__* private; } ;
struct TYPE_4__ {int sch_no; } ;
struct TYPE_6__ {int wait_q; TYPE_1__ schid; struct qdio_irq* qdio_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*,int ) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (struct qdio_irq*,scalar_t__) ;
 int FUNC_10 (struct qdio_irq*,struct ccw_device*) ;
 int FUNC_11 (struct ccw_device*) ;
 int FUNC_12 (struct qdio_irq*) ;
 int FUNC_13 (int ,unsigned long) ;
 int FUNC_14 (int ,unsigned long) ;
 int FUNC_15 (struct qdio_irq*) ;
 int FUNC_16 (int ,int,int) ;

int FUNC_17(struct ccw_device *VAR_9, int VAR_10)
{
 struct qdio_irq *VAR_11 = VAR_9->private->qdio_data;
 int VAR_12;
 unsigned long VAR_13;

 if (!VAR_11)
  return -VAR_0;

 FUNC_0(FUNC_6());
 FUNC_2("qshutdown:%4x", VAR_9->private->schid.sch_no);

 FUNC_7(&VAR_11->setup_mutex);




 if (VAR_11->state == VAR_6) {
  FUNC_8(&VAR_11->setup_mutex);
  return 0;
 }





 FUNC_9(VAR_11, VAR_7);

 FUNC_15(VAR_11);
 FUNC_11(VAR_9);
 FUNC_10(VAR_11, VAR_9);


 FUNC_13(FUNC_5(VAR_9), VAR_13);

 if (VAR_10 & VAR_3)
  VAR_12 = FUNC_3(VAR_9, VAR_2);
 else

  VAR_12 = FUNC_4(VAR_9, VAR_2);
 if (VAR_12) {
  FUNC_1("%4x SHUTD ERR", VAR_11->schid.sch_no);
  FUNC_1("rc:%4d", VAR_12);
  goto no_cleanup;
 }

 FUNC_9(VAR_11, VAR_4);
 FUNC_14(FUNC_5(VAR_9), VAR_13);
 FUNC_16(VAR_9->private->wait_q,
  VAR_11->state == VAR_6 ||
  VAR_11->state == VAR_5,
  10 * VAR_1);
 FUNC_13(FUNC_5(VAR_9), VAR_13);

no_cleanup:
 FUNC_12(VAR_11);


 if ((void *)VAR_9->handler == (void *)VAR_8)
  VAR_9->handler = VAR_11->orig_handler;
 FUNC_14(FUNC_5(VAR_9), VAR_13);

 FUNC_9(VAR_11, VAR_6);
 FUNC_8(&VAR_11->setup_mutex);
 if (VAR_12)
  return VAR_12;
 return 0;
}
