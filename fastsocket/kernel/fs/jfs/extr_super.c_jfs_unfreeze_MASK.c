
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct jfs_sb_info {struct jfs_log* log; } ;
struct jfs_log {int dummy; } ;


 int VAR_0 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2)
{
 struct jfs_sb_info *VAR_3 = FUNC_0(VAR_2);
 struct jfs_log *VAR_4 = VAR_3->log;
 int VAR_5 = 0;

 if (!(VAR_2->s_flags & VAR_1)) {
  FUNC_4(VAR_2, VAR_0);
  if ((VAR_5 = FUNC_2(VAR_4)))
   FUNC_1("jfs_unlock failed with return code %d", VAR_5);
  else
   FUNC_3(VAR_2);
 }
 return 0;
}
