
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int * s_fs_info; } ;
struct affs_sb_info {int s_root_bh; struct affs_sb_info* s_prefix; } ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct affs_sb_info*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct super_block *VAR_1)
{
 struct affs_sb_info *VAR_2 = FUNC_0(VAR_1);
 FUNC_6("AFFS: put_super()\n");

 FUNC_5();

 if (!(VAR_1->s_flags & VAR_0))
  FUNC_2(VAR_1, 1);

 FUNC_4(VAR_2->s_prefix);
 FUNC_3(VAR_1);
 FUNC_1(VAR_2->s_root_bh);
 FUNC_4(VAR_2);
 VAR_1->s_fs_info = ((void*)0);

 FUNC_7();
}
