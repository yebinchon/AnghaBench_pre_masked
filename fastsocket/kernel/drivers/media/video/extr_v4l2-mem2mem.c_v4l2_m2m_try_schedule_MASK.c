
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_m2m_dev {int job_spinlock; int job_queue; TYPE_5__* m2m_ops; } ;
struct TYPE_8__ {int * irqlock; int streaming; } ;
struct TYPE_9__ {TYPE_3__ q; int rdy_queue; } ;
struct TYPE_6__ {int streaming; } ;
struct TYPE_7__ {int rdy_queue; TYPE_1__ q; } ;
struct v4l2_m2m_ctx {int job_flags; int queue; int priv; TYPE_4__ out_q_ctx; TYPE_2__ cap_q_ctx; struct v4l2_m2m_dev* m2m_dev; } ;
struct TYPE_10__ {int (* job_ready ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct v4l2_m2m_dev*) ;

__attribute__((used)) static void FUNC_7(struct v4l2_m2m_ctx *VAR_1)
{
 struct v4l2_m2m_dev *VAR_2;
 unsigned long VAR_3, VAR_4;

 VAR_2 = VAR_1->m2m_dev;
 FUNC_0("Trying to schedule a job for m2m_ctx: %p\n", VAR_1);

 if (!VAR_1->out_q_ctx.q.streaming
     || !VAR_1->cap_q_ctx.q.streaming) {
  FUNC_0("Streaming needs to be on for both queues\n");
  return;
 }

 FUNC_3(&VAR_2->job_spinlock, VAR_3);
 if (VAR_1->job_flags & VAR_0) {
  FUNC_4(&VAR_2->job_spinlock, VAR_3);
  FUNC_0("On job queue already\n");
  return;
 }

 FUNC_3(VAR_1->out_q_ctx.q.irqlock, VAR_4);
 if (FUNC_2(&VAR_1->out_q_ctx.rdy_queue)) {
  FUNC_4(VAR_1->out_q_ctx.q.irqlock, VAR_4);
  FUNC_4(&VAR_2->job_spinlock, VAR_3);
  FUNC_0("No input buffers available\n");
  return;
 }
 if (FUNC_2(&VAR_1->cap_q_ctx.rdy_queue)) {
  FUNC_4(VAR_1->out_q_ctx.q.irqlock, VAR_4);
  FUNC_4(&VAR_2->job_spinlock, VAR_3);
  FUNC_0("No output buffers available\n");
  return;
 }
 FUNC_4(VAR_1->out_q_ctx.q.irqlock, VAR_4);

 if (VAR_2->m2m_ops->job_ready
  && (!VAR_2->m2m_ops->job_ready(VAR_1->priv))) {
  FUNC_4(&VAR_2->job_spinlock, VAR_3);
  FUNC_0("Driver not ready\n");
  return;
 }

 FUNC_1(&VAR_1->queue, &VAR_2->job_queue);
 VAR_1->job_flags |= VAR_0;

 FUNC_4(&VAR_2->job_spinlock, VAR_3);

 FUNC_6(VAR_2);
}
