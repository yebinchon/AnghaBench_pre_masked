
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct inode *VAR_0, struct dentry *VAR_1,
       struct nameidata *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 return FUNC_3(VAR_3, VAR_1);
}
