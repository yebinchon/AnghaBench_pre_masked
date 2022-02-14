
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct hpfs_sb_info {struct hpfs_sb_info* sb_bmp_dir; struct hpfs_sb_info* sb_cp_table; } ;


 struct hpfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct hpfs_sb_info*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 struct hpfs_sb_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_2();

 FUNC_1(VAR_1->sb_cp_table);
 FUNC_1(VAR_1->sb_bmp_dir);
 FUNC_4(VAR_0);
 VAR_0->s_fs_info = ((void*)0);
 FUNC_1(VAR_1);

 FUNC_3();
}
