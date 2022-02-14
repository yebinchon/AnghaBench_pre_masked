
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct hypfs_sb_info* s_fs_info; } ;
struct inode {int i_ctime; int i_mtime; int i_atime; } ;
struct hypfs_sb_info {int last_update; TYPE_1__* update_file; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_1)
{
 struct hypfs_sb_info *VAR_2 = VAR_1->s_fs_info;
 struct inode *VAR_3 = VAR_2->update_file->d_inode;

 VAR_2->last_update = FUNC_0();
 VAR_3->i_atime = VAR_3->i_mtime = VAR_3->i_ctime = VAR_0;
}
