
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 struct posix_acl* FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,struct posix_acl*,int) ;
 int FUNC_4 (struct posix_acl*) ;

int FUNC_5(struct inode *VAR_2, int VAR_3)
{
 struct posix_acl *VAR_4 = FUNC_2(VAR_2, VAR_0);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (VAR_4) {
  int VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_3);
  FUNC_4(VAR_4);
  return VAR_5;
 }

 return -VAR_1;
}
