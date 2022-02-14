
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct hypfs_sb_info* s_fs_info; } ;
struct inode {int i_mode; int i_nlink; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;
struct hypfs_sb_info {int gid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4) {
  struct hypfs_sb_info *VAR_5 = VAR_2->s_fs_info;
  VAR_4->i_mode = VAR_3;
  VAR_4->i_uid = VAR_5->uid;
  VAR_4->i_gid = VAR_5->gid;
  VAR_4->i_atime = VAR_4->i_mtime = VAR_4->i_ctime = VAR_0;
  if (VAR_3 & VAR_1)
   VAR_4->i_nlink = 2;
  else
   VAR_4->i_nlink = 1;
 }
 return VAR_4;
}
