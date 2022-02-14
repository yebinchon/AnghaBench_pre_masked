
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_irq_thread_msg {int vfeIrqStatus; } ;
struct isr_queue_cmd {int list; int vfePmData; int vfeCamifStatusLocal; int vfeBpcFrameInfo; int vfeAsfFrameInfo; int vfeInterruptStatus; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int vfeImaskPacked; scalar_t__ vfebase; int tasklet_lock; int tasklet_q; int ack_lock; scalar_t__ vfeStopAckPending; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct isr_queue_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vfe_irq_thread_msg*) ;
 int FUNC_7 (struct vfe_irq_thread_msg*) ;
 int FUNC_8 (struct vfe_irq_thread_msg*) ;
 int FUNC_9 (struct vfe_irq_thread_msg*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct vfe_irq_thread_msg*) ;
 int VAR_6 ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 uint32_t VAR_10;
 struct vfe_irq_thread_msg VAR_11;
 struct isr_queue_cmd *VAR_12;

 FUNC_0("vfe_parse_irq\n");

 FUNC_11(&VAR_11);

 if (VAR_11.vfeIrqStatus == 0) {
  FUNC_0("vfe_parse_irq: irq.vfeIrqStatus is 0\n");
  return VAR_1;
 }

 VAR_12 = FUNC_1(sizeof(struct isr_queue_cmd),
  VAR_0);
 if (!VAR_12) {
  FUNC_0("vfe_parse_irq: qcmd malloc failed!\n");
  return VAR_1;
 }

 FUNC_3(&VAR_5->ack_lock, VAR_9);

 if (VAR_5->vfeStopAckPending)
  VAR_10 =
   (VAR_3 & VAR_11.vfeIrqStatus);
 else
  VAR_10 =
   ((VAR_5->vfeImaskPacked | VAR_2) &
    VAR_11.vfeIrqStatus);

 FUNC_4(&VAR_5->ack_lock, VAR_9);


 VAR_12->vfeInterruptStatus = FUNC_10(VAR_10);
 VAR_12->vfeAsfFrameInfo = FUNC_6(&VAR_11);
 VAR_12->vfeBpcFrameInfo = FUNC_8(&VAR_11);
 VAR_12->vfeCamifStatusLocal = FUNC_7(&VAR_11);
 VAR_12->vfePmData = FUNC_9(&VAR_11);

 FUNC_3(&VAR_5->tasklet_lock, VAR_9);
 FUNC_2(&VAR_12->list, &VAR_5->tasklet_q);
 FUNC_4(&VAR_5->tasklet_lock, VAR_9);
 FUNC_5(&VAR_6);


 FUNC_12(VAR_11.vfeIrqStatus, VAR_5->vfebase + VAR_4);

 return VAR_1;
}
