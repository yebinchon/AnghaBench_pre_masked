
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int open_ioctl_trans; scalar_t__ log_root_recovering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct btrfs_root *VAR_2, int VAR_3)
{
 if (VAR_2->fs_info->log_root_recovering)
  return 0;

 if (VAR_3 == VAR_1)
  return 1;

 if (VAR_3 == VAR_0 &&
     !FUNC_0(&VAR_2->fs_info->open_ioctl_trans))
  return 1;

 return 0;
}
