
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_4__ {struct vfsmount* mnt; } ;
struct file {TYPE_2__ f_path; } ;
struct autofs_sb_info {int sb; } ;
struct TYPE_3__ {int how; } ;
struct autofs_dev_ioctl {TYPE_1__ expire; } ;


 int FUNC_0 (int ,struct vfsmount*,struct autofs_sb_info*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0,
       struct autofs_sb_info *VAR_1,
       struct autofs_dev_ioctl *VAR_2)
{
 struct vfsmount *VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->expire.how;
 VAR_3 = VAR_0->f_path.mnt;

 return FUNC_0(VAR_1->sb, VAR_3, VAR_1, VAR_4);
}
