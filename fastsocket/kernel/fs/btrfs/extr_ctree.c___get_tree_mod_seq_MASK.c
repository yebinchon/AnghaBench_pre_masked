
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_list {int list; int seq; } ;
struct btrfs_fs_info {int tree_mod_seq_list; int tree_mod_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_fs_info *VAR_0, struct seq_list *VAR_1)
{
 VAR_1->seq = FUNC_0(&VAR_0->tree_mod_seq);
 FUNC_1(&VAR_1->list, &VAR_0->tree_mod_seq_list);
}
