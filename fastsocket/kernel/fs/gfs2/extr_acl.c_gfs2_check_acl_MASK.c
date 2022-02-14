
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct posix_acl*) ;
 struct posix_acl* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*,struct posix_acl*,int) ;
 int FUNC_5 (struct posix_acl*) ;

int FUNC_6(struct inode *VAR_2, int VAR_3)
{
 struct posix_acl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(FUNC_0(VAR_2), VAR_0);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 if (VAR_4) {
  VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_3);
  FUNC_5(VAR_4);
  return VAR_5;
 }

 return -VAR_1;
}
