
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct fuse_entry_out {int dummy; } ;
struct dentry {int * d_op; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct fuse_entry_out*) ;
 int VAR_3 ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,scalar_t__,int *,struct fuse_entry_out*,struct inode**) ;
 struct dentry* FUNC_6 (struct dentry*,struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_4, struct dentry *VAR_5,
      struct nameidata *VAR_6)
{
 int VAR_7;
 struct fuse_entry_out VAR_8;
 struct inode *VAR_9;
 struct dentry *VAR_10;
 bool VAR_11 = 1;

 VAR_7 = FUNC_5(VAR_4->i_sb, FUNC_7(VAR_4), &VAR_5->d_name,
          &VAR_8, &VAR_9);
 if (VAR_7 == -VAR_1) {
  VAR_11 = 0;
  VAR_7 = 0;
 }
 if (VAR_7)
  goto out_err;

 VAR_7 = -VAR_0;
 if (VAR_9 && FUNC_7(VAR_9) == VAR_2)
  goto out_iput;

 VAR_10 = FUNC_6(VAR_5, VAR_9);
 VAR_7 = FUNC_2(VAR_10);
 if (FUNC_1(VAR_10))
  goto out_err;

 VAR_5 = VAR_10 ? VAR_10 : VAR_5;
 VAR_5->d_op = &VAR_3;
 if (VAR_11)
  FUNC_3(VAR_5, &VAR_8);
 else
  FUNC_4(VAR_5);

 return VAR_10;

 out_iput:
 FUNC_8(VAR_9);
 out_err:
 return FUNC_0(VAR_7);
}
