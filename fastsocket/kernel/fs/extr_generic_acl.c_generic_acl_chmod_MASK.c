
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct generic_acl_operations {int (* setacl ) (struct inode*,int ,struct posix_acl*) ;struct posix_acl* (* getacl ) (struct inode*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_2 (struct posix_acl*,int ) ;
 int FUNC_3 (struct posix_acl*) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*,int ,struct posix_acl*) ;

int
FUNC_6(struct inode *VAR_4, struct generic_acl_operations *VAR_5)
{
 struct posix_acl *VAR_6, *VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_4->i_mode))
  return -VAR_2;
 VAR_6 = VAR_5->getacl(VAR_4, VAR_0);
 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  FUNC_3(VAR_6);
  if (!VAR_7)
   return -VAR_1;
  VAR_8 = FUNC_1(VAR_7, VAR_4->i_mode);
  if (!VAR_8)
   VAR_5->setacl(VAR_4, VAR_0, VAR_7);
  FUNC_3(VAR_7);
 }
 return VAR_8;
}
