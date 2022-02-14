
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_dev {int job_spinlock; struct v4l2_m2m_ctx* curr_ctx; } ;
struct v4l2_m2m_ctx {int job_flags; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct v4l2_m2m_dev*) ;
 int FUNC_5 (struct v4l2_m2m_ctx*) ;

void FUNC_6(struct v4l2_m2m_dev *VAR_2,
    struct v4l2_m2m_ctx *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->job_spinlock, VAR_4);
 if (!VAR_2->curr_ctx || VAR_2->curr_ctx != VAR_3) {
  FUNC_3(&VAR_2->job_spinlock, VAR_4);
  FUNC_0("Called by an instance not currently running\n");
  return;
 }

 FUNC_1(&VAR_2->curr_ctx->queue);
 VAR_2->curr_ctx->job_flags &= ~(VAR_0 | VAR_1);
 VAR_2->curr_ctx = ((void*)0);

 FUNC_3(&VAR_2->job_spinlock, VAR_4);




 FUNC_5(VAR_3);
 FUNC_4(VAR_2);
}
