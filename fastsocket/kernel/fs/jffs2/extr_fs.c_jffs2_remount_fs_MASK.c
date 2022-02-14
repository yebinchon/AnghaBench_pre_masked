
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct jffs2_sb_info {int flags; int alloc_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jffs2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 int FUNC_3 (struct jffs2_sb_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

int FUNC_8 (struct super_block *VAR_4, int *VAR_5, char *VAR_6)
{
 struct jffs2_sb_info *VAR_7 = FUNC_0(VAR_4);

 if (VAR_7->flags & VAR_1 && !(VAR_4->s_flags & VAR_3))
  return -VAR_0;





 FUNC_4();
 if (!(VAR_4->s_flags & VAR_3)) {
  FUNC_3(VAR_7);
  FUNC_5(&VAR_7->alloc_sem);
  FUNC_1(VAR_7);
  FUNC_6(&VAR_7->alloc_sem);
 }

 if (!(*VAR_5 & VAR_3))
  FUNC_2(VAR_7);

 *VAR_5 |= VAR_2;

 FUNC_7();
 return 0;
}
