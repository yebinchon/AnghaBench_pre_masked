
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct autofs_sb_info {int dummy; } ;
struct TYPE_4__ {int may_umount; } ;
struct autofs_dev_ioctl {TYPE_2__ askumount; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0,
          struct autofs_sb_info *VAR_1,
          struct autofs_dev_ioctl *VAR_2)
{
 VAR_2->askumount.may_umount = 0;
 if (FUNC_0(VAR_0->f_path.mnt))
  VAR_2->askumount.may_umount = 1;
 return 0;
}
