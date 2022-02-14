
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_5__ {scalar_t__ objectid; } ;
struct TYPE_6__ {TYPE_2__ location; } ;
struct TYPE_4__ {struct btrfs_root* tree_root; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline bool FUNC_1(struct btrfs_root *VAR_1,
           struct inode *VAR_2)
{
 if (VAR_1 == VAR_1->fs_info->tree_root ||
     FUNC_0(VAR_2)->location.objectid == VAR_0)
  return 1;
 return 0;
}
