
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_status_wait; int ctrl_status_q; int ctrl_status_q_lock; } ;
struct msm_control_device {TYPE_1__ ctrl_q; struct msm_control_device* pmsm; } ;
struct inode {int dummy; } ;
struct file {struct msm_control_device* private_data; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct msm_control_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct inode*,struct file*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;

 struct msm_control_device *VAR_5 =
  FUNC_3(sizeof(struct msm_control_device), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, VAR_3, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5->pmsm = VAR_3->private_data;
 VAR_3->private_data = VAR_5;
 FUNC_5(&VAR_5->ctrl_q.ctrl_status_q_lock);
 FUNC_1(&VAR_5->ctrl_q.ctrl_status_q);
 FUNC_2(&VAR_5->ctrl_q.ctrl_status_wait);

 FUNC_0("msm_open() open: rc = %d\n", VAR_4);
 return VAR_4;
}
