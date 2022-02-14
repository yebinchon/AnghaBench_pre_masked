
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_inodes; } ;
struct inode {int i_hash; int i_sb_list; int i_list; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {int nr_inodes; } ;


 int FUNC_0 (int *,struct hlist_head*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct super_block *VAR_2, struct hlist_head *VAR_3,
   struct inode *VAR_4)
{
 VAR_1.nr_inodes++;
 FUNC_1(&VAR_4->i_list, &VAR_0);
 FUNC_1(&VAR_4->i_sb_list, &VAR_2->s_inodes);
 if (VAR_3)
  FUNC_0(&VAR_4->i_hash, VAR_3);
}
