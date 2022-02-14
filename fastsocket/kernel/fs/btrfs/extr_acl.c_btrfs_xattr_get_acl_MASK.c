
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct posix_acl*) ;
 struct posix_acl* FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct posix_acl*) ;
 int FUNC_5 (struct posix_acl*,void*,size_t) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, int VAR_3,
          void *VAR_4, size_t VAR_5)
{
 struct posix_acl *VAR_6;
 int VAR_7 = 0;

 if (!FUNC_1(VAR_2))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_2, VAR_3);

 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_5);
 FUNC_4(VAR_6);

 return VAR_7;
}
