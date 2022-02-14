
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int orphan_inodes; int orphan_lock; } ;
struct TYPE_2__ {int runtime_flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct btrfs_trans_handle *VAR_2, struct inode *VAR_3)
{
 struct btrfs_root *VAR_4 = FUNC_0(VAR_3)->root;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_6(&VAR_4->orphan_lock);
 if (FUNC_8(VAR_0,
          &FUNC_0(VAR_3)->runtime_flags))
  VAR_5 = 1;

 if (FUNC_8(VAR_1,
          &FUNC_0(VAR_3)->runtime_flags))
  VAR_6 = 1;
 FUNC_7(&VAR_4->orphan_lock);

 if (VAR_2 && VAR_5) {
  VAR_7 = FUNC_3(VAR_2, VAR_4, FUNC_4(VAR_3));
  FUNC_1(VAR_7);
 }

 if (VAR_6) {
  FUNC_5(VAR_3);
  FUNC_2(&VAR_4->orphan_inodes);
 }

 return 0;
}
