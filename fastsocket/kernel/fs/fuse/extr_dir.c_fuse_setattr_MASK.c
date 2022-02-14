
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; int * ia_file; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct iattr*,int *) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;

 if (!FUNC_0(FUNC_2(VAR_4)))
  return -VAR_1;

 if (VAR_3->ia_valid & VAR_0)
  return FUNC_1(VAR_4, VAR_3, VAR_3->ia_file);
 else
  return FUNC_1(VAR_4, VAR_3, ((void*)0));
}
