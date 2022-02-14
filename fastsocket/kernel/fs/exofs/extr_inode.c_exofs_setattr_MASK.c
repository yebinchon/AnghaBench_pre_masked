
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;

int FUNC_2(struct dentry *VAR_0, struct iattr *VAR_1)
{
 struct inode *VAR_2 = VAR_0->d_inode;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 return VAR_3;
}
