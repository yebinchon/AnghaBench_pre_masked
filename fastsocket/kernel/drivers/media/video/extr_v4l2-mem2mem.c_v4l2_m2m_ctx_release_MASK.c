
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videobuf_buffer {scalar_t__ state; int done; } ;
struct v4l2_m2m_dev {int job_spinlock; TYPE_1__* m2m_ops; } ;
struct TYPE_6__ {int q; } ;
struct TYPE_5__ {int q; } ;
struct v4l2_m2m_ctx {int job_flags; TYPE_3__ out_q_ctx; TYPE_2__ cap_q_ctx; int queue; int priv; struct v4l2_m2m_dev* m2m_dev; } ;
struct TYPE_4__ {int (* job_abort ) (int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,struct v4l2_m2m_ctx*) ;
 int FUNC_2 (struct v4l2_m2m_ctx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 struct videobuf_buffer* FUNC_7 (struct v4l2_m2m_ctx*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct v4l2_m2m_ctx *VAR_4)
{
 struct v4l2_m2m_dev *VAR_5;
 struct videobuf_buffer *VAR_6;
 unsigned long VAR_7;

 VAR_5 = VAR_4->m2m_dev;

 FUNC_4(&VAR_5->job_spinlock, VAR_7);
 if (VAR_4->job_flags & VAR_1) {
  FUNC_5(&VAR_5->job_spinlock, VAR_7);
  VAR_5->m2m_ops->job_abort(VAR_4->priv);
  FUNC_1("m2m_ctx %p running, will wait to complete", VAR_4);
  VAR_6 = FUNC_7(VAR_4);
  FUNC_0(((void*)0) == VAR_6);
  FUNC_10(VAR_6->done, VAR_6->state != VAR_2
         && VAR_6->state != VAR_3);
 } else if (VAR_4->job_flags & VAR_0) {
  FUNC_3(&VAR_4->queue);
  VAR_4->job_flags &= ~(VAR_0 | VAR_1);
  FUNC_5(&VAR_5->job_spinlock, VAR_7);
  FUNC_1("m2m_ctx: %p had been on queue and was removed\n",
   VAR_4);
 } else {

  FUNC_5(&VAR_5->job_spinlock, VAR_7);
 }

 FUNC_9(&VAR_4->cap_q_ctx.q);
 FUNC_9(&VAR_4->out_q_ctx.q);

 FUNC_8(&VAR_4->cap_q_ctx.q);
 FUNC_8(&VAR_4->out_q_ctx.q);

 FUNC_2(VAR_4);
}
