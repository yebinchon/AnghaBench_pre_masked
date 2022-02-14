
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_uid; scalar_t__ i_gid; } ;
struct iattr {int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,struct iattr*) ;

int FUNC_4(struct dentry *VAR_4, struct iattr *VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (VAR_7)
  return VAR_7;

 if ((VAR_5->ia_valid & VAR_2 && VAR_5->ia_uid != VAR_6->i_uid) ||
     (VAR_5->ia_valid & VAR_0 && VAR_5->ia_gid != VAR_6->i_gid)) {
  if (FUNC_3(VAR_6, VAR_5))
   return -VAR_3;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5);

 if (!VAR_7 && (VAR_5->ia_valid & VAR_1))
  VAR_7 = FUNC_2(VAR_6);

 return VAR_7;
}
