
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct affs_sb_info {struct buffer_head* s_root_bh; } ;
struct affs_root_tail {int disk_change; int bm_flag; } ;


 struct affs_root_tail* FUNC_0 (struct super_block*,struct buffer_head*) ;
 struct affs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,struct buffer_head*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct super_block *VAR_0, int VAR_1)
{
 struct affs_sb_info *VAR_2 = FUNC_1(VAR_0);
 struct buffer_head *VAR_3 = VAR_2->s_root_bh;
 struct affs_root_tail *VAR_4 = FUNC_0(VAR_0, VAR_3);

 VAR_4->bm_flag = FUNC_3(VAR_1);
 FUNC_6(FUNC_4(), &VAR_4->disk_change);
 FUNC_2(VAR_0, VAR_3);
 FUNC_5(VAR_3);
}
