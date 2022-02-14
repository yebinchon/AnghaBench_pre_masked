
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->ia_valid & VAR_0) {
  VAR_4 = FUNC_2(VAR_3, VAR_2->ia_size);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_0(VAR_3, VAR_2);

 return VAR_4;
}
