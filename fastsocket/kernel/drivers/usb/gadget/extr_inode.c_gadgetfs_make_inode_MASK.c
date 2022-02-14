
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; struct file_operations const* i_fop; void* i_private; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;
struct file_operations {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct super_block*) ;

__attribute__((used)) static struct inode *
FUNC_1 (struct super_block *VAR_3,
  void *VAR_4, const struct file_operations *VAR_5,
  int VAR_6)
{
 struct inode *VAR_7 = FUNC_0 (VAR_3);

 if (VAR_7) {
  VAR_7->i_mode = VAR_6;
  VAR_7->i_uid = VAR_2;
  VAR_7->i_gid = VAR_1;
  VAR_7->i_atime = VAR_7->i_mtime = VAR_7->i_ctime
    = VAR_0;
  VAR_7->i_private = VAR_4;
  VAR_7->i_fop = VAR_5;
 }
 return VAR_7;
}
