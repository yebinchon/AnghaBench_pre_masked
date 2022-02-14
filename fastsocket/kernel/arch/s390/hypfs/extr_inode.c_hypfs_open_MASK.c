
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_mode; TYPE_2__* i_sb; } ;
struct hypfs_sb_info {int lock; } ;
struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {int f_mode; int private_data; TYPE_1__ f_path; } ;
struct TYPE_8__ {char* i_private; } ;
struct TYPE_7__ {TYPE_4__* d_inode; } ;
struct TYPE_6__ {struct hypfs_sb_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_7, struct file *VAR_8)
{
 char *VAR_9 = VAR_8->f_path.dentry->d_inode->i_private;
 struct hypfs_sb_info *VAR_10;

 if (VAR_8->f_mode & VAR_3) {
  if (!(VAR_7->i_mode & VAR_6))
   return -VAR_0;
 }
 if (VAR_8->f_mode & VAR_2) {
  if (!(VAR_7->i_mode & VAR_5))
   return -VAR_0;
 }

 VAR_10 = VAR_7->i_sb->s_fs_info;
 if(VAR_9) {
  FUNC_1(&VAR_10->lock);
  VAR_8->private_data = FUNC_0(VAR_9, VAR_4);
  if (!VAR_8->private_data) {
   FUNC_2(&VAR_10->lock);
   return -VAR_1;
  }
  FUNC_2(&VAR_10->lock);
 }
 return FUNC_3(VAR_7, VAR_8);
}
