
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_device {int * sync; } ;
struct msm_control_device {int ctrl_q; struct msm_device* pmsm; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct msm_control_device* private_data; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct msm_control_device*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 struct msm_control_device *VAR_5 = VAR_3->private_data;
 struct msm_device *VAR_6 = VAR_5->pmsm;
 FUNC_3("msm_camera: RELEASE %s\n", VAR_3->f_path.dentry->d_name.name);
 VAR_4 = FUNC_1(VAR_6->sync);
 if (!VAR_4) {
  FUNC_0(&VAR_5->ctrl_q, VAR_0);
  FUNC_0(VAR_6->sync, VAR_1);
 }
 FUNC_2(VAR_5);
 return VAR_4;
}
