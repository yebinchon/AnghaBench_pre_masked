
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {TYPE_1__* fs_info; struct btrfs_root* log_root; } ;
struct TYPE_4__ {scalar_t__ logged_trans; int log_mutex; } ;
struct TYPE_3__ {scalar_t__ last_trans_log_full_commit; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,int ,int ,int *) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct btrfs_trans_handle *VAR_2,
          struct btrfs_root *VAR_3,
          const char *VAR_4, int VAR_5,
          struct inode *VAR_6, u64 VAR_7)
{
 struct btrfs_root *VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_6)->logged_trans < VAR_2->transid)
  return 0;

 VAR_10 = FUNC_5(VAR_3);
 if (VAR_10)
  return 0;
 VAR_8 = VAR_3->log_root;
 FUNC_6(&FUNC_0(VAR_6)->log_mutex);

 VAR_10 = FUNC_2(VAR_2, VAR_8, VAR_4, VAR_5, FUNC_4(VAR_6),
      VAR_7, &VAR_9);
 FUNC_7(&FUNC_0(VAR_6)->log_mutex);
 if (VAR_10 == -VAR_1) {
  VAR_3->fs_info->last_trans_log_full_commit = VAR_2->transid;
  VAR_10 = 0;
 } else if (VAR_10 < 0 && VAR_10 != -VAR_0)
  FUNC_1(VAR_2, VAR_3, VAR_10);
 FUNC_3(VAR_3);

 return VAR_10;
}
