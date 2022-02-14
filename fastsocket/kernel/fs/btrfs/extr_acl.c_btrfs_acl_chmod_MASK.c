
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct posix_acl*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *,struct inode*,struct posix_acl*,int ) ;
 int FUNC_6 (struct posix_acl*,int ) ;
 struct posix_acl* FUNC_7 (struct posix_acl*,int ) ;
 int FUNC_8 (struct posix_acl*) ;

int FUNC_9(struct inode *VAR_4)
{
 struct posix_acl *VAR_5, *VAR_6;
 int VAR_7 = 0;

 if (FUNC_3(VAR_4->i_mode))
  return -VAR_2;

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_7(VAR_5, VAR_3);
 FUNC_8(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_6, VAR_4->i_mode);
 if (!VAR_7)
  VAR_7 = FUNC_5(((void*)0), VAR_4, VAR_6, VAR_0);

 FUNC_8(VAR_6);

 return VAR_7;
}
