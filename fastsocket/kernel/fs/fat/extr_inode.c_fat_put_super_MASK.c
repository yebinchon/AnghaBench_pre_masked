
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_fs_info; scalar_t__ s_dirt; } ;
struct TYPE_2__ {scalar_t__ iocharset; } ;
struct msdos_sb_info {TYPE_1__ options; int nls_io; int nls_disk; int fat_inode; } ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct msdos_sb_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_4();

 if (VAR_1->s_dirt)
  FUNC_1(VAR_1);

 FUNC_2(VAR_2->fat_inode);

 FUNC_5(VAR_2->nls_disk);
 FUNC_5(VAR_2->nls_io);

 if (VAR_2->options.iocharset != VAR_0)
  FUNC_3(VAR_2->options.iocharset);

 VAR_1->s_fs_info = ((void*)0);
 FUNC_3(VAR_2);

 FUNC_6();
}
