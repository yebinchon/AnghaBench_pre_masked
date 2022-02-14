
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct pohmelfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct pohmelfs_inode*,int ,int ,int ) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

int FUNC_4(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct pohmelfs_inode *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, 0, ~0, VAR_0);
 if (VAR_5)
  goto err_out_exit;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5)
  goto err_out_exit;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5)
  goto err_out_exit;

 return 0;

err_out_exit:
 return VAR_5;
}
