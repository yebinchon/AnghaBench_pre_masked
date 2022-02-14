
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_m2m_dev {int job_spinlock; TYPE_1__* curr_ctx; } ;
struct TYPE_2__ {void* priv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void *FUNC_2(struct v4l2_m2m_dev *VAR_0)
{
 unsigned long VAR_1;
 void *VAR_2 = ((void*)0);

 FUNC_0(&VAR_0->job_spinlock, VAR_1);
 if (VAR_0->curr_ctx)
  VAR_2 = VAR_0->curr_ctx->priv;
 FUNC_1(&VAR_0->job_spinlock, VAR_1);

 return VAR_2;
}
