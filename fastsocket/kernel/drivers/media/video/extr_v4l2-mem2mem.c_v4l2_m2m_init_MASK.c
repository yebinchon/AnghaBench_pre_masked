
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_ops {int job_abort; int device_run; } ;
struct v4l2_m2m_dev {int job_spinlock; int job_queue; struct v4l2_m2m_ops* m2m_ops; int * curr_ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_m2m_dev* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct v4l2_m2m_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct v4l2_m2m_dev *FUNC_5(struct v4l2_m2m_ops *VAR_3)
{
 struct v4l2_m2m_dev *VAR_4;

 if (!VAR_3)
  return FUNC_1(-VAR_0);

 FUNC_0(!VAR_3->device_run);
 FUNC_0(!VAR_3->job_abort);

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_2);
 if (!VAR_4)
  return FUNC_1(-VAR_1);

 VAR_4->curr_ctx = ((void*)0);
 VAR_4->m2m_ops = VAR_3;
 FUNC_2(&VAR_4->job_queue);
 FUNC_4(&VAR_4->job_spinlock);

 return VAR_4;
}
