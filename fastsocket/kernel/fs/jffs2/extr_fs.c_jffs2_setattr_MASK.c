
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct iattr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iattr*) ;

int FUNC_3(struct dentry *VAR_1, struct iattr *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->d_inode, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1->d_inode, VAR_2);
 if (!VAR_3 && (VAR_2->ia_valid & VAR_0))
  VAR_3 = FUNC_1(VAR_1->d_inode);

 return VAR_3;
}
