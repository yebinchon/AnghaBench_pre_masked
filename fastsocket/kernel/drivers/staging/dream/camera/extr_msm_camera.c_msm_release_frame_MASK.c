
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_device {int opened; int sync; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct msm_device* private_data; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct msm_device *VAR_4 = VAR_2->private_data;
 FUNC_3("msm_camera: RELEASE %s\n", VAR_2->f_path.dentry->d_name.name);
 VAR_3 = FUNC_1(VAR_4->sync);
 if (!VAR_3) {
  FUNC_0(VAR_4->sync, VAR_0);
  FUNC_2(&VAR_4->opened, 0);
 }
 return VAR_3;
}
