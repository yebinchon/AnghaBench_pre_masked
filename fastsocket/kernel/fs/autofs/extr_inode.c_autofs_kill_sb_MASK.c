
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_fs_info; } ;
struct autofs_sb_info {TYPE_1__* symlink; int symlink_bitmap; int oz_pgrp; int catatonic; } ;
struct TYPE_2__ {int data; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct autofs_sb_info*) ;
 int FUNC_2 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int,int ) ;

void FUNC_8(struct super_block *VAR_1)
{
 struct autofs_sb_info *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3;







 if (!VAR_2)
  goto out_kill_sb;

 if (!VAR_2->catatonic)
  FUNC_1(VAR_2);

 FUNC_6(VAR_2->oz_pgrp);

 FUNC_2(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_7(VAR_3, VAR_2->symlink_bitmap))
   FUNC_4(VAR_2->symlink[VAR_3].data);
 }

 FUNC_4(VAR_1->s_fs_info);

out_kill_sb:
 FUNC_0(("autofs: shutting down\n"));
 FUNC_5(VAR_1);
}
