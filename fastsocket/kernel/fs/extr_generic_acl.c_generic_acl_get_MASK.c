
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct generic_acl_operations {struct posix_acl* (* getacl ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*,void*,size_t) ;
 struct posix_acl* FUNC_2 (struct inode*,int) ;

int
FUNC_3(struct inode *VAR_1, struct generic_acl_operations *VAR_2,
  int VAR_3, void *VAR_4, size_t VAR_5)
{
 struct posix_acl *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->getacl(VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 FUNC_0(VAR_6);

 return VAR_7;
}
