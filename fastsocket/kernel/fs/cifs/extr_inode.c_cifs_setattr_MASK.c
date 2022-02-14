
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct iattr {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct cifs_tcon {scalar_t__ unix_ext; } ;
struct cifs_sb_info {int dummy; } ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 struct cifs_tcon* FUNC_1 (struct cifs_sb_info*) ;
 int FUNC_2 (struct dentry*,struct iattr*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

int
FUNC_4(struct dentry *VAR_0, struct iattr *VAR_1)
{
 struct inode *VAR_2 = VAR_0->d_inode;
 struct cifs_sb_info *VAR_3 = FUNC_0(VAR_2->i_sb);
 struct cifs_tcon *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->unix_ext)
  return FUNC_3(VAR_0, VAR_1);

 return FUNC_2(VAR_0, VAR_1);


}
