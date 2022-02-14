
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 struct posix_acl* FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (struct posix_acl*,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, int VAR_2, void *VAR_3, size_t VAR_4)
{
 struct posix_acl *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);
 FUNC_3(VAR_5);

 return VAR_6;
}
