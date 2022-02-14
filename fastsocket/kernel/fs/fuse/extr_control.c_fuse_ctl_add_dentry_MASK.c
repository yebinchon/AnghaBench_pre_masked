
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_operations {int dummy; } ;
struct inode {int i_mode; int i_nlink; struct fuse_conn* i_private; struct file_operations const* i_fop; struct inode_operations const* i_op; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;
struct fuse_conn {scalar_t__ ctl_ndents; int group_id; int user_id; struct dentry** ctl_dentry; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,char const*) ;
 int VAR_2 ;
 struct inode* FUNC_3 (int ) ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_3,
       struct fuse_conn *VAR_4,
       const char *VAR_5,
       int VAR_6, int VAR_7,
       const struct inode_operations *VAR_8,
       const struct file_operations *VAR_9)
{
 struct dentry *VAR_10;
 struct inode *VAR_11;

 FUNC_0(VAR_4->ctl_ndents >= VAR_1);
 VAR_10 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_10)
  return ((void*)0);

 VAR_4->ctl_dentry[VAR_4->ctl_ndents++] = VAR_10;
 VAR_11 = FUNC_3(VAR_2);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->i_mode = VAR_6;
 VAR_11->i_uid = VAR_4->user_id;
 VAR_11->i_gid = VAR_4->group_id;
 VAR_11->i_atime = VAR_11->i_mtime = VAR_11->i_ctime = VAR_0;

 if (VAR_8)
  VAR_11->i_op = VAR_8;
 VAR_11->i_fop = VAR_9;
 VAR_11->i_nlink = VAR_7;
 VAR_11->i_private = VAR_4;
 FUNC_1(VAR_10, VAR_11);
 return VAR_10;
}
