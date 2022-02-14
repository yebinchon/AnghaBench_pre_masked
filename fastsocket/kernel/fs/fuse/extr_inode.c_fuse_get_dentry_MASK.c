
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qstr {int len; char* name; } ;
struct inode {scalar_t__ i_generation; } ;
struct fuse_inode_handle {scalar_t__ nodeid; scalar_t__ generation; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int export_support; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct super_block*,scalar_t__,struct qstr*,struct fuse_entry_out*,struct inode**) ;
 struct fuse_conn* FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*,scalar_t__,int ,scalar_t__*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct super_block *VAR_6,
          struct fuse_inode_handle *VAR_7)
{
 struct fuse_conn *VAR_8 = FUNC_5(VAR_6);
 struct inode *VAR_9;
 struct dentry *VAR_10;
 int VAR_11 = -VAR_2;

 if (VAR_7->nodeid == 0)
  goto out_err;

 VAR_9 = FUNC_7(VAR_6, VAR_7->nodeid, VAR_5, &VAR_7->nodeid);
 if (!VAR_9) {
  struct fuse_entry_out VAR_12;
  struct qstr VAR_13;

  if (!VAR_8->export_support)
   goto out_err;

  VAR_13.len = 1;
  VAR_13.name = ".";
  VAR_11 = FUNC_4(VAR_6, VAR_7->nodeid, &VAR_13, &VAR_12,
           &VAR_9);
  if (VAR_11 && VAR_11 != -VAR_1)
   goto out_err;
  if (VAR_11 || !VAR_9) {
   VAR_11 = -VAR_2;
   goto out_err;
  }
  VAR_11 = -VAR_0;
  if (FUNC_6(VAR_9) != VAR_7->nodeid)
   goto out_iput;
 }
 VAR_11 = -VAR_2;
 if (VAR_9->i_generation != VAR_7->generation)
  goto out_iput;

 VAR_10 = FUNC_2(VAR_9);
 if (!FUNC_1(VAR_10) && FUNC_6(VAR_9) != VAR_3) {
  VAR_10->d_op = &VAR_4;
  FUNC_3(VAR_10);
 }

 return VAR_10;

 out_iput:
 FUNC_8(VAR_9);
 out_err:
 return FUNC_0(VAR_11);
}
