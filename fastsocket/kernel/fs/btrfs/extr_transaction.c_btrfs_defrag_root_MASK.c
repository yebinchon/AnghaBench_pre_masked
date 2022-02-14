
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {unsigned long blocks_used; } ;
struct btrfs_root {scalar_t__ defrag_running; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int tree_root; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 scalar_t__ FUNC_5 (struct btrfs_fs_info*) ;
 struct btrfs_trans_handle* FUNC_6 (struct btrfs_root*,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__*,int) ;

int FUNC_9(struct btrfs_root *VAR_1, int VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;
 struct btrfs_trans_handle *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 if (FUNC_8(&VAR_1->defrag_running, 1))
  return 0;

 while (1) {
  VAR_4 = FUNC_6(VAR_1, 0);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);

  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2);

  VAR_6 = VAR_4->blocks_used;
  FUNC_4(VAR_4, VAR_1);
  FUNC_2(VAR_3->tree_root, VAR_6);
  FUNC_7();

  if (FUNC_5(VAR_1->fs_info) || VAR_5 != -VAR_0)
   break;
 }
 VAR_1->defrag_running = 0;
 return VAR_5;
}
