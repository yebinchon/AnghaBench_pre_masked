
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_list {int flags; } ;
struct btrfs_fs_info {int tree_mod_seq_lock; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct seq_list*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct btrfs_fs_info *VAR_0,
       struct seq_list *VAR_1)
{
 VAR_1->flags = 1;
 FUNC_1(&VAR_0->tree_mod_seq_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->tree_mod_seq_lock);
}
