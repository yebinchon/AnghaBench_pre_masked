
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_blocks; int i_size; int i_nlink; int i_mode; int i_ino; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int * i_fop; int * i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int proc_dentry; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_5 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_6, struct dentry *VAR_7)
{
 struct inode *VAR_8 = VAR_7->d_inode;
 struct inode *VAR_9 = FUNC_5(VAR_6);

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 if (FUNC_2(VAR_7->d_inode->i_mode)) {
  VAR_9->i_op = &VAR_2;
  VAR_9->i_fop = &VAR_1;
 } else if (FUNC_3(VAR_7->d_inode->i_mode)) {
  VAR_9->i_op = &VAR_5;
  VAR_9->i_fop = &VAR_3;
 } else {
  VAR_9->i_op = &VAR_4;
  VAR_9->i_fop = &VAR_3;
 }

 FUNC_1(VAR_9)->proc_dentry = FUNC_4(VAR_7);

 VAR_9->i_uid = VAR_8->i_uid;
 VAR_9->i_gid = VAR_8->i_gid;
 VAR_9->i_atime = VAR_8->i_atime;
 VAR_9->i_mtime = VAR_8->i_mtime;
 VAR_9->i_ctime = VAR_8->i_ctime;
 VAR_9->i_ino = VAR_8->i_ino;
 VAR_9->i_mode = VAR_8->i_mode;
 VAR_9->i_nlink = VAR_8->i_nlink;
 VAR_9->i_size = VAR_8->i_size;
 VAR_9->i_blocks = VAR_8->i_blocks;

 return VAR_9;
}
