
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;
struct inode {int i_sb; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int export_support; } ;
struct dentry {int * d_op; struct inode* d_inode; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,scalar_t__,struct qstr*,struct fuse_entry_out*,struct inode**) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_4)
{
 struct inode *VAR_5 = VAR_4->d_inode;
 struct fuse_conn *VAR_6 = FUNC_5(VAR_5);
 struct inode *VAR_7;
 struct dentry *VAR_8;
 struct fuse_entry_out VAR_9;
 struct qstr VAR_10;
 int VAR_11;

 if (!VAR_6->export_support)
  return FUNC_0(-VAR_1);

 VAR_10.len = 2;
 VAR_10.name = "..";
 VAR_11 = FUNC_4(VAR_5->i_sb, FUNC_6(VAR_5),
          &VAR_10, &VAR_9, &VAR_7);
 if (VAR_11) {
  if (VAR_11 == -VAR_0)
   return FUNC_0(-VAR_1);
  return FUNC_0(VAR_11);
 }

 VAR_8 = FUNC_2(VAR_7);
 if (!FUNC_1(VAR_8) && FUNC_6(VAR_7) != VAR_2) {
  VAR_8->d_op = &VAR_3;
  FUNC_3(VAR_8);
 }

 return VAR_8;
}
