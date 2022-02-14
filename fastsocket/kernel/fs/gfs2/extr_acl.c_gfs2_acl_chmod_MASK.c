
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; } ;
struct gfs2_inode {struct inode i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 struct posix_acl* FUNC_2 (struct gfs2_inode*,int ) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 int FUNC_4 (struct gfs2_inode*,struct iattr*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_8 (struct posix_acl*,int ) ;
 int FUNC_9 (struct posix_acl*) ;
 unsigned int FUNC_10 (struct posix_acl*,char*,unsigned int) ;
 int FUNC_11 (struct inode*,int ,struct posix_acl*) ;

int FUNC_12(struct gfs2_inode *VAR_3, struct iattr *VAR_4)
{
 struct inode *VAR_5 = &VAR_3->i_inode;
 struct posix_acl *VAR_6, *VAR_7;
 char *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 if (!VAR_6)
  return FUNC_3(VAR_5, VAR_4);

 VAR_7 = FUNC_8(VAR_6, VAR_2);
 VAR_10 = -VAR_1;
 if (!VAR_7)
  goto out;
 FUNC_9(VAR_6);
 VAR_6 = VAR_7;

 VAR_10 = FUNC_7(VAR_6, VAR_4->ia_mode);
 if (!VAR_10) {
  VAR_9 = FUNC_10(VAR_6, ((void*)0), 0);
  VAR_8 = FUNC_6(VAR_9, VAR_2);
  VAR_10 = -VAR_1;
  if (VAR_8 == ((void*)0))
   goto out;
  FUNC_10(VAR_6, VAR_8, VAR_9);
  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_8);
  FUNC_5(VAR_8);
  FUNC_11(&VAR_3->i_inode, VAR_0, VAR_6);
 }

out:
 FUNC_9(VAR_6);
 return VAR_10;
}
