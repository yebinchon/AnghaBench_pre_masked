
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct jffs2_sb_info {int dummy; } ;


 struct jffs2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 struct jffs2_sb_info *VAR_2 = FUNC_0(VAR_1);
 if (!(VAR_1->s_flags & VAR_0))
  FUNC_1(VAR_2);
 FUNC_3(VAR_1);
 FUNC_2(VAR_2);
}
