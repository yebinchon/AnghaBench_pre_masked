
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct autofs_sb_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct autofs_sb_info*) ;
 int FUNC_2 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct autofs_sb_info*) ;
 int FUNC_5 (struct super_block*) ;

void FUNC_6(struct super_block *VAR_0)
{
 struct autofs_sb_info *VAR_1 = FUNC_3(VAR_0);







 if (!VAR_1)
  goto out_kill_sb;


 FUNC_1(VAR_1);


 FUNC_2(VAR_1);

 VAR_0->s_fs_info = ((void*)0);
 FUNC_4(VAR_1);

out_kill_sb:
 FUNC_0("shutting down");
 FUNC_5(VAR_0);
}
