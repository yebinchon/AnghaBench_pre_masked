
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;

int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2)
{
 if (!FUNC_1(VAR_2))
  return -VAR_0;

 FUNC_0(VAR_2->d_inode);
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 return 0;
}
